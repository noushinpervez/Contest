#include<iostream>
using namespace std;

int main()
{
    int K, A, B;
    cin >> K;
    cin >> A >> B;
    int flag = 0;
    for(int i = A; i <= B; i++){
        if(i % K == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout << "OK";
    else
        cout << "NG";
}
