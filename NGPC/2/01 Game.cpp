#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        int len = s.length();
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < len; i++){
            if(s[i] == '0')
                cnt1++;
            else
                cnt2++;
        }
        int cnt = min(cnt1, cnt2);
        if(cnt % 2 == 1)
            cout << "DA\n";
        else
            cout << "NET\n";
    }
}
