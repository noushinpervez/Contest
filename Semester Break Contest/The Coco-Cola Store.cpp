#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        if(n == 0)
            return 0;

        int b = 0, flag = 0;
        while(n > 1){
            b = n / 3;
            flag += b;
            n = (n % 3) + b;
            if(b == 0)
                break;
        }
        if(n == 2)
            flag++;
        cout << flag << endl;
    }
}
