//link https://www.codechef.com/AUG19B/problems/KS1/

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
int t;cin>>t;
while(t--){
  int n;
  cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    ll art[n];
    ll sum=0;
    ll count=0;
    int c=0;
    for(int i=0;i<n;i++){
            sum=0;
            
            c=0;
    for(int j=i;j<n;j++){
        sum=sum^arr[j];
        c++;
        if(sum==0){
            count=count+c-1;
        }
    }
    }
    cout<<count<<endl;
}}
