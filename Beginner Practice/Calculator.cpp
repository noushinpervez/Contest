#include<iostream>

using namespace std;

int main()
{
    int A, B;
    char X;
    cin >> A >> X >> B;

    switch(X){
    case '+':
        cout << A + B;
        break;
    case '-':
        cout << A - B;
        break;
    case '*':
        cout << A * B;
        break;
    case '/':
        cout << A / B;
        break;
    }

    return 0;
}
