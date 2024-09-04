#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int c = n;
        int flag = 0;
        while(n % 2 == 0){
            flag++;
            n /= 2;
        }
        if(c % 2 == 1)
            cout << "Bob" << endl;
        else if(flag % 2 == 0)
            cout << "Alice" << endl;
        else if(n > 1)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
}
