#include<iostream>
using namespace std;

int main()
{
    int w, h;
    cin >> w >> h;
    char a[100][100];
    for(int i = 0; i < h; i++)
        cin >> a[i];

    for(int i = 0; i < 2 * w; i++){
        for(int j = 0; j < 2 * h; j++)
            cout << a[j / 2][i / 2];

        cout << endl;
    }
}
