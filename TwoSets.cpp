#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=(0);i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
typedef long long ll;
typedef vector<int> vi;
const int mod = (int)1e9+7;
int main(){
	ll n;
	cin>>n;
	ll sum = n*(n+1)/2;
	if(sum&1){
		cout<<"NO";
		return 0;
	}
    sum = sum/2;
	vi a,b;
	for(int i=n;i>=1;i--){
		if(sum-i>=0){
			a.push_back(i);
			sum-=i;
		}
		else{
			b.push_back(i);
		}
	}
    cout<<"YES"<<"\n"<<a.size()<<"\n";
    forn(i,(int)a.size()) cout<<a[i]<<" ";
	cout<<"\n"<<b.size()<<"\n";
	forn(i,(int)b.size()) cout<<b[i]<<" ";
	return 0;
}
