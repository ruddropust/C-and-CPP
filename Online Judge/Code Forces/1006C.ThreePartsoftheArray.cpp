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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,ans=0,lower=0,upeer=0;			cin>>n;
    std::vector<int> v;
    lower = 0; upeer = n-1;
    fr(0,n){
    	read(x);
    	v.push_back(x);
    }
    ll sum1 = v[lower],sum2=v[upeer];
    while(upeer>lower)
    {
    	if(sum1==sum2){
    		ans = max(ans,sum1);
    	}
    	if(sum1>sum2){
    		--upeer;
    		sum2+=v[upeer];
    	}else{
    		++lower;
    		sum1+=v[lower];
    	}
    }
    cout<<ans<<endl;

   return 0;
}