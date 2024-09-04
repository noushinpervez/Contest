#include<iostream>
using namespace std;
char a[100][100];
int main()
{
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int zero = 0, one = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i > 0 && i < n - 1 && j > 0 && j < m - 1){
                    if(a[i][j] == '1')
                        one++;
                }
                else{
                    if(a[i][j] == '0')
                        zero++;
                }
            }
        }
        if(zero > one)
            cout << "-1\n";
        else
            cout << zero << endl;
    }
}
