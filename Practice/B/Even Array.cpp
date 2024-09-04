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
            if(a[i] % 2 != i % 2)
                if(i % 2 == 0)
                    flag1++;
                else
                    flag2++;
        }
        if(flag1 == flag2)
            cout << flag1 << endl;
        else
            cout << "-1\n";
    }
}
