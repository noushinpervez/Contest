#include <iostream>

using namespace std;

int main()
{
    long long x, y, z, xpow, ypow, zpow;
    int flag = 0;
    int arr[100];

    while(1){
        cin >> x >> y >> z;
        xpow = x * x;
        ypow = y * y;
        zpow = z * z;

        if(x == 0 && y == 0 && z == 0)
            break;
        else if(xpow + ypow == zpow || xpow + zpow == ypow || ypow + zpow == xpow)
            arr[flag] = {1};
        else
            arr[flag] = {0};

        flag++;
    }

    for(int i = 0; i < flag; i++){
        if(arr[i] == 1)
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
}
