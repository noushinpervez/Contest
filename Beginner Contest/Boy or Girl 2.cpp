#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;
    sort(name.begin(), name.end());
    int c = 0;
    for(int i = 0; i < name.length(); i++){
        if(name[i + 1] == name[i]){
            continue;
        }
        c++;
    }
    if(c % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
