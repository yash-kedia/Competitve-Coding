#include<bits/stdc++.h>
#define pb push_back
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define start_routine() int begtime = clock();
#define end_routine() int endtime = clock(); \
                      cerr << "\n\n" << "Time elapsed: " << \
                      (endtime - begtime)*1000/CLOCKS_PER_SEC << " ms\n\n"; \
                      return 0
using namespace std;
typedef long long int ll;


int main(){

int test;cin>>test;
for(int i=0;i<test;i++){
int n;cin>>n;
int yash=0;
int answer=0;
while(yash<n){
    int rt,tr,er;
    cin>>rt>>tr>>er;
    int qq,pp;


    rt++;
    qq=tr/rt;

    pp=qq*er;

    if(answer<pp){

    answer=pp;
    }
    yash++;
}
cout<<answer<<endl;

}
}
