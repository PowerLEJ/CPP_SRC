#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
public:
    int radius;             // 멤버 변수 선언
    Circle(); // 생성자 함수의 이름은 반드시 클래스의 이름과 같아야 함
    Circle(int r);
    ~Circle(); // 소멸자 함수(~)
    double getArea(void);   // 멤버 함수 선언
};

#endif