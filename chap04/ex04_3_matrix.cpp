#include <iostream>
using namespace std;

class Circle {
public:
    int radius;             // 멤버 변수 선언
    Circle(); // 생성자 함수의 이름은 반드시 클래스의 이름과 같아야 함
    Circle(int r);
    ~Circle(); // 소멸자 함수(~)
    double getArea(void);   // 멤버 함수 선언
    void setRadius(int r);
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

void Circle::setRadius(int r) {
    radius = r;
}

int main(void)
{
    Circle circles[2][3] = {
        { Circle(1), Circle(2), Circle(3) }, 
        { Circle(4), Circle(5), Circle(6) }
        };

    // 2중 for문을 이용한 값 설정
    // int val = 1;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         circles[i][j].setRadius(val);
    //         cout << "Circle [" << i << "," << j << "]의 면적은 " << circles[i][j].getArea() << "입니다." << endl;
    //         val++;
    //     }
    // }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Circle [" << i << "," << j << "]의 면적은 " << circles[i][j].getArea() << "입니다." << endl;
        }
        
    }

    return 0;
}