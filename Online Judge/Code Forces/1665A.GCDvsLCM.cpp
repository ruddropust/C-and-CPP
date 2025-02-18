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
#define nl cout<<endl

using namespace std;
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;				cin>>t;
    while(t--)
    {
    	int ar[4]={0};
    	int n;			cin>>n;
    	if(n%4==0)
    	{
    		ll ans = n/4;
    		ar[0]=ar[1]=ar[2]=ar[3]=ans;
    	}
    	else if(n%2!=0)
    	{
    		ar[0]=n/2;
    		ar[1]=ar[0]-1;
    		ar[2]=1;
    		ar[3]=1;
    	}
    	else{
    		ar[3]=1;
    		ar[2]=1;
    		ar[1]=((n-2)/2)+1;
    		ar[0]=ar[1]-2;
    	}
    	fr(0,4)cout<<ar[i]<<" ";
    	nl;
    }

   return 0;
}