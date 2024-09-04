#include <iostream>
using namespace std;

int main()
{
    string s[6] = {"jolteon", "flareon", "umbreon", "leafeon", "glaceon", "sylveon"};
    int n;
    cin >> n;
    string a;
    cin >> a;
    if(n == 8){
        cout << "vaporeon";
        return 0;
    }
    else if(n == 6){
        cout << "espeon";
        return 0;
    }
    for(int i = 0; i < 6; i++){
        int flag = 0, k = 0;
        for(int j = 0; j < 7; j++){
            if(s[i][k] == a[k]){
                flag++;
                k++;
            }
            if(a[k] == '.')
                k++;
            if(k == n){
                cout << s[i];
                return 0;
            }
        }
    }
}
