// add()함수를 호출하는 main()함수는 다음과 같다.

#include <iostream>
#include <string>
using namespace std;

int add(int *x, int y, int *z = NULL);

int add(int *x, int y, int *z) {
    int sum = 0;

    for (int i = 0; i < y; i++)
    {
        sum += x[i];
        if(z != NULL) {
            sum += z[i];
        }
    }
    return sum;
}

int main(void)
{
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,10};
    int c = add(a, 5); // 배열 a의 정수를 모두 더한 값 리턴
    int d = add(a, 5, b); // 배열 a와 b의 정수를 모두 더한 값 리턴
    cout << c << endl;
    cout << d << endl;

    return 0;
}