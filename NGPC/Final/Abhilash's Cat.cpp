#include<iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int len = n.length();
    unsigned long long ans = 1, l = 96;
    for(int i = 0; i < len; i++){
        ans = (ans * ((unsigned long long)n[i] - l)) % 1000000007;
    }
    cout << ans;
}
