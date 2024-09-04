#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    int arr[999], a[999];

    while(t--){
        cin >> n;

        while(n--){
            cin >> k;

            for(int i = 0; i < k; i++){
                cin >> arr[i];

                if(k == 1)
                    a[0] = arr[i];
            }

            sort(arr, arr + k, greater<int>());

            if(k > 1){
                for(int i = 0; i < k; i++)
                    a[i] = arr[0];

                sort(a, a + k);
            }
        }
        cout << a[0] + 1 << endl;
    }
}
