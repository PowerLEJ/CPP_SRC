#include <iostream>
using namespace std;

class Circle {
private:
	int radius; 
public:
	Circle(const Circle& c); // 복사 생성자(참조에 의한 호출) 선언
    Circle(Circle *p); // 주소 복사 생성자 선언
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
}; 

Circle::Circle(const Circle& c) { // 복사 생성자 구현
	this->radius = c.radius;
	cout << "참조 복사 생성자 실행 radius = " << this->radius << endl;
}

Circle::Circle(Circle *p) {
    this->radius = p->radius;
    cout << "주소 복사 생성자 실행 radius = " << this->radius << endl;
}

int main() {
	Circle src(30); // src 객체의  보통 생성자 호출
	Circle dest(src); // dest 객체의 복사 생성자 호출
    Circle addr(&dest); 

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "참조 사본의 면적 = " << dest.getArea() << endl;
    cout << "주소 사본의 면적 = " << addr.getArea() << endl;
}