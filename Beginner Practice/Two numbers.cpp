#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float A, B;
    cin >> A >> B;
    cout << "floor " << A << " / " << B << " = " << floor(A / B) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(A / B) << endl;
    cout << "round " << A << " / " << B << " = " << round(A / B);
    return 0;
}
