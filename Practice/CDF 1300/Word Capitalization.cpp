#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;

    if(word[0] >= 65 && word[0] <= 90)
        word[0] = word[0];

    if(word[0] >= 97 && word[0] <= 122)
        word[0] -= 32;

    cout << word;
}
