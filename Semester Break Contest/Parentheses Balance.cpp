#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    getc(stdin);
    while(n--){
        char s[200];
        gets(s);
        int len = strlen(s), flag = 1;
        stack<char>p;
        for(int i = 0; i < len; i++){
            if(s[i] == '(' || s[i] == '['){
                p.push(s[i]);
                continue;
            }
            if(!p.empty()){
                if(s[i] == ')' && p.top() == '(')
                    p.pop();
                else if(s[i] == ']' && p.top() == '[')
                    p.pop();
                else
                    flag = 0;
            }
            else
                flag = 0;
        }
        if(p.empty() && flag == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
