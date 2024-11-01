// 에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.
// 주문 >> 에스프레소 4
// 8000원 입니다. 맛있게 드세요.
// 주문 >> 카푸치노 2
// 5000원 입니다. 맛있게 드세요.
// 주문 >> 아메리카노 4
// 9200원 입니다. 맛있게 드세요.
// 오늘 22200원을 판매하여 카페를 닫습니다. 내일 봐요~~~

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string coffee;
    int cnt, charge, sum = 0;

    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;

    for(int i = 0; i < 3; i++) {
        cout << "주문 >> ";
        cin >> coffee >>  cnt;

        if(coffee == "에스프레소") { charge = 2000 * cnt; }
        else if(coffee == "아메리카노") { charge = 2300 * cnt; }
        else if(coffee == "카푸치노") { charge = 2500 * cnt; }

        cout << charge << "원 입니다. 맛있게 드세요." << endl;

        sum += charge;

        if(i >= 2) {
            cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
        }
    }

    return 0;
}