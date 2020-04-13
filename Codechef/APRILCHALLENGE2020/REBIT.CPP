// 4
// ((#&#)|#)
// ((#&#)&(#&#))
// ((#^#)&(#|(#^#)))
// ((#&#)|(#^#))

// 6
// (#&#)
// ((#^#)&(#|(#^#)))
// ((#&#)|(#&#))
// ((#|(#&((#|#)^#)))&(#^(#|#)))
// ((#&#)|(#^#))
// ((((#&#)^#)|(#^#))&(#|#))

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long int m = 998244353;
//multiplicative modular inverse studied from gfg
ll gcde(ll e, ll f, ll *c, ll *d) 
{ 
    if (e == 0) 
    {*c = 0, *d = 1;
    	return f; }
    ll aa, bb;
    ll gcd = gcde(f%e, e, &aa, &bb); 
    *c = bb - (f/e) * aa; 
    *d = aa; 
    return gcd; 
}
ll modinv(ll b,ll mm) 
{ 
    ll wq, qw;
    ll g = gcde(b, mm, &wq, &qw);
    if (g != 1) 
        return -1;
    return (wq%mm + mm) % mm; 
} 
void div(ll a,ll b,ll M) 
{ 
    a = a % M; 
    ll inv = modinv(b, M); 
    if (inv == -1) {
    cout <<-1; 
	}	
    else{
    cout << (inv * a) % M <<" "; 
}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll bit_xor[16] = {0,1,2,3,1,0,3,2,2,3,0,1,3,2,1,0};
ll bit_and[16] = {0,0,0,0,0,1,2,3,0,2,2,0,0,3,0,3};
ll bit_or[16] =  {0,1,2,3,1,1,1,1,2,1,2,1,3,1,1,3};

	int t;cin>>t;
	while(t--){

		string s;
		cin>>s;

		if(s=="#"){
			cout<<"748683265 748683265 748683265 748683265"<<'\n';
		}else{

		ll len = s.length();

		ll n = 0;

		for(ll i=0; i<len; i++){
			if(s[i]=='#'){
				n++;
			}
		}


		ll ans[4] = {0,0,0,0};

		vector<vector<ll>> mul(n);

		stack<string> st;

		ll inde = -1;

		for(ll i = 0; i<len; i++){

			if(s[i]!=')'){
                    string de = "";
                    de+=s[i];
				st.push(de);
				//cout<<st.top();
			}
			else{
			    string ed = "";
			    ed+=s[i];
				st.push(ed);
				inde++;
				//cout<<st.top();
				st.pop();
				string bac = "";
				bac+= st.top();
				st.pop();
				string ope = "";
				ope+=st.top();
				st.pop();
				string fro = "";
				fro+=st.top();
				st.pop();
				st.pop();
				//cout<<ope;
				ll zer = 0,one = 0,two = 0,thr = 0;
				if(ope=="|"){
					 zer = 1;
					 one = 9;
					 two = 3;
					 thr = 3;
				}else if(ope=="&"){
				    //cout<<"here";
					 zer = 9;
					 one = 1;
					 two = 3;
					 thr = 3;
				}else if(ope=="^"){
					 zer = 4;
					 one = 4;
					 two = 4;
					 thr = 4;
				}
				//cout<<zer<<one<<two<<thr;
				bool tf = true;
				if(bac != "#" || fro != "#"){

					ll le = 0;
					ll ind = 0;
						if(bac != "#" && fro == "#"){

							tf = false;

							le = bac.length()-1;

                            string abc = bac.substr(1,le);

                            ind  = stoi(abc);

						}
						else if(fro != "#" && bac == "#"){

							tf = false;

							 le = fro.length()-1;

							 string ba = fro.substr(1,le);

							 ind = stoi(ba);
						}

						ll a=0,b=0,c=0,d=0;
						if(!tf){

							if(ope == "&"){
                                    //cout<<mul[ind][0]<<mul[ind][1]<<mul[ind][2]<<mul[ind][3];
								for(ll i=0; i<16; i++){
									//ans[bit_and[i]]=mul[ind][i%4];
									if(bit_and[i]==0){
										a=( a%m + mul[ind][i%4]%m)%m;
									}else if(bit_and[i]==1){
										b=( b%m + mul[ind][i%4]%m)%m;
									}else if(bit_and[i]==2){
										c=( c%m + mul[ind][i%4]%m)%m;
									}else if(bit_and[i]==3){
										d=( d%m + mul[ind][i%4]%m)%m;
									}
								}
								//cout<<a<<b<<c<<d;

						}else if(ope == "^"){

								for(ll i=0; i<16; i++){
									//ans[bit_xor[i]]+=mul[ind][i%4];
									if(bit_xor[i]==0){
										a=( a%m + mul[ind][i%4]%m)%m;
									}else if(bit_xor[i]==1){
										b=( b%m + mul[ind][i%4]%m)%m;
									}else if(bit_xor[i]==2){
										c=( c%m + mul[ind][i%4]%m)%m;
									}else if(bit_xor[i]==3){
										d=( d%m + mul[ind][i%4]%m)%m;
									}
								}

						}else if(ope == "|"){

								for(ll i=0; i<16; i++){
									//ans[bit_or[i]]=mul[ind][i%4];
									if(bit_or[i]==0){
										a=( a%m + mul[ind][i%4]%m)%m;
									}else if(bit_or[i]==1){
										b=( b%m + mul[ind][i%4]%m)%m;
									}else if(bit_or[i]==2){
										c=( c%m + mul[ind][i%4]%m)%m;
									}else if(bit_or[i]==3){
										d=( d%m + mul[ind][i%4]%m)%m;
									}
								}
						}
                        ans[0]=a%m;
                        ans[1]=b%m;
                        ans[2]=c%m;
                        ans[3]=d%m;
						
						string df = "@";
						df+=to_string(inde);
						st.push(df);
						mul[inde].push_back(ans[0]%m);
						mul[inde].push_back(ans[1]%m);
						mul[inde].push_back(ans[2]%m);
						mul[inde].push_back(ans[3]%m);
					}
						else{
                                ll a = 0,b=0,c=0,d=0;
                            ll yh = fro.length()-1;
                            ll hy = bac.length()-1;
							string fi = fro.substr(1,yh);
							ll uh = stoi(fi);

							string se = bac.substr(1,hy);

							ll hg = stoi(se);
							if(ope == "&"){
								ll yg = 0;
								ll fg = 0;
								for(ll i=0; i<16; i++){
									//ans[bit_and[i]]=mul[ind][i%4];
									if(bit_and[i]==0){
										a=(a % m + ( ( (mul[uh][yg]%m) * (mul[hg][fg]%m) )%m)%m)%m;
									}else if(bit_and[i]==1){
										b=(b % m + ( ( (mul[uh][yg]%m) * (mul[hg][fg]%m) )%m)%m)%m ;
									}else if(bit_and[i]==2){
										c=(c % m + ( ( (mul[uh][yg]%m) * (mul[hg][fg]%m) )%m)%m)%m;
									}else if(bit_and[i]==3){
										d=(d % m + ( ( (mul[uh][yg]%m) * (mul[hg][fg]%m) )%m)%m)%m;
									}
									fg++;
									if(fg==4){
										fg = 0;
										yg++;
									}
								}

						}else if(ope == "^"){
								ll gff = 0, fgg = 0;
								for(ll i=0; i<16; i++){
									//ans[bit_xor[i]]=mul[ind][i%4];
									if(bit_xor[i]==0){
										a=(a % m + ( ( (mul[uh][gff]%m) * (mul[hg][fgg]%m) )%m)%m)%m;
									}else if(bit_xor[i]==1){
										b=(b % m + ( ( (mul[uh][gff]%m) * (mul[hg][fgg]%m) )%m)%m)%m;
									}else if(bit_xor[i]==2){
										c=(c % m + ( ( (mul[uh][gff]%m) * (mul[hg][fgg]%m) )%m)%m)%m;
									}else if(bit_xor[i]==3){
										d=(d % m + ( ( (mul[uh][gff]%m) * (mul[hg][fgg]%m) )%m)%m)%m;
									}
									fgg++;
									if(fgg==4){
										fgg = 0;
										gff++;

									}
								}

						}else if(ope == "|"){
								ll fv = 0, vf = 0;
								for(ll i=0; i<16; i++){
									//ans[bit_or[i]]=mul[ind][i%4];
									if(bit_or[i]==0){
										a=( a % m + ( ( (mul[uh][fv]%m) * (mul[hg][vf]%m) )%m )%m)%m;
									}else if(bit_or[i]==1){
										b=( b % m + ( ( (mul[uh][fv]%m) * (mul[hg][vf]%m) )%m )%m)%m;
									}else if(bit_or[i]==2){
										c=( c % m + ( ( (mul[uh][fv]%m) * (mul[hg][vf]%m) )%m )%m)%m;
									}else if(bit_or[i]==3){
										d=( d % m + ( ( (mul[uh][fv]%m) * (mul[hg][vf]%m) )%m )%m)%m;
									}
									vf++;
									if(vf==4){
										vf = 0;
										fv++;
									}
								}
						}
						

                        ans[0]=a%m;
                        ans[1]=b%m;
                        ans[2]=c%m;
                        ans[3]=d%m;
                        string dw="@";
                        
                        dw+=to_string(inde);
                        st.push(dw);
                        mul[inde].push_back(ans[0]%m);
						mul[inde].push_back(ans[1]%m);
						mul[inde].push_back(ans[2]%m);
						mul[inde].push_back(ans[3]%m);



						}



				}else{
					//cout<<"here";
							ans[0]=zer;
                            ans[1]=one;
				            ans[2]=two;
                            ans[3]=thr;
							//cout<<ans[0]<<ans[1]<<ans[2]<<ans[3];
				string sd = "@";
				sd+=to_string(inde);
				
				
				mul[inde].push_back(zer%m);
				mul[inde].push_back(one%m);
				mul[inde].push_back(two%m);
				mul[inde].push_back(thr%m);
				st.push(sd);
				//cout<<st.top();
				
				

				
			}
		}
		}
				long long tt = 0;
				for(ll i=0;i<4;i++){
                    //cout<<ans[i]<<" ";
                    tt = (tt%m + ans[i]%m)%m;
                }
                for(ll i=0;i<4;i++){
                div(ans[i],tt,m);

	            }
                //div((ll)9,tt,m);
                 cout<<'\n';


}
}


}
