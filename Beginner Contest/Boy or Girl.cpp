#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map < char, int > m;

    for (int i = 0; i < s.length(); i++)
        m[s[i]]++;

    int flag = m.size();
    if(flag % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
