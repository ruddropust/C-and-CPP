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
    int t;					cin>>t;
    while(t--)
    {
    	int n,k,ar[53]={0},pair=0;
    	cin>>n>>k;
    	string s;			cin>>s;
    	fr(0,n)
    	{
    		if(s[i]>='A' && s[i]<='Z')
    		{
    			++ar[s[i]-64];
    		}else{
    			++ar[s[i]-70];
    		}
    	}
    	fr(1,27)
    	{
    		int minm = min(ar[i],ar[i+26]);
    		int number_of_count = abs(ar[i]-ar[i+26])/2;
    		if(k>number_of_count){
    			pair+=number_of_count+minm;
    			k-=number_of_count;
    		}
    		else{
    			pair+=minm+k;
    			k=0;
    		}

    	}
    	cout<<pair<<endl;

    }

   return 0;
}