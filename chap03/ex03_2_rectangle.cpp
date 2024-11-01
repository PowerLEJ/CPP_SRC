#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;

    Rectangle(); // 기본 생성자
    Rectangle(int w);
    Rectangle(int w, int h);
    
    int getArea(void);
    bool isSuqre(void);
};

// 클래스 맴버 함수 구현
// ------------------------생성자 함수 구현
Rectangle::Rectangle() : Rectangle(1) { // 위임 생성자
    // width = 1;
    // height = 1;
}

Rectangle::Rectangle(int w) {
    width = w;
    height = w;
}

Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
}

// --------------------------멤버 함수 구현
int Rectangle::getArea(void) {
    return width * height;
}

bool Rectangle::isSuqre(void) {
    if(width == height) return true;
    else return false;
}

// ---------------main 함수 구현
int main(void)
{
    Rectangle rect_1;
    cout << "넓이 " << rect_1.getArea() << endl;
    if(rect_1.isSuqre()) cout << "정사각형" << endl;
    
    Rectangle rect_2(3);
    cout << "넓이 " << rect_2.getArea() << endl;
    if(rect_2.isSuqre()) cout << "정사각형" << endl;
    
    Rectangle rect_3(2, 12);
    cout << "넓이 " << rect_3.getArea() << endl;
    if(rect_3.isSuqre()) cout << "정사각형" << endl;
    

    return 0;
}