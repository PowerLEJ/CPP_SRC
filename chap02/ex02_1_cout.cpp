#include <iostream>
using namespace std;

double area(int r); // 함수 선언

int main(void)
{
    int n = 3;
    char c = '#';

    cout << "Hello\n" << "첫번째 맛보기 입니다.\n"; // 표준 출력
    cout << "10 + 20 = " << 10 + 20 << endl;
    cout << c << 5.5 << " - " << n << " hello " << true << endl;

    cout << "면적은 " << area(n) << endl; // 면적을 구하는 함수 호출

    return 0;
}

double area(int r) // 함수 정의(구현)
{
    return 3.14 * r * r;
}