#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        int a = 0, b = 0, c = 0;
        int len = s.length();
        for(int i = 0; i < len; i++){
            if(s[i] == 'A')
                a++;
            else if(s[i] == 'B')
                b++;
            else if(s[i] == 'C')
                c++;
        }
        if(a + c == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
