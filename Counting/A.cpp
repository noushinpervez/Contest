#include <iostream>

using namespace std;

int main()
{
    int T, N, j, rem;
    cin >> T;

    while(T--){
        cin >> N;
        int flag [10000] = {0};

        for(int i = 1; i <= N; i++){
            j = i;
            while(j > 0){
                rem = j % 10;
                flag[rem]++;
                j = j / 10;
            }
        }

        for(int i = 0; i < 10; i++){
            cout << flag[i];
            if(i != 9)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
