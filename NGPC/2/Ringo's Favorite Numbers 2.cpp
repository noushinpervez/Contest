#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long A[N], flag[200] = {0};
    long long pairs = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        flag[A[i] % 200]++;
    }
    for(int i = 0; i < 200; i++)
        pairs += flag[i] * (flag[i] - 1) / 2;
    cout << pairs;
}
