#include <iostream>
using namespace std;

int main(void)
{
    int *p = new int; // 동적할당이 안되면 NULL문자 반환

    if(!p) { // if(p == NULL) {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    *p = 5;
    int n = *p;
    cout << "p = " << *p << endl;
    cout << "n = " << n << endl;

    delete p;

    return 0;
}