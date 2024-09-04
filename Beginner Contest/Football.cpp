#include <iostream>

using namespace std;

int main()
{
    int n, goal1 = 1, goal2 = 0;
    cin >> n;
    string team1, team, win;
    cin >> team1;

    for(int i = 1; i < n; i++)
    {
        cin >> team;

        if(team1 == team)
            goal1++;
        else
        {
            goal2++;
            win = team;
        }
    }

    if(goal1 > goal2)
        cout << team1;
    else
        cout << win;

    return 0;
}
