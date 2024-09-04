#include <iostream>

using namespace std;

int main()
{
    long long X, Y, addition, product, subtraction;
    cin >> X >> Y;
    addition = X + Y;
    product = X * Y;
    subtraction = X - Y;
    cout << X << " + " << Y << " = " << addition << endl;
    cout << X << " * " << Y << " = " << product << endl;
    cout << X << " - " << Y << " = " << subtraction << endl;
    return 0;
}
