#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=(0);i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(c) (c).begin(),(c).end()
#define sz(c) (int)(c).size()
#define pb push_back
#define ff first
#define ss second
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
int freq[26],cnt,idx,n;
string s,t,ans;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>s;
	n=s.size();
	forn(i,sz(s)) freq[s[i]-'A']++;
	forn(i,26){
			if(freq[i]&1){
				cnt++;
				idx=i;
			}
		}
	if(n&1){
		if(cnt>1){
			cout<<"NO SOLUTION";
			exit(0);
		}
		forn(i,26){
			if(i!=idx){
				forn(k,freq[i]/2) ans+=(char)('A'+i);
			}
		}
		t=ans;
		reverse(all(t));
		forn(i,freq[idx]) ans+=(char)('A'+idx);
		cout<<(ans+t);
	}
	else{
		if(cnt){
			cout<<"NO SOLUTION";
			exit(0);
		}
		forn(i,26){
			forn(k,freq[i]/2) ans+=(char)('A'+i);
		}
		t=ans;
		reverse(all(t));
		cout<<(ans+t);
	}
	return 0;
}