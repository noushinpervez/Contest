#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int flag1 = 0, flag2 = 0;
        for(int i = 0; i < n - 1; i++){
            if(a[i + 1] > a[i])
                flag1++;
            if(a[i + 1] < a[i])
                flag2++;
        }
        cout << "Case " << i << ": " << flag1 << " " << flag2 << endl;
    }
}
