#include<bits/stdc++.h>
using namespace std;
#define max(x, y) (x > y ? x : y) 
#define min(x, y) (x > y ? y : x) 
#define dbg(x) cout << #x << "=" << x << "\n"
#define dbg2(x,y) cout << #x << "=" << x << ", " << #y << "=" << y << "\n"
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main(){ 
	fastio; 
	int test;
	cin>>test;
	while(test--){
		int s,n,ans=0;
		cin>>s>>n;
		if(s%2==1){
			s--;
			ans++;
		}
		while(s!=0){
			if(s<n){
				ans++;
				break;
			}
			ans+= s/n;
			s= s%n;
		}
		cout<<ans<<"\n";
	}
    return 0;
}
