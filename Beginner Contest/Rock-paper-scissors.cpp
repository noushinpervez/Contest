#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y;
    if(x == y)
        z = x;
    else if(x + y < 3)
        z = 3 - (x + y);

    cout << z;
    return 0;
}
