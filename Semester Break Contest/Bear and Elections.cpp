#include <iostream>
using namespace std;

int main()
{
    int n, bear, vote = 0;
    cin >> n;
    int a[n];
    cin >> bear;
    for(int i = 0; i < n - 1; i++)
        cin >> a[i];
    while(1){
        int high = -9999999, loc = 0;
        for(int i = 0; i < n - 1; i++){
            if(a[i] > high){
                high = a[i];
                loc = i;
            }
        }
        if(high >= bear){
            a[loc]--;
            bear++;
            vote++;
        }
        else{
            cout << vote;
            return 0;
        }
    }
}
