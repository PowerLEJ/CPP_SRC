// main()의 실행 결과가 다음과 같도록 Tower 클래스를 작성하라.
/*
    높이는 1미터
    높이는 100미터
*/

#include <iostream>
using namespace std;

class Tower {
public:
    int height;

    Tower();
    Tower(int x);

    int getHeight(void);
};

Tower::Tower() {
    height = 1;
}

Tower::Tower(int x) {
    height = x;
}

int Tower::getHeight() {
    return height;
}

int main(void)
{
    Tower myTower; // 1미터
    Tower seoulTower(100); // 100미터

    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

    return 0;
}