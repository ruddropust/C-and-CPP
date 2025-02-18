#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "codeforces";
    int t;
    cin>>t;
    while(t!=0)
    {
        char c;
        cin>>c;
        if(s.find(c)>=0 && s.find(c)<=9)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        //cout<<s.find(c)<<endl;
        t--;
    }
}
