#include <iostream>
using namespace std;

int main()
{
    int h0, m0, h1, m1, p0, p1;
    char c;
    cin >> h0 >> c >> m0;
    cin >> h1 >> c >> m1;
    if(h0 >= h1){
        p0 = h0 - h1;
        p1 = m0 - m1;
        if(m0 < m1){
            p1 = 60 + p1;
            p0--;
            if(p0 < 0)
                p0 = 24 + p0;
        }
    }
    else if(h0 < h1){
        p0 = 24 + (h0 - h1);
        p1 = m0 - m1;
        if(m0 < m1){
            p1 = 60 + p1;
            p0--;
        }
    }
    else if(h0 == h1 && m0 < m1){
        p0 = h0;
        p1 = 60 + m0 - m1;
    }
    printf("%.2d:%.2d", p0, p1);
}
