#include <bits/stdc++.h>

using namespace std;

int main()
{
    string N;
    cin >> N;
    string M;

    for(int i = 0; i < 10; i++)
    {
        M = N;
        reverse(N.begin(), N.end());

        if(M == N)
        {
            cout << "Yes";
            return 0;
        }
        else
        {
            reverse(N.begin(), N.end());
            N.insert(0, "0");
        }
    }

    cout << "No";
    return 0;
}
