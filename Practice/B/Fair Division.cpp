#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        int flag1 = 0, flag2 = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 1)
                flag1++;
            else
                flag2++;
        }
        if((flag1 + 2 * flag2) % 2 == 0){
            if(flag2 % 2 == 0)
                cout << "YES\n";
            else if(flag1 >= 2 && flag2 % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else if(flag1 % 2 == 1)
            cout << "NO\n";
    }
}
