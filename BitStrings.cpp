#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
typedef long long ll;
const int mod = (int)1e9+7;
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	ll ans =1;
	forn(i,n) ans=(ans*2)%mod;
	cout<<ans;
	
	return 0;
}