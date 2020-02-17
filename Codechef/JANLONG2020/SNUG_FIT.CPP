//LINK: https://www.codechef.com/problems/SNUG_FIT


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ll t;cin>>t;
while(t--){
ll n;cin>>n;
ll arr[n],ar[n];
for(ll i=0;i<n;i++){
cin>>arr[i];}
for(ll j=0;j<n;j++){
cin>>ar[j];}
sort(arr,arr+n);
sort(ar,ar+n);
ll sum=0;
for(ll i=0;i<n;i++){
sum+=min(arr[i],ar[i]);
}
cout<<sum<<endl;}
}
