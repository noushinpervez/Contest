#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, bx, x, m, by, y, p = 0, q = 0;
    cin >> n >> bx;
    while(n--){
        cin >> x;
        p += x * pow(bx, n);
    }
    cin >> m >> by;
    while(m--){
        cin >> y;
        q += y * pow(by, m);
    }
    if(p == q)
        cout << "=";
    else if(p > q)
        cout << ">";
    else
        cout << "<";
}
