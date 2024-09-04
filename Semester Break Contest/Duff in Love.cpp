#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n, i;
    cin >> n;
    for(i = 2; i * i <= n; i++){
        while(n % (i * i) == 0)
            n /= i;
    }
    cout << n;
}
