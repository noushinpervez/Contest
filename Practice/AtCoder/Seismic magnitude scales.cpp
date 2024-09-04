#include<iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int flag = abs(A - B);
    long long ans = 1;
    for(int i = 1; i <= flag; i++)
        ans *= 32;

    cout << ans << endl;
}
