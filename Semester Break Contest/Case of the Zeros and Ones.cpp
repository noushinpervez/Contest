#include <iostream>
using namespace std;

int main()
{
    int n, flag1 = 0, flag2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == '0')
            flag1++;
        else
            flag2++;
    }

    if(flag1 > flag2)
        cout << flag1 - flag2;
    else
        cout << flag2 - flag1;
}
