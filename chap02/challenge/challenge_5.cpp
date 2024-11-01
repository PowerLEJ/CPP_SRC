/*
5개의 실수를 입력하라 >> 5.2 -2.5 3.4 9.9 7.7
제일 큰 수 = 9.9
*/

#include <iostream>
using namespace std;

int main(void)
{
    // int x, y = 0;

    // cout << "두 수를 입력하라 >> ";
    // cin >> x >> y;

    // if(x > y) { cout << "큰 수 = " << x << endl; }
    // else if (x < y) { cout << "큰 수 = " << y << endl; }
    // else { cout << "같음" << endl; }

    double num[5];
    double max = 0.0;
    int cnt = 0;

    cnt = sizeof(num) / sizeof(num[0]);

    cout << "5개의 실수를 입력하라 >> ";

    // cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
    for (int i = 0; i < cnt; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < cnt; i++) {
        if (num[i] > max) { max = num[i]; }
    }

    cout << "제일 큰 수 = " << max << endl;

    return 0;
}