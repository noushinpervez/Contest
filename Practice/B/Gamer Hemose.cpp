#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, h;
    cin >> t;
    while(t--){
        cin >> n >> h;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int ans = 0, sum = a[n - 1] + a[n - 2];
        if(h % sum == 0)
            ans += 2 * h / sum;
        else if(h % sum <= a[n - 1])
            ans += 2 * (h / sum) + 1;
        else
            ans += 2 * (h / sum) + 2;
        cout << ans << endl;
    }
}
