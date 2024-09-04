#include<iostream>
using namespace std;

int main()
{
    long long int a, b, c, d, x, y;
    cin >> a >> b >> c >> d;
    x = max(a * c, a * d);
    y = max(b * c, b * d);
    cout << max(x, y);
}
