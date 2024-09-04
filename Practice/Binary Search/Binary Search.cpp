#include <iostream>

using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < k; i++){
        cin >> x;
        int l = 0;
        int r = n - 1;
        int flag = 0;

        while(r >= l){
            int m = (l + r) / 2;

            if(a[m] == x){
                flag = 1;
                break;
            }
            else if(a[m] < x)
                l = m + 1;
            else if(a[m] > x)
                r = m - 1;
        }

        if(flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
