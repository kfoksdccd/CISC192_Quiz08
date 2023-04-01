//
// Don't modify code in this file.
//
#ifndef APEXLAB_APEX_CODE_H
#define APEXLAB_APEX_CODE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Circle {
public:
    // Constructor with (0,0) as origin
    Circle(double radius);

    // Constructor with (x,y) as origin
    Circle(double x, double y, double radius);

    double GetRadius() const;
    double GetX() const;
    double GetY() const;

    // Compute the area of the circle
    double GetArea();

    // Return the total number of Circle being instantiated
    static int GetTotal();

private:
    double        _radius;
    double        _x;
    double        _y;
    static int    nTotal;
};

// When two Circles are equal, all of their non-static private data members are equal.
bool operator==(const Circle& lhs, const Circle& rhs);

// When CircleA is less than CircleB, it means the radius of CircleA is less than the radius of CircleB
bool operator<(const Circle& lhs, const Circle& rhs);

#endif //APEXLAB_APEX_CODE_H
