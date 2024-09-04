#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A, B, C, left, right;
    cin >> A >> B >> C;
    left = pow(A, 2) + pow(B, 2);
    right = pow(C, 2);

    if(left < right)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
