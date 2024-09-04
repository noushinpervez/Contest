#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int min1 = a[0];
        for(int i = 1; i < n; i++){
            if(min1 > a[i])
                min1 = a[i];
        }
        for(int i = 0; i < n; i++)
            cin >> b[i];
        int min2 = b[0];
        for(int i = 1; i < n; i++){
            if(min2 > b[i])
                min2 = b[i];
        }
        long long sum = 0;
        for(int i = 0; i < n; i++)
            sum += max(a[i] - min1, b[i] - min2);
        cout << sum << endl;
    }
}
