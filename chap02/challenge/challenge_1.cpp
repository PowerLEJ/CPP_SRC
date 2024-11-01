// 가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요.
// 로미오 >> 가위
// 줄리엣 >> 바위
// 줄리엣이 이겼습니다.
// 비겼습니다.

#include <iostream>
using namespace std;
#include <cstring>

int main(void)
{
    // char lo[10], jul[10];
    string lo, jul;

    cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
    
    while(true) {
        cout << "로미오 >> ";
        cin >> lo;
        // getline(cin, lo);

        // if((strcmp(lo, "가위") == 0) || (strcmp(lo, "바위") == 0) || (strcmp(lo, "보") == 0)) { break; }
        if((lo == "가위") || (lo == "바위") || (lo == "보")) { break; }

        cout << "다시 시도해주세요" << endl;
    }

    while(true) {
        cout << "줄리엣 >> ";
        cin >> jul;
        // getline(cin, jul);

        // if((strcmp(jul, "가위") == 0) || (strcmp(jul, "바위") == 0) || (strcmp(jul, "보") == 0)) { break; }
        if((jul == "가위") || (jul == "바위") || (jul == "보")) { break; }

        cout << "다시 시도해주세요" << endl;
    }

    // if(strcmp(lo, jul) == 0) { cout << "비겼습니다." << endl; }
    // else {
    //     if(strcmp(lo, "가위") == 0) {
    //         if(strcmp(jul, "바위") == 0) { cout << "줄리엣이 이겼습니다." << endl; }
    //         else if(strcmp(jul, "보") == 0) { cout << "로미오가 이겼습니다." << endl; }
    //     } else if(strcmp(lo, "바위") == 0) {
    //         if(strcmp(jul, "가위") == 0) { cout << "로미오가 이겼습니다." << endl; }
    //         else if(strcmp(jul, "보") == 0) { cout << "줄리엣이 이겼습니다." << endl; }
    //     } else if(strcmp(lo, "보") == 0) {
    //         if(strcmp(jul, "가위") == 0) { cout << "줄리엣이 이겼습니다." << endl; }
    //         else if(strcmp(jul, "바위") == 0) { cout << "로미오가 이겼습니다." << endl; }
    //     }
    // }

    if(lo == jul) { cout << "비겼습니다." << endl; }
    else {
        if(lo == "가위") {
            if(jul == "바위") { cout << "줄리엣이 이겼습니다." << endl; }
            else if(jul == "보") { cout << "로미오가 이겼습니다." << endl; }
        } else if(lo == "바위") {
            if(jul == "가위") { cout << "로미오가 이겼습니다." << endl; }
            else if(jul == "보") { cout << "줄리엣이 이겼습니다." << endl; }
        } else if(lo == "보") {
            if(jul == "가위") { cout << "줄리엣이 이겼습니다." << endl; }
            else if(jul == "바위") { cout << "로미오가 이겼습니다." << endl; }
        }
    }

    return 0;
}