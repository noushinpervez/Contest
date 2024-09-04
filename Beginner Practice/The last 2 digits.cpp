#include<iostream>

using namespace std;

int main()
{
    long long A, B, C, D, result;
    cin >> A >> B >> C >> D;

    if(A < 10 || B < 10 || C < 10 || D < 10)
        result = (A * B * C * D) % 100;
    else
        result = ((A % 100) * (B % 100) * (C % 100) * (D % 100)) % 100;

    if(result > 9)
        cout << result;
    else
        cout << "0" << result;

    return 0;
}
