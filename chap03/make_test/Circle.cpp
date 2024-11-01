#include <iostream>
using namespace std;
#include "Circle.h"

// 클래스 구현
// 기본 생성자 함수
Circle::Circle() : Circle(1) { // 위임 생성자 함수
    // radius = 1;
    // cout << "기본 반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) { // 매개변수가 있는 생성자 함수
    radius = r;
    cout << "설정 반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() {
    cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea(void) {
    return 3.14 * radius * radius;
}