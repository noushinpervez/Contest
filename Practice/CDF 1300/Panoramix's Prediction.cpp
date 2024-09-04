#include <iostream>

using namespace std;

int main()
{
    int n, m, flag = 1;
    cin >> n >> m;
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    for(int i = 2; i <= m / 2; i++){
        if(m % i == 0){
            flag = 0;
            break;
        }
    }

    for(int i = 0; i < 15; i++){
        if(arr[i] > n && arr[i] < m){
            flag = 0;
        }
    }


    if(flag == 1)
        cout << "YES";
    else
        cout << "NO";
}
