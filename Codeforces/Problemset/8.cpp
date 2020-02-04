//Link:  https://codeforces.com/problemset/problem/711/A


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ll n;
cin>>n;
vector<string> vec;
while(n--){
    string s;
    cin>>s;
    vec.push_back(s);
}
bool tr=false;
vector<string> ::iterator i;
for(i=vec.begin();i!=vec.end();i++){
        string ss;
        ss=*i;
    for(ll j=0;j<5;j++){
            char c=ss[j];
            char cc=ss[j+1];
   // cout<<c;
        if(c=='O' && cc=='O'){
              // cout<<"y";
            ss[j]='+';
            ss[j+1]='+';
            *i=ss;
            tr=true;
            break;
        }
    }
    if(tr){
        cout<<"YES\n";
        for(auto ui:vec){
    cout<<ui<<endl;
}
        break;
    }
}
if(!tr){
    cout<<"NO\n";
}

}
