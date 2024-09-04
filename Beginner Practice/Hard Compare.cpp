#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    long long B, D;
    int A, C;
    double s1, s2;
    cin >> A >> B >> C >> D;

    s1 = B * log(A);
    s2 = D * log(C);

    if(s1 > s2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
