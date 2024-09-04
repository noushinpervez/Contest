#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    while(cin >> n){
        int arr[3000], newarr[3000] = {0};

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        for(int i = 0; i < n - 1; i++){
            newarr[i] = arr[i] - arr[i + 1];

            if(newarr[i] < 0)
                newarr[i] *= -1;
        }

        int up = 1;
        sort(newarr, newarr + n);

        for(int i = 1; i < n; i++){
            if(i != newarr[i]){
                up = 0;
                break;
            }
        }

        if(up == 0)
            cout << "Not jolly\n";
        else
            cout << "Jolly\n";
    }
}
