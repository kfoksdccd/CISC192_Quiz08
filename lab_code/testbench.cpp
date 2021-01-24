//
// Don't modify code in this file, with the exception
// of adding test cases.
//
#include <iostream>
#include <iomanip>
#include <random>
#include "apex_code.h"

using namespace std;

bool near(double expected, double result, double threshold)
{
    return abs(expected - result) < threshold;
}

// Use when testing double/float values
bool testNear(double expected, double result)
{
    if(false == near(expected, result, 0.002))
    {
        cout << "FAILED: Expected " << expected << ", received " << result << ".\n";
    }
    else {
        cout << "PASS\n";
    }

    return expected == result;
}

// Use for everything other than doubles/floats
template<typename T> bool test(T expected, T result)
{
    if(expected != result)
    {
        cout << "FAILED: Expected " << expected << ", received " << result << ".\n";
    }
    else {
        cout << "PASS\n";
    }

    return expected == result;
}
int main()
{
	ZodiacSign firstSign("this", ZodiacSign::Elements::AIR, "that", ZodiacSign::FEBRUARY);
	(void)test<string>("this", firstSign.GetName());
	(void)test<ZodiacSign::Months>(ZodiacSign::FEBRUARY, firstSign.GetMonth());

	Zodiac testZodiac;
	(void)test<bool>(false, testZodiac.AddSign("this", ZodiacSign::INVALID_ELEMENT, "that", ZodiacSign::FEBRUARY));
	(void)test<bool>(false, testZodiac.AddSign("this", ZodiacSign::NUM_ELEMENTS, "that", ZodiacSign::FEBRUARY));
	(void)test<bool>(false, testZodiac.AddSign("this", static_cast<ZodiacSign::Elements>(-1), "that", ZodiacSign::FEBRUARY));
	(void)test<bool>(false, testZodiac.AddSign("this", ZodiacSign::FIRE, "that", ZodiacSign::INVALID_MONTH));
	(void)test<bool>(false, testZodiac.AddSign("this", ZodiacSign::FIRE, "that", ZodiacSign::NUM_MONTHS));
	(void)test<bool>(false, testZodiac.AddSign("this", ZodiacSign::FIRE, "that", static_cast<ZodiacSign::Months>(-1)));

	(void)test<bool>(true, testZodiac.AddSign("NewSign", ZodiacSign::FIRE, "I made it up", ZodiacSign::MARCH));

	testZodiac.Clear();

	testZodiac.Populate();
	// March was added as part of the populate call so this should fail as a second add attempt
	(void)test<bool>(false, testZodiac.AddSign("NewSign", ZodiacSign::FIRE, "I made it up", ZodiacSign::MARCH));
	// LEO was added as part of the populate call so this should fail as a second add attempt
	(void)test<bool>(false, testZodiac.AddSign("LEO", ZodiacSign::FIRE, "I made it up", ZodiacSign::MARCH));

	ZodiacSign mySign = testZodiac.GetMySign(ZodiacSign::JULY);
	(void)test<string>("CANCER", mySign.GetName());
	mySign = testZodiac.GetMySign(ZodiacSign::NUM_MONTHS);
	(void)test<string>("None", mySign.GetName());

	return 0;
}
