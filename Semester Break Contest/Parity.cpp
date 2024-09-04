#include <iostream>
using namespace std;

int main()
{
    int I;
    while(cin >> I){
        if(I == 0)
            return 0;

        int P = 0, j = 0;
        int binary[20];
        while(I != 0){
            binary[j] = I % 2;
            I /= 2;
            P += binary[j];
            j++;
        }
        cout << "The parity of ";
        for(int i = j - 1; i >= 0; i--)
            cout << binary[i];

        cout << " is " << P << " (mod 2)." << endl;
    }
}
