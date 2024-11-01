// String 클래스를 이용하여 사용자가 입력한 영문 한줄을 문자열로 입력 받고,
// 거꾸로 출력하는 프로그램을 작성하라.

/*
아래에 한줄을 입력하세요.(exit를 입력하면 종료합니다.)
>> Delicious C++
++C suoicileD
>> I love programming.
.gnimmargorp evol I
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string title;
    cout << "아래에 한줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;

    while (true)
    {
        cout << ">> ";
        getline(cin, title, '\n');
        if(title == "exit") { break; }

        int len = title.length();

        for (int i = 0; i < len; i++)
        {
            cout << title[(len - 1) - i];
        }
        cout << endl;

        // string temp;
        // for (int i = (len - 1); i > (0 - 1); i--)
        // {
        //     temp += title[i];
        // }
        // cout << temp << endl;
    }
    
    return 0;
}