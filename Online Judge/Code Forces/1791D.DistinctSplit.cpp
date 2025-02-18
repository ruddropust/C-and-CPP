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
using namespace std;
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
 
int main() {
	int t;				cin>>t;
	while(t--)
	{
		int textSize;	cin>>textSize;
		string s;		cin>>s;
		set<char>st;
		int prefix[textSize],suffix[textSize];
		fr(0,textSize)
		{
			st.insert(s[i]);
			prefix[i] = st.size();
		}
		st.clear();
		rfr(0,textSize)
		{
			st.insert(s[i]);
			suffix[i] = st.size();
		}
	
        int result=0,maxsumfunction=0;
        fr(0,textSize-1){
        	result = prefix[i]+suffix[i+1];
        	maxsumfunction = max(result,maxsumfunction);
        }
        cout<<maxsumfunction<<endl;
    
	}
	

 
    
   return 0;
}