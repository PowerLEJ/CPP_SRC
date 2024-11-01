#include <iostream>
using namespace std;
#include "Circle.h"

int main(void)
{
    Circle donut(1); // Circle 객체 생성
    // donut.radius = 1;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30); // Circle 객체 생성
    // pizza.radius = 30;
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;

    return 0;
}