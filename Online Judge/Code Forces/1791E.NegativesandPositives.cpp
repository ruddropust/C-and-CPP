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
   int t;                           cin>>t;
   while(t--)
   {
      int t1 ;          cin>>t1;
      int arr[t1];
      ll ans=0,negative=0,min=LLONG_MAX;

      fr(0,t1)
      {
         cin>>arr[i];
         if(arr[i]<0)negative++;
         if(abs(arr[i])<min)min=abs(arr[i]);

         ans = ans+abs(arr[i]);

      }
      if(negative%2==1)cout<<ans-2*min<<endl;
      else cout<<ans<<endl;
   }
   return 0;
}