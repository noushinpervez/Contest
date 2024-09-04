#include <iostream>
using namespace std;

int main()
{
    int n;
    long long low = 9999999999;
    cin >> n;
    int a[2 * n];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(low > a[i])
            low = a[i];
        a[n + i] = a[i];
    }
    long long flag = 0, high = 0;
    for(int i = 1; i <= 2 * n; i++){
        if(a[i] == low)
            flag = 0;
        else
            flag++;
        high = max(high, flag);
    }
    cout << (long long)n * low + high;
}
