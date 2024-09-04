#include <iostream>
using namespace std;

int main()
{
    long long n, flag = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        long long multiple = 1;
        int j = i;
        while(j){
            multiple *= 10;
            j /= 10;
        }
        long long x = i * multiple + i;
        if(x <= n)
            flag++;
        else
            break;
    }
    cout << flag;
}
