#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rfr(a,b) for(int i = b-1; i>=0; i--)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define print(array) for(auto it : array)cout << it << " ";
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
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
    ll n;
    cin>>n;
    vector<ll>v(n);
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++)cin>>v[i];
    mp[v[0]]++;
    ll ans=0;
    for(int i=1;i<n;i++)
    {
        for(auto l:mp)
        {
 
            if(l.first!=v[i])ans+=((l.first-v[i])*(l.first-v[i])*l.second);
        }
        mp[v[i]]++;
    }
    cout<<ans<<endl;

   return 0;
}