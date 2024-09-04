#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    double y[t];

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        long long a[n];
        for(int j = 0; j < n; j++)
            cin >> a[j];
        
        sort(a, a + n, greater<int>());
        double sum = 0;
        for(int j = 1; j < n; j++)
            sum += a[j];

        cout << fixed << setprecision(9);
        y[i] = a[0] + (double)(sum / (n - 1));
    }

    for(int i = 0; i < t; i++)
        cout << y[i] << endl;

    return 0;
}
