#include<iostream>
using namespace std;

int main()
{
    long long n, a, ans = 0, div;
    cin >> n;
    long long z[200000] = {0};
    for(int i = 0; i < n; i++){
        cin >> a;
        z[a]++;
    }
    for(int i = 1; i <= 200000; i++){
        div = z[i] / 2;
        ans += div;
    }
    cout << ans / 2;
}
