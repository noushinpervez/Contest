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
        if(len % 2 == 0 && s[0] != ')' && s[len - 1] != '(')
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
