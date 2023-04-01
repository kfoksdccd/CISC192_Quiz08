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
    if(false == near(expected, result, 0.001))
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
    Circle     firstCircle(4.5);
    Circle     secondCircle(0,0, 4.5);
    Circle     thirdCircle(1,2, 2.5);
    (void)test<bool>(true, (firstCircle == secondCircle));
    (void)test<bool>(false, (firstCircle < secondCircle));
    (void)test<bool>(true, (thirdCircle < firstCircle));
    testNear(4.5, firstCircle.GetRadius());
    testNear(4.5, firstCircle.GetRadius());
    testNear(1.0, thirdCircle.GetX());
    testNear(2.0, thirdCircle.GetY());
    testNear(2.0, thirdCircle.GetY());
    testNear(63.6173, secondCircle.GetArea());
    (void)test<int>(3, Circle::GetTotal());

	return 0;
}
