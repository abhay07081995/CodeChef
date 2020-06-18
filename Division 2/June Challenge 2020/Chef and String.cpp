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
        string s;
        cin>>s;
        int ans=0, n= s.size();
        if(n==1){
            cout<<ans<<"\n";
            continue;
        }
        for(int i=0; i<n-1; i++){
            if(s[i]=='x' && s[i+1]=='y'){
                ans++;
                i++;
            }
            else if(s[i]=='y' && s[i+1]=='x'){
                ans++;
                i++;
            }
        }
        cout<<ans<<"\n";
	}
    return 0;
}
