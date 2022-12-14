#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int result = pow(2, a);
    int lastDigit = result % 10;
    cout << lastDigit;
}
