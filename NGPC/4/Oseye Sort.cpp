#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char x;
    cin >> x;
    if(x == 'a'){
        for(int i = 1; i <= n; i++)
            cout << i << " ";
    }
    else{
        for(int i = n; i >= 1; i--)
            cout << i << " ";
    }
}
