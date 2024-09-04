#include <iostream>
using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    char a[300][300];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][i] != a[n/2][n/2] || a[i][n - i - 1] != a[n/2][n/2]){
                flag++;
                break;
            }
            else if(i != j && j != n - i - 1 && a[i][j] != a[0][1]){
                flag++;
                break;
            }
            else if(a[i][i] == a[0][1] || a[i][n - i - 1] == a[0][1]){
                flag++;
                break;
            }
        }
    }
    if(flag == 0)
        cout << "YES";
    else
        cout << "NO";
}
