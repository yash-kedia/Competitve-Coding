//Link: https://codeforces.com/contest/1311/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){

int t;cin>>t;
while(t--){
  int n,nn;
  cin>>n>>nn;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
int ar[nn];
map<pair<int,int>,bool> m;
  for(int i=0;i<nn;i++){
    cin>>ar[i];
   m[{ar[i],ar[i]+1}]=true;
  }

vector<int> tr;
bool tt=true;
int tq[n];
for(int i=0;i<n;i++){
    tq[i]=arr[i];
}
sort(tq,tq+n);
for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
        bool small=false;
      bool swapped=false;
      if(arr[i]<=arr[j]){
      }else if(arr[i]>arr[j]){
      small=true;
      if(m[{i+1,j+1}]==true ){
      swap(arr[i],arr[j]);
      swapped=true;

}
int u=1;
int l=i+1;
int o=i+2;
bool re=false;
bool trr=true;
if(small==true && swapped==false){
while(trr){

    if(m[{l,o}]==true){
        trr=true;
    }else{
    trr=false;}
    if(o==j+1 && trr==true){
            re=true;
    }
    l++;
    o++;
}
}
if(re==true &&  small==true && swapped==false){
    swap(arr[i],arr[j]);
}


}
}


}
int count=0;
for(int i=0;i<n;i++){
    if(tq[i]==arr[i]){
        count++;
    }
}
if(count==n){
    cout<<"YES\n";
}else{
cout<<"NO\n";}

}
}

