#include<iostream>
using namespace std;

int maximumDraws(int k){
    return k + 1;
}

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a = maximumDraws(n);
        cout << a << endl;
    }
}
