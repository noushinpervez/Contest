#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double sum = 0.0;
    cin >> n;
    int p[n];
    for(int i = 0; i < n; i++){
        cin >> p[i];
        sum += p[i];
    }
    sum /= n;
    cout << setprecision(12) << sum;
}
