#include <iostream>
using namespace std;

int main()
{
    int n, money = 0, low = 999999;
    cin >> n;
    int a[n], p[n];
    for(int i = 0; i < n; i++)
        cin >> a[i] >> p[i];

    for(int i = 0; i < n; i++){
        if(low > p[i])
            low = p[i];

        money += a[i] * low;
    }
    cout << money;
}
