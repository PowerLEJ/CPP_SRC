/*
1   2   3   4   5   6   7   8   9   10
...
...
91  92  93  94  95  96  97  98  99  100
*/

#include <iostream>
using namespace std;

int main(void)
{
    int num = 1;

    for(int i = 1; i < 11; i++) {
        for(int j = 1; j < 11; j++) {
            // cout << j + (10 * (i - 1)) << "\t";
            cout << num << "\t";
            num++;
        }
        cout << endl;
    }

    return 0;
}