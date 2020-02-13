//Link: https://codeforces.com/contest/1301/problem/A


#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
    string a,b,c;
    cin>>a>>b>>c;
    bool tr=false;
    for(int i=0;i<a.length();++i){
        if(a[i]==c[i] || b[i]==c[i] ){
            tr=true;
        }else{
        tr=false;
        break;}
 
    }
    if(tr){
        cout<<"YES\n";
    }else{
    cout<<"NO\n";}
 
}
}
