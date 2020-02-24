//Link:https://codeforces.com/contest/1311/problem/A


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;cin>>t;while(t--){
    int a,b;
    cin>>a>>b;
    int l=b-a;
    if(l==0){
        cout<<0<<endl;

    }else if(l>0){
        if(abs(l&1)){
            cout<<1<<endl;
        }
    else{cout<<2<<endl;}}
    else if(l<0){
    if(abs(l&1)){
        cout<<2<<endl;
    }else{
    cout<<1<<endl;}
    }

}
}
