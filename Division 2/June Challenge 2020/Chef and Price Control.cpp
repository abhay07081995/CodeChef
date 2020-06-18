#include<bits/stdc++.h>
using namespace std;
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
		int n, k, x, ans=0;
		cin>>n>>k;
		for(int i=0; i<n; i++){
		    cin>>x;
		    if(x>k)
		        ans+=x-k;
		}
		cout<<ans<<"\n";
	}
    return 0;
}
