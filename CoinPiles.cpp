#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
typedef long long ll;
const int mod = (int)1e9+7;
int main(){
	int t,a,b;
	cin>>t;
    while(t--){
		 cin>>a>>b;
		 if((a+b)%3==0&&2*min(a,b)>=max(a,b)) cout<<"YES\n";
		 else cout<<"NO\n";
	}

	return 0;
}
