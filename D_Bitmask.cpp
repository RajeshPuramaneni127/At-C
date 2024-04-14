#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    long long int n,ans=0,ans2 = 0;cin>>n;
    int x = 0,maxi = -1;
    while((1<<x)<=n && x<s.length()){
        if(s[s.length()-x-1]=='1'){
            ans+= (1<<x);
        }else if(s[s.length()-x-1]=='?'){
            ans2+=(1<<x);maxi = x;
        }x++;
    }
    if(ans>n){
        cout<<-1<<endl;return;
    }
    ans+=ans2;
    if(ans>n){
        ans-=(1<<maxi);
    }
    cout<<ans<<endl;
    return;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    solve();
    return 0;
}
