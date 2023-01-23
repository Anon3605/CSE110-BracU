#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
        return false;
    for(int i=2;i<n;i++)
        if(n%i==0)
            return false;
    return true;
}

int main()
{
    int x;
    cin>>x;
    if(isPrime(x)){cout<<x<<" is a prime number";}
    else{cout<<x<<" is not a prime number";}
}
