#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long h[n];
        long long sum = 0, flag = 1;
        for(int i = 0; i < n; i++){
            cin >> h[i];
            sum += h[i] - i;
            if(sum < 0 && flag == 1){
                flag = 0;
            }
        }
        if(flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
