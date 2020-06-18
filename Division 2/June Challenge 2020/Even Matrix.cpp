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
        int n;
        cin>>n;
        int sqr= n*n, count=0;
        if(n & 1){//n is odd print directly
            for(int i=1; i<=sqr; i++){
                cout<<i<<" ";
                count++;
                if(count%n==0)
                    cout<<"\n";
            }
        }
        else{//n is even change the direction of even rows
            vector<vector<int>> data;
            vector<int> temp;
            for(int i=1; i<=sqr; i++){
                temp.push_back(i);
                count++;
                if(count%n==0){
                    data.push_back(temp);
                    temp.clear();
                }
            }
            count=1;
            for(int i=0; i<n; i++){
                if(count){
                    for(int j=0; j<n; j++){
                        cout<<data[i][j]<<" ";
                    }
                    count= 0;
                }
                else{
                    for(int j=n-1; j>-1; j--){
                        cout<<data[i][j]<<" ";
                    }
                    count= 1;
                }
                cout<<"\n";
            }
        }
	}
    return 0;
}
