#include <iostream>

using namespace std;

int mcd(int a, int b){
    if(b==0)
        return a;
    else
        return mcd(b,a%b);
}

int mcm(int a){
    if(a>1)
        return (a*(a-1))/mcd(a,mcm(a-1));
    else return a;
}



int main()
{
    int MCM = mcm(5);
    cout << MCM;
    return 0;
}
