#include<bits/stdc++.h>
using namespace std;
int main(){

int t;cin>>t;
while(t--){

 string s;
 cin>>s;
 int len = s.length();
 int n,x;
 cin>>n>>x;
map<char,int> m;
bool tr= false;
int cnt=0;
for(int i=0;i<len;i++){
    m[s[i]]++;
    if(m[s[i]]>x && n!=0){
        m[s[i]]--;
        n--;
        cnt--;
    }
    else if(m[s[i]]>x && n==0){
            tr=true;
                cout<<cnt<<endl;
            break;
        }
cnt++;

    if(tr){
        break;
    }


    }
    if(!tr){
    cout<<len<<endl;
}
}
}
