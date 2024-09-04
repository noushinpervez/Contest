#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int h, m, hout, mout;
    char c;
    while(T--){
        cin >> h >> c >> m;
        hout = 12 - h;
        mout = 60 - m;
        if(mout == 60)
            mout = 0;
        if(mout != 0)
            hout--;
        if(hout <= 0)
            hout += 12;
        printf("%.2d:%.2d\n", hout, mout);
    }
}
