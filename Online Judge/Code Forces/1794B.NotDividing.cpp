#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rfr(a,b) for(int i = b-1; i>=0; i--)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define print(array) for(auto it : array)cout << it << " ";
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

void init_code() {
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;					cin >> t;
	while (t--)
	{
		int n;				cin >> n;
		vi vec;

		// insert data in vector
		fr(0, n) {read(x); if (x == 1) {vec.pb(x + 1);} else {vec.pb(x);}}

		fr(0, n - 1) {if (vec[i + 1] % vec[i] == 0)vec[i + 1] += 1;}

		print(vec); nl;


	}

	return 0;
}