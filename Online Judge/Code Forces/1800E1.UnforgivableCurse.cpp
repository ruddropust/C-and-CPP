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
void solve()
{
	ll n, k;
	cin >> n >> k;

	string s1, s2;
	cin >> s1 >> s2;

	string s3 = s1;
	string s4 = s2;

	sort(s3.begin(), s3.end());
	sort(s4.begin(), s4.end());

	if (s3 != s4)
	{
		cout << "NO" << endl;
		return;
	}

	for (ll i = 0; i < n; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}

		ll a = i + k;
		ll b = i - k;

		if (a < n || b >= 0)
		{
			continue;
		}

		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;		cin >> t;


	while (t--) {
		solve();
	}


	return 0;
}