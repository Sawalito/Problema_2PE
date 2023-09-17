
#include <iostream>

using namespace std;

long fib(long n){
    if(n<=1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

long sumFib(long n, long sum){
    long Fib = fib(n);
    if(Fib >4E6)
        return sum;
    else
        if(Fib%2==1)
            sum = sum + Fib;
            return sumFib(n+1,sum);
}

int main()
{
    long sum=0;
    sum = sumFib(1,0);
    cout << sum;
    return 0;
}
