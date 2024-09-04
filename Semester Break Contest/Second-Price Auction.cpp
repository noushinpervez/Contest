#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, loc = 0;
    cin >> n;
    int p[n];
    for(int i = 0; i < n; i++)
        cin >> p[i];

    int first = p[0];
    for(int i = 1; i < n; i++){
        if(first < p[i]){
            first = p[i];
            loc = i;
        }
    }
    sort(p, p + n);
    cout << loc + 1 << " " << p[n - 2];
}
