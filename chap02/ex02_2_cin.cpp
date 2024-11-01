#include <iostream>
using namespace std;

int main(void)
{
    int width = 10;
    int height = 0;

    cout << "너비를 입력하세요 >> ";
    cin >> width; // 숫자로 변경되지 않는 값은 0을 반환한다
    cout << "높이를 입력하세요 >> ";
    cin >> height;
    cout << "면적은 " << width * height << endl;

    return 0;
}

// 너비를 입력하세요 >> 3
// 높이를 입력하세요 >> 5
// 면적은 15