#include<iostream>
using namespace std;

int main()
{
    int m, n, ans = 0;
    cin >> m >> n;
    int t[n];
    for(int i = 0; i < n; i++)
        cin >> t[i];
    int i = 0;
    while(ans <= m){
        ans += t[i];
        i++;
        if(ans == m){
            cout << i;
            return 0;
        }
        else if(ans > m){
            cout << i - 1;
            return 0;
        }
    }
}
