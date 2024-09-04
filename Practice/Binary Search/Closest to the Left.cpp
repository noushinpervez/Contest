
#include <iostream>

using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k;
    long long a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < k; i++){
        cin >> x;
        int l = -1;
        int r = n;

        while(l + 1 < r){
            int m = (l + r) / 2;

            if(a[m] <= x)
                l = m;
            else if(a[m] > x)
                r = m;
        }
        cout << l + 1 << endl;
    }
}
