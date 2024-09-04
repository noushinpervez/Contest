#include<iostream>
using namespace std;

int main()
{
    int N, D, ans;
    cin >> N >> D;
    ans = 2 * D + 1;
    if(N % ans == 0)
        ans = N / ans;
    else
        ans = N / ans + 1;
    cout << ans;
}
