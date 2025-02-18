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

		int t1;
		string s;
		cin>>t1;
		cin>>s;
		int counts=0;
		for(int i=0 ; i<t1/2 ; i++)
		{
			if((s[i]=='0' && s[t1-1-i]=='1') || (s[i]=='1' && s[t1-1-i]=='0'))
			{
				counts+=2;
			}
			else break;
		}
		cout<<t1-counts<<endl;
	}
   return 0;
}