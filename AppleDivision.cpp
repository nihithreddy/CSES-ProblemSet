#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=(0);i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(c) (c).begin(),(c).end()
#define sz(c) (int)(c).size()
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
const int mod = (int)1e9+7;
int main(){
	int n;
	cin>>n;
	vi a(n);
	forn(i,n) cin>>a[i];
	ll s1=accumulate(all(a),0LL);
	ll s2=0,ans=LLONG_MAX;
	forn(i,(1<<n)){
		ll s2 = 0;
		forn(j,n){
			if(i&(1<<j)) s2+=a[j];
		}
		ans=min(ans,abs(s1-s2-s2));
	}
	cout<<ans<<"\n";
	return 0;
}