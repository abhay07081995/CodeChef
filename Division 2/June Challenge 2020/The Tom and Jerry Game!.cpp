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
        long int ts;
        cin>>ts;
        if(ts & 1){
            cout<<ts/2<<"\n";
        }
        else{
            while((ts & 1) == 0){
                ts= ts>>1;
            }
            cout<<ts/2<<"\n";
        }
	}
    return 0;
}
