#include <iostream>
using namespace std;

int main(void)
{
    string test = "LEE";
    cout << test.length() << endl; // 널문자를 포함하지 않음

    string names[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "이름 >> ";
        getline(cin, names[i], '\n'); // 키보드로 들어오는 입력을 names의 요소에 저장 ('\n'문자가 입력될 때까지)
    }
    
    string latter = names[0];
    for (int i = 1; i < 5; i++)
    {
        if(latter < names[i]) {
            latter = names[i];
        }
    }

    cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;

    return 0;
}