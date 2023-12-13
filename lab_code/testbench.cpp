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

    arList01.pushback(5);
    arList01.pushback(20);
    arList01.pushback(16);
    arList01.pushback(8);
    arList01.pushback(22);
    arList01.pushback(100);
    arList01.pushback(68);
    arList01.pushback(96);
    arList01.pushback(8);
    arList01.pushback(68);
    arList01.pushback(2);
    arList01.pushback(98);
    arList01.pushback(10);
    (void)test<string>("LinkedList (13): [0]5 [1]20 [2]16 [3]8 [4]22 [5]100 [6]68 [7]96 [8]8 [9]68 [10]2 [11]98 [12]10 \n", arList01.toString());
    (void)test<string>("LinkedList REV (13): [12]10 [11]98 [10]2 [9]68 [8]8 [7]96 [6]68 [5]100 [4]22 [3]8 [2]16 [1]20 [0]5 \n", arList01.RevtoString());
    arList01.erase(6);
    (void)test<string>("LinkedList (12): [0]5 [1]20 [2]16 [3]8 [4]22 [5]100 [6]96 [7]8 [8]68 [9]2 [10]98 [11]10 \n", arList01.toString());
    arList01.erase(8);
    (void)test<string>("LinkedList (11): [0]5 [1]20 [2]16 [3]8 [4]22 [5]100 [6]96 [7]8 [8]2 [9]98 [10]10 \n", arList01.toString());
    arList01.erase(0);
    (void)test<string>("LinkedList (10): [0]20 [1]16 [2]8 [3]22 [4]100 [5]96 [6]8 [7]2 [8]98 [9]10 \n", arList01.toString());
    arList01.erase(9);
    (void)test<string>("LinkedList (9): [0]20 [1]16 [2]8 [3]22 [4]100 [5]96 [6]8 [7]2 [8]98 \n", arList01.toString());
    (void)test<string>("LinkedList REV (9): [8]98 [7]2 [6]8 [5]96 [4]100 [3]22 [2]8 [1]16 [0]20 \n", arList01.RevtoString());
    arList01.insert(1, 18);
    (void)test<string>("LinkedList (10): [0]20 [1]18 [2]16 [3]8 [4]22 [5]100 [6]96 [7]8 [8]2 [9]98 \n", arList01.toString());
    arList01.insert(0,101);
    (void)test<string>("LinkedList (11): [0]101 [1]20 [2]18 [3]16 [4]8 [5]22 [6]100 [7]96 [8]8 [9]2 [10]98 \n", arList01.toString());
    arList01.insert(11,9);
    (void)test<string>("LinkedList (11): [0]101 [1]20 [2]18 [3]16 [4]8 [5]22 [6]100 [7]96 [8]8 [9]2 [10]98 \n", arList01.toString());
    (void)test<string>("LinkedList REV (11): [10]98 [9]2 [8]8 [7]96 [6]100 [5]22 [4]8 [3]16 [2]18 [1]20 [0]101 \n", arList01.RevtoString());
    arList01.insert(10,9);
    (void)test<string>("LinkedList (12): [0]101 [1]20 [2]18 [3]16 [4]8 [5]22 [6]100 [7]96 [8]8 [9]2 [10]9 [11]98 \n", arList01.toString());
    (void)test<string>("LinkedList REV (12): [11]98 [10]9 [9]2 [8]8 [7]96 [6]100 [5]22 [4]8 [3]16 [2]18 [1]20 [0]101 \n", arList01.RevtoString());

    int    nSize = arList01.size();
    for ( int i = 0 ; i < nSize ; i++ ) {
        arList01.erase(0);
    }
    (void)test<string>("LinkedList (0): \n", arList01.toString());
    (void)test<string>("LinkedList REV (0): \n", arList01.RevtoString());

    return 0;
}
