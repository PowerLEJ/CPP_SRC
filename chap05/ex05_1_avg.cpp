#include <iostream>
using namespace std;

// 참조 매개변수를 사용하면 변수자체(인자)를 넣고, (C++)
// 일반 매개변수를 사용하면 변수(인자)의 값을 복사한다. (C)
bool average(int a[], int size, int& para_avg) {
	if(size <= 0)
		return false;
	int sum = 0;
	for(int i=0; i<size; i++) 
		sum += a[i];
	para_avg = sum/size;
	return true;
}

int main() {
	int x[] = {0,1,2,3,4,5};
	int avg;
	if(average(x, 6, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;

	if(average(x, -2, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류 " << endl;
}

// - 값에 의한 호출(객체)
// 1. 함수 내에서 매개변수 객체를 변경하여도 원본객체를 변경하지 않는다. 
// 2. 매개변수에 객체(인자값)를 복사한다. (복사할 멤버변수가 많으면 시간이 걸린다.)
// 3. 매개변수의 생성자는 실행되지 않고, 소멸자는 실행된다. (비대칭구조)

// - 참조에 의한 호출(객체)
// 1. 함수 내에서 매개변수 객체를 변경하면 원본객체가 변경된다. 
// 2. 매개변수에 객체를 복사하지 않는다. (실행 속도가 빠르다.)
// 3. 매개변수의 생성자와 소멸자를 실행하지 않는다.

// - 주소에 의한 호출(객체)
// 1. 함수 내에서 매개변수 객체를 변경하면 원본객체가 변경된다. 
// 2. 매개변수에 객체를 복사하지 않는다. (실행 속도가 빠르다.)
// 3. 매개변수의 생성자와 소멸자를 실행하지 않는다.

/*
#include <iostream>
using namespace std;

bool average(int a[], int size, int *para_avg) {
	if(size <= 0)
		return false;
	int sum = 0;
	for(int i=0; i<size; i++) 
		sum += a[i];
	*para_avg = sum/size;
	return true;
}

int main() {

	int x[] = {0,1,2,3,4,5};
	int avg;
	if(average(x, 6, &avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;

	if(average(x, -2, &avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류 " << endl;
}
*/