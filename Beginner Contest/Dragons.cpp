#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, n, flag = 0;
    cin >> s >> n;
    pair <int, int> order[n];
    int x[n], y[n];

    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    for(int i = 0; i < n; i++)
        order[i] = {x[i], y[i]};

    sort(order, order + n);

    for(int i = 0; i < n; i++)
    {
        if(s <= order[i].first)
        {
            flag = -1;
            break;
        }
        else
            s += order[i].second;
    }

    if(flag == -1)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
