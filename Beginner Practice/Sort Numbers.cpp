#include<iostream>

using namespace std;

int main()
{
    int A, B, C, tmp;
    cin >> A >> B >> C;
    int tmpA = A, tmpB = B, tmpC = C;

    if(tmpA > tmpB)
    {
        tmp = tmpA;
        tmpA = tmpB;
        tmpB = tmp;
    }
    if(tmpA > tmpC)
    {
        tmp = tmpA;
        tmpA = tmpC;
        tmpC = tmp;
    }
    if(tmpB > tmpC)
    {
        tmp = tmpB;
        tmpB = tmpC;
        tmpC = tmp;
    }

    cout << tmpA << "\n" << tmpB << "\n" << tmpC << "\n\n";
    cout << A << "\n" << B << "\n" << C;
    return 0;
}
