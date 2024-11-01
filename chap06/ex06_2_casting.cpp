#include <iostream>
#include <string>
using namespace std;

double square(double a);

double square(double a) {
    return a * a;
}

int main(void)
{
    // char ( int ( long ( float ( double
    cout << square(3) << endl;
    cout << square('A') << endl;

    return 0;
}