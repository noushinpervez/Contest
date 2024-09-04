#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long double A, B;
    cin >> A >> B;
    long double result = (A - B) / A;
    cout << fixed << setprecision(18);
    cout << result * 100;
    return 0;
}
