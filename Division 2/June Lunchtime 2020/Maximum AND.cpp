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
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	fastio; 
	int test;
	cin>>test;
	while(test--){
		long long int n,k,max=-1;
		cin>>n>>k;
		vector<long long int> data(n,0);
		for(long long int i=0; i<n; i++){
			cin>>data[i];
			if(max<data[i])
				max= data[i];
		}
		vector<long long int> pwr(31, 0);
		long long int power=2, base=1;
		pwr[0]=1;
		for(long long int i=1; i<31; i++){
			base= power*base;
			pwr[i]= base;
		}
		if(k==1){
			long long int maxsum=0, j=0, ans=1;
			while(pwr[j]<=max){
				long long int sum=0;
				for(long long int k=0; k<n; k++){
					sum+= data[k] & pwr[j];
				}
				if(sum>maxsum){
					maxsum= sum;
					ans= pwr[j];
				}
				j++;
			}
			cout<<ans<<"\n";
		}
		else{ //k=2
			long long int u= 1, number= -1;
			while(max+100 >= number){
				long long int v= 0;
				while(v<u) {
					pwr.push_back((1 << u) + (1 << v));
					number= pwr.back();
					v++;
				}
				u++;
			}
			sort(pwr.begin(), pwr.end());
			long long int maxsum=0, j=0, ans=1;
			while(j<pwr.size()){
				long long int sum=0;
				for(long long int k=0; k<n; k++){
					sum+= data[k] & pwr[j];
				}
				if(sum>maxsum){
					maxsum= sum;
					ans= pwr[j];
				}
				j++;
			}
			cout<<ans<<"\n";
		}
	}
    return 0;
}
