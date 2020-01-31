//Link: https://codeforces.com/contest/1228/problem/A


#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll l,r;
    cin>>l>>r;
    bool tr=false;
    for(ll i=l;i<=r;i++){
            ll y=i;
            set<ll> s;
            ll count=0;
        while(y!=0){
                ll temp=y%10;
                count++;
                s.insert(temp);
            y=y/10;
        }
        if(count==s.size()){
            cout<<i;
            tr=true;
            break;        }
    }
    if(tr==false){
        cout<<"-1"<<endl;
    }
}

