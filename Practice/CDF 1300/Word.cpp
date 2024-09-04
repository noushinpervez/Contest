#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string S;
    cin >> S;
    int flag1 = 0, flag2 = 0;

    for(int i = 0; i < S.length(); i++){
        if(S[i] >= 65 && S[i] <= 90)
            flag1++;

        if(S[i] >= 97 && S[i] <= 122)
            flag2++;
    }

    if(flag1 > flag2)
        transform(S.begin(), S.end(), S.begin(), ::toupper);
    else
        transform(S.begin(), S.end(), S.begin(), ::tolower);

    cout << S;
}
