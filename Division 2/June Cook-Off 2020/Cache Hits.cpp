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
		int n,b,m,prev=-1, curr=0, ans=0;
		cin>>n>>b>>m;
		vector<int> data(m,0);
		for(int i=0; i<m; i++){
			cin>>data[i];
		}
		for(int i=0; i<m; i++){
			curr= data[i]/b;
			if(prev!=curr){
				prev= data[i]/b;
				ans++;
			}
		}
		cout<<ans<<"\n";
	}
    return 0;
}
