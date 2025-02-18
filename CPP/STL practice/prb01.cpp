#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long n)
{
    if(n==1) return false;
    else if(n==2)return true;
    else if(n>2 && n%2==0) return false;
    for(long long i=3; i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int maim()
{
    long long t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        if(isPrime(n))std::cout << "yes" << std::endl;
        else std::cout << "no" << std::endl;
    }
}