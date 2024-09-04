#include<iostream>
using namespace std;

int main()
{
    int n, m, loc = 1;
    long long flag = 0;
    cin >> n >> m;
    int a[m];
    for(int i = 0; i < m; i++){
        cin >> a[i];
        if(a[i] < loc)
            flag += n - loc + a[i];
        else
            flag += a[i] - loc;

        loc = a[i];
    }
    cout << flag;
}
