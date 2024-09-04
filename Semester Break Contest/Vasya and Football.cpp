#include <iostream>
using namespace std;

char team1[21], team2[21], c1[1], c2[1];
int n, t, m;

int main()
{
    cin >> team1 >> team2 >> n;
    int h[100] = {0}, a[100] = {0}, r1[100] = {0}, r2[100] = {0};
    while(n--){
        cin >> t >> c1[0];
        if(c1[0] == 'h'){
            cin >> m >> c2[0];
            if(c2[0] == 'y')
                h[m]++;
            else
                h[m] = 2;
            if(h[m] == 2 && r1[m] == 0){
                r1[m] = 1;
                cout << team1 << " " << m << " " << t <<  endl;
            }
        }
        else{
            cin >> m >> c2[0];
            if(c2[0] == 'y')
                a[m]++;
            else
                a[m] = 2;
            if(a[m] == 2 && r2[m] == 0){
                r2[m] = 1;
                cout << team2 << " " << m << " " << t << endl;
            }
        }
    }
}
