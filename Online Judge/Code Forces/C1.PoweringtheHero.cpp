

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
void inserttop(int val)
{

}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue<int> bonus;
        long long  curr_power = 0;
        for (int i = 0; i < n; i++) {
            int power;
            cin >> power;
            if(power==0)
            {
                if(!bonus.empty())
                {
                    curr_power+=bonus.top();
                    bonus.pop();
                }
            }
            else{
                
                bonus.push(power);
            }
        }
        cout << curr_power << endl;
    }
   return 0;
}