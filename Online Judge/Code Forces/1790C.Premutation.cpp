#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define frn(a,b) for(int j = a; j < b; j++)
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
	int t,n;					cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n][n-1],arr1[n],unq=0,indx=INT_MAX,cmn=0;
		fr(0,n){
			frn(0,n-1)
			{
				cin>>arr[i][j];
			}
		}
		fr(0,n)
		{
			arr1[i]=arr[i][n-2];
		}

		fr(0,n-1)
		{
			if(arr1[i]==arr1[i+1]){indx=i;break;}
			else continue;
		}

		fr(0,n){
			if(arr[i][n-2]!=arr1[indx])
			{
				frn(0,n-1)
				{
					cout<<arr[i][j]<<" ";
				}
				break;
			}
		}
		
		cout<<arr1[indx]<<endl;

	
	}
   return 0;
}