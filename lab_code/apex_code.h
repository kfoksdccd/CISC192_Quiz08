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
    Circle(double radius);
    Circle(double x, double y, double radius);
    double GetRadius() const;
    double GetX() const;
    double GetY() const;
    double GetArea();
    static int GetTotal();

private:
    void          init(double x, double y, double radius);
    double        _radius;
    double        _x;
    double        _y;
    static int    nTotal;
};
bool operator==(const Circle& lhs, const Circle& rhs);
bool operator<(const Circle& lhs, const Circle& rhs);

#endif //APEXLAB_APEX_CODE_H
