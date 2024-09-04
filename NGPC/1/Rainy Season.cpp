#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int flag = 0;
    if(s[0] == s[1] && s[1] == s[2]){
        if(s[0] == 'R')
            flag = 3;
        else
            flag = 0;
    }
    else if(s[0] == s[1] || s[1] == s[2]){
        if(s[1] == 'R')
            flag = 2;
        else
            flag = 1;
    }
    else
        flag = 1;
    cout << flag;
}
