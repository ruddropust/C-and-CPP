#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
 
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int x=0,y=0;
		int flag=0;
		int t1;
		cin>>t1;
		string s;
		cin>>s;
		for(int i=0;i<t1;i++)
		{
			if(s[i]=='U')y++;
			else if(s[i]=='D')y--;
			else if(s[i]=='R')x++;
			else if(s[i]=='L')x--;
			if(x==1 && y==1)
			{
				flag=1;
				break;
			}
		}
		cout<<(flag==1?"Yes":"No")<<endl;
		// if()cout<<"Yes\n";
		// else cout<<"No\n";
	}
   return 0;
}