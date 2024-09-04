#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    long long l, r;
    cin >> n;
    long long a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    cin >> k;

    for(int i = 0; i < k; i++){
        cin >> l >> r;
        int p = -1, x = -1;
        int q = n, y = n;

        while(p + 1 < q || x + 1 < y){
            int c = p + ((q - p) / 2);
            int d = x + ((y - x) / 2);

            if(a[c] < l)
                p = c;
            else if(a[c] >= l)
                q = c;

            if(a[d] <= r)
                x = d;
            else if(a[d] > r)
                y = d;
        }
        cout << x - p << endl;
    }
}
