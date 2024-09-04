#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    string arr;

    while(t--){
        getline(cin, arr, '\n');
        map < char, int > flag;

        for(int j = 0; j < arr.length(); j++){
            if(arr[j] >= 65 && arr[j] <= 90)
                arr[j] += 32;

            if(arr[j] >= 97 && arr[j] <= 122)
                flag[arr[j]]++;
        }

        int m = -1;

        for(int j = 'a'; j <= 'z'; j++)
            m = max(m, flag[j]);

        for(int j = 'a'; j <= 'z'; j++){
            if(m == flag[j])
                cout << char(j);
        }
        cout << endl;
    }
    return 0;
}
