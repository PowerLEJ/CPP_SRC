#include <iostream>
using namespace std;

class Circle {
public:
    int radius;             // 멤버 변수 선언
    Circle(); // 생성자 함수의 이름은 반드시 클래스의 이름과 같아야 함
    Circle(int r);
    ~Circle(); // 소멸자 함수(~)
    double getArea(void);   // 멤버 함수 선언
};

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

int main(void)
{
    Circle donut;
    Circle pizza(30);

    // 객체의 이름으로 멤버 접근
    cout << donut.getArea() << endl;

    // 포인터
    Circle *p;
    p = &donut;
    cout << p->getArea() << endl;
    cout << (*p).getArea() << endl;

    p = &pizza;
    cout << p->getArea() << endl;
    cout << (*p).getArea() << endl;

    return 0;
}