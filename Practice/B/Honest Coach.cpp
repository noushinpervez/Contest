#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int s[n], dif[n];
        for(int i = 0; i < n; i++)
            cin >> s[i];
        sort(s, s + n);
        int k = 0;
        for(int i = 0; i < n - 1; i++){
            dif[k] = abs(s[i + 1] - s[i]);
            k++;
        }
        sort(dif, dif + k);
        cout << dif[0] << endl;
    }
}
