#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    int a[n], index1[n], index2[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++){
        int k = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[k])
                k = j;
        }
        if(k != i){
            swap(a[i], a[k]);
            index1[cnt] = i;
            index2[cnt] = k;
            cnt++;
        }
    }
    cout << cnt << endl;
    for(int i = 0; i < cnt; i++)
        cout << index1[i] << " " << index2[i] << endl;
}
