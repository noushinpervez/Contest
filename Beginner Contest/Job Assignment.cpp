#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, shortest = 1000000;
    cin >> N;
    int A[N], B[N];

    for(int i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == j)
                shortest = min(shortest, A[i] + B[j]);
            else
                shortest = min(shortest, max(A[i], B[j]));
        }
    }

    cout << endl << shortest;
    return 0;
}
