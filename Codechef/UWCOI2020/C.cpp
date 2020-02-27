//Link:https://www.codechef.com/UWCOI20/problems/UWCOI20C/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll valid(ll a,ll b,ll c){

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll h,w,q;
        cin>>h>>w>>q;
        ll arr[h][w];
        for(ll i=0;i<h;i++){
            for(ll j=0;j<w;j++){
                cin>>arr[i][j];
            }
        }while(q--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(h!=1){
            if(c>arr[0][0]){
                cout<<h*w<<endl;
            }else{
            cout<<0<<endl;}
        }else{

        a=a-1;
        b=b-1;
        ll ct=0;
        if(arr[a][b]<c){
                ct++;
                ll o=b-1;
        ll oo=b+1;
        for(ll i=o;i>=0;i--){
            if(arr[a][i]<c){
                ct++;
            }else{
            break;}
        }
        for(ll i=oo;i<w;i++){
            if(arr[a][i]<c){
                ct++;
            }else{
            break;}
        }
        }
        cout<<ct<<endl;
        /*ll t=arr[a][b];
        ll ct=0;
        ll ww=min(b+1,w-1);
        ll e=max(b-1,(ll)0);
        if(t<c){
            ct=1;
            ll rt=arr[a][ww];
            ll tr=arr[a][e];
            while(rt<c && ww<w){
                 rt=arr[a][ww];
                ct++;
                ww++;
            }
            while(tr<c && e>=0){
                tr=arr[a][e];
                ct++;
                e--;
            }
        }

        cout<<ct<<endl;*/

    }
        }

}

}
