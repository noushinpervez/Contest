#include<iostream>

using namespace std;

int main()
{
    int N, year, month, day;
    cin >> N;
    year = N / 365;
    N = N - (year * 365);
    month = N / 30;
    day = N % 30;
    cout << year << " years\n" << month << " months\n" << day << " days";
    return 0;
}
