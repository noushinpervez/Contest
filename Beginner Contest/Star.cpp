#include <iostream>

using namespace std;

int main()
{
    int x, m;
    cin >> x;

    if(x % 100 == 0)
        cout << "100";
    else
    {
        m = (int)(x / 100) + 1;
        m *= 100;
        cout << m - x;
    }

    return 0;
}
