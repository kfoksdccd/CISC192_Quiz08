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

    LinkedList arList01;

    arList01.insertFromFile("quiz07_input01.txt");
    (void)test<string>("LinkedList (13): 5 20 16 8 22 100 68 96 8 68 2 98 10 \n", arList01.toString());
    (void)test<string>("LinkedList REV (13): 10 98 2 68 8 96 68 100 22 8 16 20 5 \n", arList01.RevtoString());
    arList01.deleteData(68);
    (void)test<string>("LinkedList (11): 5 20 16 8 22 100 96 8 2 98 10 \n", arList01.toString());
    arList01.deleteData(8);
    (void)test<string>("LinkedList (9): 5 20 16 22 100 96 2 98 10 \n", arList01.toString());
    arList01.deleteData(5);
    (void)test<string>("LinkedList (8): 20 16 22 100 96 2 98 10 \n", arList01.toString());
    arList01.deleteData(10);
    (void)test<string>("LinkedList (7): 20 16 22 100 96 2 98 \n", arList01.toString());
    arList01.deleteData(100);
    (void)test<string>("LinkedList REV (6): 98 2 96 22 16 20 \n", arList01.RevtoString());
    arList01.deleteData(98);
    (void)test<string>("LinkedList REV (5): 2 96 22 16 20 \n", arList01.RevtoString());
    arList01.deleteData(2);
    (void)test<string>("LinkedList (4): 20 16 22 96 \n", arList01.toString());
    arList01.deleteData(22);
    (void)test<string>("LinkedList REV (3): 96 16 20 \n", arList01.RevtoString());
    arList01.deleteData(16);
    (void)test<string>("LinkedList (2): 20 96 \n", arList01.toString());
    arList01.deleteData(20);
    (void)test<string>("LinkedList REV (1): 96 \n", arList01.RevtoString());
    arList01.deleteData(96);
    (void)test<string>("LinkedList (0): \n", arList01.toString());
    (void)test<string>("LinkedList REV (0): \n", arList01.RevtoString());

	return 0;
}
