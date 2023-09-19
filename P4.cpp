
#include <iostream>

using namespace std;

int mcd(int a, int b){
    if(b==0)
        return a;
    else
        return mcd(b,a%b);
}

int mcm(int n){
    int p=2;
    int k,i;
    for(i=1;i<n;i++)
        p = mcd(i,p);
        k = (i*(i+1))/p;
    return k;
}


int main()
{
    int MCM = mcm(5);
    cout << MCD;
    return 0;
}
