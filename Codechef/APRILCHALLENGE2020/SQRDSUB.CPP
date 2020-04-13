#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){

			ll n;
			cin>>n;

			ll arr[n];
			ll four = -1;
			ll ans = 0;
			ll f_index = -1;
			bool tr = true;
			for(ll i=0;i<n;i++){
				cin>>arr[i];
				arr[i] = abs(arr[i]);
				arr[i] = arr[i] % 4;
				if(arr[i]==0){
					if(tr){
						f_index = i;
						tr = false;
					}
					ans++;
				}
				if(arr[i] == 1 || arr[i] ==3){
					ans++;
				}


			}

			
			ll two_index = -1;
			ll odd_index = -1;
			ll two_index_two = -1;
			ll tf = 0;
			for(ll i=0;i<n;i++){

				if(arr[i] == 0){

					four = i;
					ans += (i-0);
				}
				if(arr[i] == 2){

					if(four == -1 && two_index !=-1) {
						ans += two_index +1;
					}
					else if(four != -1 && two_index == -1){

						ans += four + 1;
					}
					else if(four != -1 && two_index != -1){
						ans += max(four,two_index) + 1;
					}
					two_index_two = two_index;
					two_index = i;
					tf++;


				}
				if(arr[i] ==3 || arr[i] == 1){

					if(tf>=2 && four != -1){

						if(four > two_index){
							ans += four + 1;
							ans += i - four - 1;
						}
						else if (four < two_index && four > two_index_two){

							ans += i - two_index - 1;
							ans += four + 1;
						}else if(four < two_index && four < two_index_two){

							ans += i-two_index - 1;
							ans += two_index_two + 1;
						}


					}else if (tf==1 && four != -1){

						if(four < two_index){

							ans += four + 1;
							ans += i - two_index - 1;
						}else if(four > two_index){

							ans += four + 1;
							ans += i - four - 1;
						}

					}else if(tf>=2 && four == -1){

						ans += i - two_index - 1;
						ans += two_index_two + 1;


					}else if(tf == 1 && four == -1){

						ans += i - two_index - 1;


					}else if(tf == 0 && four != -1){

						ans += i - four - 1;
						ans += four + 1;
					}else if(tf == 0 && four == -1){
						ans += i ;
					}



				}

					




				}

				cout<<ans<<'\n';
			}

	}
