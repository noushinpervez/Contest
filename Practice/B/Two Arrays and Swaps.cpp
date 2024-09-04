#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[n], b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for(int i = 0; i < n; i++)
            cin >> b[i];
        sort(b, b + n, greater<int>());
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(i < k)
                sum += max(a[i], b[i]);
            else
                sum += a[i];
        }
        cout << sum << endl;
    }
}
