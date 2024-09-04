#include <iostream>

using namespace std;

int main()
{
    int A, B, C, tmp;
    cin >> A >> B >> C;

    if(A > B)
    {
        tmp = A;
        A = B;
        B = tmp;
    }
    if(A > C)
    {
        tmp = A;
        A = C;
        C = tmp;
    }
    if(B > C)
    {
        tmp = B;
        B = C;
        C = tmp;
    }

    cout << B + C;
    return 0;
}
