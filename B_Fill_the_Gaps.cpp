#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        cout<<v[i]<<" ";
        if(abs(v[i]-v[i+1])==1){
            continue;
        }
        if(v[i]<v[i+1]){
            for(int j=v[i]+1;j<v[i+1];j++){
                cout<<j<<" ";
            }
        }else{
            for(int j=v[i]-1;j>v[i+1];j--){
                cout<<j<<" ";
            }
        }
    }cout<<v[n-1]<<endl;
    return;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    solve();
    return 0;
}
