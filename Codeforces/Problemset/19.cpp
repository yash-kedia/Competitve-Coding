#include<bits/stdc++.h>
using namespace std;
long long int gc(long long int a,long long int b){
	if(a==0){
		return 0;
	}else{
		return gc(b%a,b);
	}
}
long long int  pr(long long int a ,long long int b,long long int c){
 
	long long int ans = __gcd(a,b);
	ans = __gcd(ans,c);
 
	cout<<a/ans<<" "<<b/ans<<" "<<c/ans;
 
		return 0;
 
}
int main(){
	
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	long long int sd=c*b,fg=d*a,hj=a*b;
	
		if(c%a==0 && d%b!=0){
			long long int  q=0,e=1;
			q=c/a;
			e++;
			long long int ans=q;
			long long int ty = d*e;
			while((ty)%b!=0){
				e++;
				ans+=q;
				ty=d*e;
			}
			long long int an = (d*e)/b;
			pr(ans+q,an,e);
			//cout<<ans+q<<" "<<an<<" "<<e;
			
			
			
		}
		else if(c%a!=0 && d%b==0){
			long long int  q=0,e=1;
			q=d/b;
			e++;
			long long int ans=q;
			long long int ty = c*e;
			while((ty)%a!=0){
				e++;
				ans+=q;
				ty = c*e;
			}
			long long int an = (c*e)/a;
			pr(an,ans+q,e);
			//cout<<an<<" "<<ans+q<<" "<<e;
			
			
		}else{
			pr(sd,fg,hj);
			//cout<<sd<<" "<<fg<<" "<<hj;
			
			
		}
	}
