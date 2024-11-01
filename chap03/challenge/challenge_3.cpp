// 날짜를 다루는 Date 클래스를 작성하고자 한다. 
// Date 를 이용하는 main()과 실행 결과는 다음과 같다. 
// 클래스 Date 를 작성하여 아래 프로그램에 추가하라.
/*
1945년8월15일
2024,3,20
*/

#include <iostream>
#include <string>
// #include <sstream>
// #include <vector>
using namespace std;

class Date 
{
public:

    int year;
    int month;
    int day;
    string date;

    Date();
    Date(int y, int m, int d);
    Date(string x);

    void show(void);
    int getYear(void);
    int getMonth(void);
    int getDay(void);
};

Date::Date() {

}

Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

// Date::Date(string date) {
//     istringstream ss(date);
//     string temp;
//     vector<string> v;

//     while (getline(ss, temp, '/'))
//     {
//         v.push_back(temp);
//     }

//     year = stoi(v[0]);
//     month = stoi(v[1]);
//     day = stoi(v[2]);
// }


// CPP 스타일 코딩(string 클래스를 이용한 코딩)
Date::Date(string date) {
    int ind;

    year = stoi(date);

    ind = date.find('/'); // 원하는 문자의 위치 리턴
    month = stoi(date.substr(ind + 1));

    ind = date.find('/', ind + 1);
    day = stoi(date.substr(ind + 1));
}

// C 스타일 코딩(RAW 코딩)
// Date::Date(string date) {
//     int i = 0;
//     int index = 0;

//     // year 추출
//     char str_year[5] = {0, };
//     while(1) {
//         if(date[i + index] == '/') { // if(date[i + index] < '0' || date[i + index] > '9') {
//             str_year[i] = '\0';
//             i++;
//             index = i + index;
//             i = 0;
//             break;
//         }
//         str_year[i] = date[i + index];
//         i++;
//     }
//     year = stoi(str_year);

//     // month 추출
//     char str_month[3] = {0, };
//     while(1) {
//         if(date[i + index] == '/') { // if(date[i + index] < '0' || date[i + index] > '9') {
//             str_month[i] = '\0';
//             i++;
//             index = i + index;
//             i = 0;
//             break;
//         }
//         str_month[i] = date[i + index];
//         i++;
//     }
//     month = stoi(str_month);

//     // day 추출
//     char str_day[3] = {0, };
//     while(1) {
//         if(date[i + index] == '\0') { // if(date[i + index] < '0' || date[i + index] > '9') {
//             str_day[i] = '\0';
//             i++;
//             index = i + index;
//             i = 0;
//             break;
//         }
//         str_day[i] = date[i + index];
//         i++;
//     }
//     day = stoi(str_day);

// }

void Date::show(void) {
    cout << year << "년" << month << "월" << day << "일" << endl;
}

int Date::getYear(void) {
    return year;
}

int Date::getMonth(void) {
    return month;
}

int Date::getDay(void) {
    return day;
}

int main(void)
{
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;

    return 0;
}