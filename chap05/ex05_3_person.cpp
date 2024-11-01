#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Person
{
private:
    char *name;
    int id;
public:
    Person(int id, const char *name);
    Person(Person &c); // 복사 생성자
    ~Person();
    void changeName(const char *name);
    void show();
};
Person::Person(int id, const char *name) {
    this->id = id;

    // 동적할당 후 복사
    int len = strlen(name); // name의 문자 개수(널은 포함하지 않음.)
    // "Kitae"라는 상수 영역은 건드릴 수 없기 때문에 heap영역에 공간을 만든다. (new, delete)
    this->name = new char[len + 1]; // 공간 // 널문자 때문에 공간을 1개 더 만들어야 해서 +1
    
    strcpy(this->name, name);
}

Person::Person(Person &c) {
    this->id = c.id;

    int len = strlen(c.name);
    this->name = new char[len + 1]; // 깊은 복사 : 새로이 동적할당을 받고, 원본의 데이터를 복사
    strcpy(this->name, c.name);
    // this->name = c.name; // 얕은 복사 : 동적 할당을 받은 변수의 주소값을 공유
}

Person::~Person() {
    if(this->name) { delete [] name; } // 배열 지워줄 때
}

void Person::changeName(const char *name) {
    int len = strlen(this->name);
    // if(len < strlen(name)) {
    //     cout << len << " 보다 적은 이름을 입력하세요." << endl;
    //     return;
    // }
    
    delete[] this->name; // 기존 이름 메모리 해제
    this->name = new char[len + 1]; // 새 메모리 할당

    strcpy(this->name, name);
}

void Person::show() {
    cout << id << ", " << name << endl;
}

int main(void)
{
    Person father(1, "Kitae");
    Person daughter(father); // 복사 생성자 호출

    cout << "daughter 객체 생성 직후 -----" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");
    cout << "daughter의 이름을 Grace로 변경한 후 -----" << endl;
    father.show();
    daughter.show();

    return 0;
}