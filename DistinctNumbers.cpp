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
set<int> s;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,d;
	cin>>n;
	forn(i,n){
		cin>>d;
		s.insert(d);
	}
	cout<<sz(s)<<"\n";
	return 0;
}