#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, j, dif = 0, flag = 0;
    cin >> n;
    int a[100];

    for(i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    int b[100];

    for(j = 0; j < m; j++)
        cin >> b[j];

    sort(a, a + n);
    sort(b, b + m);

    for(i = 0, j = 0; i < n && j < m;){
            dif = a[i] - b[j];
            if(dif < 0)
                dif *= -1;

            if(dif <= 1){
                flag++;
                i++;
                j++;
            }
            else if(a[i] > b[j])
                j++;
            else if(a[i] < b[j])
                i++;
    }
    cout << flag;
}
