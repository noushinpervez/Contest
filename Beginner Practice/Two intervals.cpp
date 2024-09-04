#include<iostream>

using namespace std;

int main()
{
    long long l1, r1, l2, r2, i1, i2;
    cin >> l1 >> r1 >> l2 >> r2;

    if(l2 >= l1)
        i1 = l2;
    else
        i1 = l1;

    if(r2 >= r1)
        i2 = r1;
    else
        i2 = r2;

    if(i1 <= i2)
        cout << i1 << " " << i2;
    else
        cout << "-1";

    return 0;
}
