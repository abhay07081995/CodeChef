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
		int n,x,flag=1,value;
		cin>>n;
		vector<int> data(n, 0);
		vector<int> data2(n, 0);
		map<int, int> check;
		int front=0, back=n-1;

		for(int i=0; i<n; i++){
			cin>>data[i];
		}
		sort(data.begin(), data.end());
		for(int i=0; i<n; i++){
			if(check[data[i]]>1){
				cout<<"NO"<<"\n";
				flag=0;
				break;
			}
			if(check[data[i]]==0 && front<n){
				data2[front] = data[i];
				front++;
			} 
			else if(check[data[i]]==1 && back>-1){
				data2[back] = data[i];
				back--;
			} 
			check[data[i]]++;
		}	
		if(flag){
			for(int i=0; i<n-1; i++){
				if(data2[i]==data2[i+1]){
					cout<<"NO"<<"\n";
					flag=0;
					break;
				}
			}
			if(flag){
				cout<<"YES"<<"\n";
				for(int i=0; i<n; i++)
					cout<<data2[i]<<" ";
				cout<<"\n";
			}
		}
	}
    return 0;
}
