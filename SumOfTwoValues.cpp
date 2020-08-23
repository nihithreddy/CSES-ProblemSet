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
	ll n,d,f=0;
	cin>>n>>d;
	vll a(n);
	forn(i,n) cin>>a[i];
	unordered_map<ll,int> ump;
	forn(i,n){
		if(ump[d-a[i]]){
			f=1;
			cout<<ump[d-a[i]]<<" "<<i+1<<"\n";
			break;
		}
		ump[a[i]]=i+1;
	}
	if(!f) cout<<"IMPOSSIBLE"<<"\n";
	return 0;
}