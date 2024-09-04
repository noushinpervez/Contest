#include <iostream>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if(A <= B && B <= 6 * A)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
