

//link https://www.codechef.com/MARCH19B/problems/JAIN

#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#define ll long long int
#define start_routine() int begtime = clock();
#define end_routine() int endtime = clock(); \
                      cerr << "\n\n" << "Time elapsed: " << \
                      (endtime - begtime)*1000/CLOCKS_PER_SEC << " ms\n\n"; \
                      return 0
using namespace std;






int main()
{
    //start_routine();
    fastio
    int t;
    cin>>t;
    while(t--)
    {

        ll n;cin>>n;
        string s[n];
        int arr[n]={0};
        int art[n]={0};
        long long int count=0;
        int pp[32]={0};
        for(int i=0;i<n;i++){
        cin>>s[i];
        ll l=s[i].length();
        int a=0,e=0,k=0,o=0,u=0,d=0,cou=0,tr=0,jk=0,kl=0,jh=0,yu=0;
        for(int j=0;j<l;j++){

            if(s[i][j]=='a'){if(a==0) {a++;}}
            if(s[i][j]=='e'){if(e==0) {e++;}}
            if(s[i][j]=='i'){if(k==0) {k++;}}
            if(s[i][j]=='o'){if(o==0) {o++;}}
            if(s[i][j]=='u'){if(u==0) {u++;}}
             tr=a<<4;
             jk=e<<3;
             kl=k<<2;
             jh=o<<1;
            yu=tr|jk|kl|jh|u;
            arr[i]=yu;
            art[i]=(yu^31);
    }
        pp[yu]++;
}
              for(int i=0;i<n;i++){
          if(arr[i]==31){
                    count+=n-i-1;
            pp[arr[i]]--;
         //cout<<"count="<<count<<endl;
          }
          else{
                int yi=32;

    while(--yi){
         int re=art[i]&yi;
        if(re==art[i]&&pp[yi]>0&&yi!=arr[i]){count=count+pp[yi];
}
}
          pp[arr[i]]--;

          }
          }
    cout<<count<<endl;
    //  end_routine();
     }
}
