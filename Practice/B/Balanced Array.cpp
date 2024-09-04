#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int sum1 = 0, sum2 = 0;
        if(n % 4 == 0){
            cout << "YES\n";
            for(int i = 1; i * 2 <= n; i++){
                cout << i * 2 << " ";
                sum1 += i * 2;
            }
            for(int i = 1; 2 * i - 1 < n - 1; i++){
                cout << 2 * i - 1 << " ";
                sum2 += 2 * i - 1;
            }
            cout << sum1 - sum2 << endl;
        }
        else
            cout << "NO\n";
    }
}
