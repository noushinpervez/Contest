#include <iostream>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np, ml, salt, slice, small;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    ml = (k * l) / nl;
    slice = c * d;
    salt = p / np;
    small = min(slice, salt);
    small = min(small , ml);
    cout << small / n;

    return 0;
}
