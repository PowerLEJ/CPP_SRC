#include <iostream>
#include <string>
using namespace std;

void mySwap(int &a, int &b) { // call by reference 참조에 의한 호출
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}

// void mySwap(int a, int b) { // call by value 값에 의한 호출
//     int tmp;

//     tmp = a;
//     a = b;
//     b = tmp;
// }

int main(void)
{
    int m = 2, n = 9;
    mySwap(m, n);
    cout << m << ", " << n << endl;

    return 0;
}