//link:  https://codeforces.com/contest/1313/problem/A


#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    if(a>0 && b>0 && c>0){
        ans=ans+3;
        a--;
        b--;
        c--;
    }
    if(a>0 && b>0){
        a--;
        b--;
        ans=ans+1;
    }
    if(a>0 && c>0){
        a--;
        c--;
        ans=ans+1;
    }

    if(c>0 && b>0){
        c--;
        b--;
        ans=ans+1;
    }
    if(a>0 && b>0 && c>0){
            a--;
    b--;
    c--;
        ans=ans+1;
    }
    cout<<ans<<endl;

}
}
