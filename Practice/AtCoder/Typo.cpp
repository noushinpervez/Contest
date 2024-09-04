#include<iostream>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;
    int len1 = S.length();
    int len2 = T.length();
    if(len1 != len2){
        cout << "No";
        return 0;
    }
    for(int i = 0; i < len1; i++){
        if(S[i] != T[i]){
            swap(S[i], S[i + 1]);
            break;
        }
    }
    if(S == T)
        cout << "Yes";
    else
        cout << "No";
}
