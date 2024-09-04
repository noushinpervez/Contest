#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a, b, c, ab;
    cin >> a >> b >> c;

    ab += a + b;
    sort(ab.begin(), ab.end());
    sort(c.begin(), c.end());

    if(c == ab)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
