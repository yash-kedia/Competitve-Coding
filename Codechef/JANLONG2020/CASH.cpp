//LINK https://codechef.com/problems/CASH



#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;
typedef long long int ll;
int main(){
    //start_routine();
ll t;cin>>t;
while(t--){
ll n;
ll k;
cin>>n>>k;
ll arr[n];
for(ll i=0;i<n;i++){
cin>>arr[i];}
ll neg[n];
ll pos[n];
for(ll i=0;i<n;i++){
neg[i]=arr[i]%k;
if(neg[i]==0){
    pos[i]=k;
}else{
pos[i]=max((ll)0,k-neg[i]);
}
}
ll pre[n];
pre[0]=neg[0];
for(ll i=1;i<n;i++){
    pre[i]=pre[i-1]+neg[i];
}
ll su=pre[n-1];
ll ans=INT_MAX;
for(ll i=0;i<n;i++){
ll required=(n-(i+1))*k-(su-pre[i])-pre[i];
if(required<=0){
        ans=min(ans,abs(required));

}
}
cout<<ans<<endl;
}
//end_routine();
}
