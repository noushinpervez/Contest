#include <iostream>
using namespace std;

int main()
{
    long long n, num;
    cin >> n;
    if(n % 2 == 0){
        if(n % 4 == 0)
            num = (n / 4) - 1;
        else
            num = n / 4;
    }
    else
        num = 0;

    cout << num;
}
