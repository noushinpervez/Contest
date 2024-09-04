#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int maximum = A, minimum = A;

    if(B > maximum)
        maximum = B;
    else if(B < minimum)
        minimum = B;

    if(C > maximum)
        maximum = C;
    else if(C < minimum)
        minimum = C;

    cout << minimum << " " << maximum;
    return 0;
}
