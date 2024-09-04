#include<iostream>
using namespace std;

int main()
{
    unsigned long long int X, deposit = 100;
    cin >> X;
    int year = 0;
    while(X > deposit){
        deposit += deposit / 100;
        year++;
    }
    cout << year;
}
