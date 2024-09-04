#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s, key;
        int ans = 0;
        cin >> key >> s;
        for(int i = 0; i < key.length(); i++){
            for(int j = 0; j < s.length() - 1; j++){
                int k1 = key.find(s[j]);
                int k2 = key.find(s[j + 1]);
                if(key[i] == s[j])
                    ans += abs(k1 - k2);
            }
        }
        cout << ans << endl;
    }
}
