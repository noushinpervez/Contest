#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double N;
    cin >> N;
    double f = N - (int)N;
    if(f == 0)
        cout << "int " << (int)N;
    else
    {
        cout << fixed << setprecision(3);
        cout << "float " << (int)N << " " << f;
    }

    return 0;
}
