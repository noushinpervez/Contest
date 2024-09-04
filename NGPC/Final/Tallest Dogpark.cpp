#include<iostream>
using namespace std;

int main()
{
    int l;
    cin >> l;
    if(l % 2 == 0)
        cout << (l / 2) - 1;
    else
        cout << l / 2;
}
