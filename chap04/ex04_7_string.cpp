#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str;
    string address("서울시 성북구 삼성동 389");
    string copyAddress(address);
    string str2 = "서울시 성북구"; // 연산자 재정의

    char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'};
    string title(text);

    cout << str << endl;
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;

    // 문자열 치환
    string a = "Java", b = "C++";
    a = b;

    // 문자열 비교
    string name = "Kitae";
    string alias = "Kito";
    int res = name.compare(alias); // 두 문자열이 같으면 0을 반환
    if(res == 0) { cout << "두 문자열이 같다." << endl; }
    else if (res < 0) { cout << name << " < " << alias << endl; } // name이 앞에 옴.
    else if (res > 0) { cout << alias << " < " << name << endl; } // alias가 앞에 옴.

    // 문자열 연결(추가) (C언어에서는 strcat함수)
    string c("I");
    c.append(" love");
    cout << c << endl;

    // 문자열 삽입
    string d("I love C++");
    d.insert(2, "really ");
    cout << d << endl;

    // 문자열 부분대체
    d.replace(2, 11, "study");
    cout << d << endl;

    // 문자열 길이 (널문자는 포함하지 않음)
    int length = d.length();
    cout << length << endl;

    // 문자열 삭제
    d.erase(0, 7);
    cout << d << endl;

    return 0;
}