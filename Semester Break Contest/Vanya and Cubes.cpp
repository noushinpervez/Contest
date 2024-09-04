#include <iostream>
using namespace std;

int main()
{
    int n, s = 0, i = 1, cube = 0, flag = 0;
    cin >> n;
    while(n > 0){
        s += i;
        i += 1;
        cube += s;
        if(cube <= n)
            flag++;
        else
            break;
    }
    cout << flag;
}
