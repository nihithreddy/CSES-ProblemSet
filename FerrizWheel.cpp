#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=(0);i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(c) (c).begin(),(c).end()
#define sz(c) (int)(c).size()
#define pb push_back
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<double> vd;
typedef vector<string> vs;
const int mod = (int)1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,x;
	cin>>n>>x;
	vi a(n);
	forn(i,n) cin>>a[i];
	sort(all(a));
	int i=0,j=n-1,c=0;
	while(i<j){
		if(a[i]+a[j]>x){
			j--;
		}
		else{
			i++;
			j--;
		}
		c++;
	}
	if(i==j) c++;
    cout<<c<<"\n";
	return 0;
}