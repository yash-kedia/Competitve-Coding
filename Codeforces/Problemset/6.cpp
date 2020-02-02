//Link:  https://codeforces.com/contest/1291/problem/A


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool str(string s,ll n){
if(s[n-1]=='2' || s[n-1]=='0' || s[n-1]=='4' || s[n-1]=='6' || s[n-1]=='8'){
	return true;
	}else{
	return false;
	}

}
int main(){
	ll t;cin>>t;
	while(t--){
	ll n;cin>>n;
	string s;
	cin>>s;
	string st;
	for(ll i=0;i<n;i++){
        if(s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='0'){

        }else{
        st+=s[i];}
	}

	if(st.length()==0 || st.length()==1){
        cout<<"-1"<<endl;
	}
	else if(st.length()&1){
        for(ll i=1;i<st.length();i++){cout<<st[i];}
        cout<<endl;
	}else{
	cout<<st<<endl;
  }
  
  
	/*while(str(s,n)){
	s[s.length() - 1] = '\0';
	n--;
	}
	if(n<=0){
        cout<<"-1"<<endl;
	}else{
	ll sum=0;
	for(auto ui:s){
	sum=sum+(int)ui;
	}
	if(sum&1){
            string st;
	bool tr=true;
	for(auto ui:s){
	if((int)ui&1 && tr){
	tr=false;
	}else{
	st+=ui;
	}
	}
	cout<<st<<endl;
	}
	else{
	cout<<s<<endl;
	}
	}*/

}
}
