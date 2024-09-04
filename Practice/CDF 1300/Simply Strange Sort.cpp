#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    int arr[999];
    while(t--){
        cin >> n;

        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int flag = 0;
        while(!is_sorted(arr, arr + n)){
            for(int i = flag % 2; i < n; i += 2){
                if(arr[i] > arr[i + 1] && i + 1 < n)
                    swap(arr[i], arr[i + 1]);
            }
            flag++;
        }
        cout << flag << endl;
    }
}
