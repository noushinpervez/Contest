#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int flag = 0;
        for(int i = 1; i <= n; i = i * 10 + 1){
            for(int j = 1; j <= 9; j++){
                if(i * j <= n)
                    flag++;
            }
        }
        cout << flag << endl;
    }
}
