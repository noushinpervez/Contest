#include <iostream>
using namespace std;

int main()
{
    int n, t, j = 1;
    cin >> n >> t;
    int a[n];
    for(int i = 1; i < n; i++)
        cin >> a[i];

    while(j < t)
        j += a[j];

    if(j == t)
        cout << "YES";
    else
        cout << "NO";
}
