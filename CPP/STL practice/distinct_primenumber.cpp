#include<bits/stdc++.h>
using namespace std;
int main()
{
    while (true){
        long long n;cin>>n;
        long long num = n;
        if(n==0)break;
        set<int> s;
        for(int i=2 ; i<=n;i++){

            if(n%i==0){
                while (n%i==0){
                    s.insert(i);
                    n/=i;
                }
            }
        }
        cout<<num<<" : "<<s.size()<<endl;
    }
    return 0;
}