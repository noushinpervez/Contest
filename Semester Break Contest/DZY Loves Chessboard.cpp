#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char s[n][m];
    char o[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> s[i][j];
            if(s[i][j] == '.'){
                if((i + j) % 2 == 0)
                    o[i][j] = 'B';
                else
                    o[i][j] = 'W';
            }
            if(s[i][j] == '-')
                o[i][j] = '-';
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << o[i][j];

        cout << endl;
    }
}
