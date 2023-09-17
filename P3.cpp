
#include <iostream>

using namespace std;

long sumNS(int n){
    if(n<=1)
        return 1;
    else
        return n*n + sumNS(n-1);
}

long sumN(int n){
    if(n<=1)
        return 1;
    else
        return n + sumN(n-1);
    
}

int main()
{
    int Ss = sumNS(100);
    int Sn = sumN(100)*sumN(100);
    
    cout << Sn-Ss;
    return 0;
}
