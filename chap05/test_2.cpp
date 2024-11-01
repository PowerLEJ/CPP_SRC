// 다음과 같이 선언된 정수를 저장하는 스택 클래스 MyIntStack를 구현하라.
// MyIntStack 스택에 저장할 수 잉ㅆ는 정수의 최대 개수는 10이다
/*
0 1 2 3 4 5 6 7 8 9
11번째 stack full
9 8 7 6 5 4 3 2 1 0
11번째 stack empty
*/

#include <iostream>
#include <string>

using namespace std;

class MyIntStack {
	int p[10];      // 최대 10개의 정수 저장
	int tos;        // 스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack();
	bool push(int n);   // 정수 n 푸쉬. 꽉차 있으면, false, 아니면 true 리턴
	bool pop(int& n);   // 팝하여 n에 저장, 스택이 비어 있으면 false, 아니면 true 리턴
};

MyIntStack::MyIntStack() {
    for(int i = 0; i < 10; i++) this->p[i] = 0;
    this->tos = -1;
}

bool MyIntStack::push(int n) {
    if(tos >= 9) {
        return false;
    } else {
        tos++;
        p[tos] = n;
        return true;
    }
}
bool MyIntStack::pop(int& n) {
    if(tos <= -1) {
        return false;
    } else {
        n = p[tos];
        tos--;
        return true;
    }
}

int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;

	return 0;
}