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
		long n, m, index, ans=0;
		cin>>n>>m;
		vector<long int> data(n,0);
		for(int i=0; i<n; i++){
			cin>>data[i];
		}
		index= n;
		sort(data.begin(), data.end());
		for(long i=0; i<n; i++){
			if(data[i]>m){
				index=i;
				break;
			}
		}
		ans= n-index;
		long prev= m-1, check= m-1, min=0;
		for(long i= index-1; i>-1; i--){
			if(data[i]!=m && (data[i]==check || data[i]==prev)){
				ans++;
				if(data[i]==check){
					prev= check;
					min= check;
					check--;
				}
				else 
					min= prev;
			}
			else if(data[i]!=m){
				break;
			}
		}
		if(ans==0 || min!=1) 
			ans=-1;
		cout<<ans<<"\n";
	}
    return 0;
}
