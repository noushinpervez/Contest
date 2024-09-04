#include <iostream>
using namespace std;

int main()
{
    double m[5], w[5];
    for(int i = 0; i < 5; i++)
        cin >> m[i];

    for(int i = 0; i < 5; i++)
        cin >> w[i];

    double hs, hu, score = 0.0;
    cin >> hs >> hu;
    double point[5] = {500, 1000, 1500, 2000, 2500};
    for(int i = 0; i < 5; i++)
        score += max(0.3 * point[i], (1 - m[i] / 250) * point[i] - 50 * w[i]);

    score += hs * 100;
    score -= hu * 50;
    cout << score;
}
