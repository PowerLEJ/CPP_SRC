#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string song = "Falling in love with you"; // 대입연산자로 초기화
    string elvis("Elvis Presley"); // 생성자 함수로 초기화
    string singer;

    cout << song + "를 부른 가수는 ";
    cout << "(힌트 : 첫글자는 " << elvis[0] << ")? ";
    
    getline(cin, singer);
    if(singer == elvis) {
        cout << "맞았습니다~";
    } else {
        cout << "틀렸습니다.";
    }

    return 0;
}