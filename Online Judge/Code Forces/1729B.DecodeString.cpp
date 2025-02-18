// 1729 B

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int rem,tmp,i=0;
        long long n;
        char arr[50],ch;
        cin>>tmp;
        cin>>n;
        int d=0;
        while(n!=0)
        {
            
            if(n%10==0)
            {
                d++;
                n = n/10;
                rem = n%100;
                ch = rem+96;
                rem = 0;
                arr[i]=ch;
                n=n/100;i++;
              
                
            }
            else{
                rem = n%10;
                n/=10;
                ch = rem+96;
                rem=0;
                arr[i]=ch;
                i++;
            }
            
        }
        tmp = tmp - 2*d;
        for(int j=tmp-1;j>=0;j--)
        {
            cout<<arr[j];
        }
        cout<<endl;
    }
    

    return 0;
}