#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=(0);i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
const int mod = (int)1e9+7;
set<string> st;
void solve(string s,int idx){
	  if(s.size()==idx){
		  st.insert(s);
		  return;
	  }
	  for(int j=idx;j<(int)s.size();j++){
		  swap(s[idx],s[j]);
		  solve(s,idx+1);
		  swap(s[idx],s[j]);
	  }
}
int main(){
	string s;
	cin>>s;
	solve(s,0);
	cout<<st.size()<<"\n";
	for(auto str:st) cout<<str<<"\n";
	return 0;
}