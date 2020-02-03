//Link: https://codeforces.com/contest/112/problem/A


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string s,ss;
    cin>>s>>ss;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(ss.begin(),ss.end(),ss.begin(),::tolower);
    set<string> se;
    se.insert(s);
    se.insert(ss);
    if(se.size()==1){
        cout<<0;
    }else{
    set<string>  ::iterator itr;
    for(itr=se.begin();itr!=se.end();){
        if(*itr==s){
            cout<<-1;
            break;
        }else{
        cout<<+1;
        break;}
    }
    }
}
