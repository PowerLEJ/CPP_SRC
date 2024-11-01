// 다음 main()함수와 실행 결과를 참고하여 half()함수를 작성하라.
/*
10
*/

// #include <iostream>
// #include <string>
// using namespace std;

// void half(double &a) {
//     a /= 2;
// }

// int main(void)
// {
//     double n = 20;
//     half(n);    
//     cout << n << endl;

//     return 0;
// }


// 다음과 같이 동작하도록 combine()함수를 작성하라.
/*
I love you very much
*/
#include <iostream>
#include <string>
using namespace std;

void combine(string a, string b, string &c) {
    c = a + " " + b;
}

int main(void)
{
    string text1("I love you"), text2("very much");
    string text3;

    combine(text1, text2, text3);

    cout << text3 << endl;

    return 0;
}