#include <iostream>
using namespace std;

class Score {
public:
    int kor;
    int eng;
    int math;
    int tot;
    double avg;
    Score(); // 생성자 함수
    int getTotal(void);
    double geteAverage(void);
};

Score::Score() {
    kor = 0;
    eng = 0;
    math = 0;
    tot = 0;
    avg = 0;
}

int Score::getTotal(void) {
    tot = kor + eng + math;
    return tot;
}

double Score::geteAverage(void) {
    avg = tot / 3.0;
    return avg;
}

int main(void)
{
    Score student1;
    student1.kor = 80;
    student1.eng = 90;
    student1.math = 60;
    student1.getTotal();
    student1.geteAverage();

    cout << student1.tot << endl;
    cout << student1.avg << endl;

    return 0;
}