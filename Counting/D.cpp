#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    string team, judge;
    int arr[t];

    for(int i = 0; i < t; i++){
        getline(cin, team, '\n');
        getline(cin, judge, '\n');

        if(team == judge)
            arr[i] = 1;

        else{
            for(int j = team.length(); j >= 0; j--){
                if(team[j] == ' ')
                    team.erase(j, 1);
            }

            if(team == judge)
                arr[i] = 0;
            else
                arr[i] = -1;
        }
    }

    for(int i = 0; i < t; i++){
        if(arr[i] == 1)
            cout << "Case " << i + 1 << ": " << "Yes" << endl;
        else if(arr[i] == 0)
            cout << "Case " << i + 1 << ": " << "Output Format Error" << endl;
        else
            cout << "Case " << i + 1 << ": " << "Wrong Answer" << endl;
    }
}
