#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
        cout<<"No"<<endl;return;
    }
    vector<int> a(27,0),b(27,0);
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='@'){
            a[26]++;
        }else       
        a[s1[i]-'a']++;
        if(s2[i]=='@'){
            b[26]++;
        }else
        b[s2[i]-'a']++;
    }
    for(int i=0;i<=26;i++){
        if(i==0 || i==19 || i==2 || i== 14 || i== 3 || i==4 || i==17 ){
            if(a[i]>b[i]){
                if(b[26]<a[i]-b[i]){
                    //cout<<i<<" ";
                    cout<<"No"<<endl;return;
                }else{
                    b[26]-=(a[i]-b[i]);
                }
            }
            if(a[i]<b[i]){
                if(a[26]<b[i]-a[i]){
                    //cout<<i<<" ";
                    cout<<"No"<<endl;return;
                }else{
                    a[26]-=(b[i]-a[i]);
                }
            }
        }else{
            if(a[i]!=b[i]){
                //cout<<i<<" ";
                cout<<"No"<<endl;return;
            }
        }
    }cout<<"Yes"<<endl;
    return;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    solve();
    return 0;
}
