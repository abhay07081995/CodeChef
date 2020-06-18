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
        vector<int> money(n, 0);
        int flag= 1, coins[3]= {0, 0, 0}; //change coins[0] for 5, coins[1] for 10, coins[2] for 15;
        for(int i=0; i<n; i++){
            cin>>money[i];
        }
        for(int i=0; i<n; i++){
            if(money[i]==5){
                coins[0]++;
            }
            else if(money[i]==10){
                if(coins[0]){
                    coins[0]--;
                    coins[1]++;
                }
                else{
                    flag=0;
                    break;
                }
            }
            else{ //15
                if(coins[1]){
                    coins[1]--;
                    coins[2]++;
                }
                else if(coins[0]>1){
                    coins[0]-=2;
                    coins[2]++;
                }
                else{
                    flag=0;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
	}
    return 0;
}
