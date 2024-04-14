#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    char ans;
    int count1=0,count2=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='T'){
            count1++;
        }else{
            count2++;
        }
        if(count1>count2){
            ans = 'T';
        }else if(count2>count1){
            ans = 'A';
        }
    }cout<<ans<<endl;
    return;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    solve();
    return 0;
}
