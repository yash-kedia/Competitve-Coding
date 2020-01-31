//Link  :https://codeforces.com/contest/1294/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int t;cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end());
 
        string s;
        ll g=v[0].first;
        ll f=v[0].second;
        while(g--){
            s=s+'R';
        }
        while(f--){
            s=s+'U';
        }
       // cout<<s<<endl;
        bool tr=true;
 
        for(ll i=1;i<n;i++){
                if(v[i].first!=v[i-1].first){
                        if(v[i].second<v[i-1].second){
                                //cout<<s<<endl;
                            tr=false;
                            break;
                        }
                        else{
                                ll gh=v[i].first-v[i-1].first;
                                ll fg=v[i].second-v[i-1].second;
                            while(gh--){
                                s+='R';
                            }
                            while(fg--){
                                s+='U';
                            }
                        }
 
                }
                else{
                ll e=v[i].second-v[i-1].second;
                while(e--){
                    s+='U';
                }
                }
        }
        if(tr){
                cout<<"YES\n";
            cout<<s<<endl;
        }else{
        cout<<"NO\n";
        }
}
}
