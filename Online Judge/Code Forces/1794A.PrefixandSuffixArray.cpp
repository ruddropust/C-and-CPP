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

    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        vector<string> vec(2*n-2);

        fr(0,2*n-2) cin>>vec[i]; 
        fr(0,2*n-2)sort(vec[i].begin(),vec[i].end());

        fr(0,2*n-2){
        	rep(j,0,2*n-2){
        		if(vec[i]==vec[j] && i!=j)cnt++;
        	}
        }
        if(cnt==2*n-2)yes;
        else no;

        // fr(0,2*n-2) cout<<vec[i]<<" ";nl; 

    }

   return 0;
}