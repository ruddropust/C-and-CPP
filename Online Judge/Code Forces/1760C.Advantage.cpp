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

void init_code() {
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
void ruddro() {
	int n, k = 0;			cin >> n;
	vi a, b, diff, ans;
	fr(0, n) {read(x); a.pb(x);}
	fr(0, n) {read(x); b.pb(x);}

	fr(0, n) {
		k = b[i] - a[i];
		if (k < 0) {no; return;}
		else diff.pb(k);
	}

	if (diff.empty()) {yes; return;}//101
	fr(0, n) {

		if ((diff[i] == diff[i + 1]) && i + 1 < n)continue;
		else if (diff[i] == 0)continue;
		ans.pb(diff[i]);
	}
	if (ans.size() > 1) {no; return;}
	yes;
	return;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;					cin >> t;
	while (t--) {
		ruddro();
	}

	return 0;
}