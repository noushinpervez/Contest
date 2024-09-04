#include<iostream>

using namespace std;

int main()
{
    char X;
    cin >> X;
    char up = X + 32;
    char low = X - 32;

    if(X >= 65 && X <= 90)
        cout << up;
    if(X >= 97 && X <= 122)
        cout << low;

    return 0;
}
