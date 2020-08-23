#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
typedef long long ll;
const int mod = (int)1e9+7;
int main(){
	int n;
	cin>>n;
    int p = 5,ans=0;
	while(n>=p){
		ans+=(n/p);
		p*=5;
	}
	cout<<ans;
	return 0;
}
