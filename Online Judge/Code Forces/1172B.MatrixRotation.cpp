#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rfr(a,b) for(int i = b-1; i>=0; i--)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
 
int main() {
	int t; cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b;
		cin>>c>>d;
		if((a<c && b<d && a<b && d>c) || (c<a && c<d && b>a && b>d) || (c>a && c>d && b<a && b<d) || (a>c && b>d && a>b && d<c))yes;
		else no;
	}
   return 0;
}