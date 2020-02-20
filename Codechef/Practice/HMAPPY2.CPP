https://www.codechef.com/FEB19B/problems/HMAPPY2//Link:

#include<bits/stdc++.h>
using namespace std;
long long gcd(long long int a, long long int b){        
    if(b==0)
        return a;
    return gcd(b,a%b);
}

long long lcm(long long a,long long b){     
    if(a>b)
        return (a/gcd(a,b))*b;
    else
        return (b/gcd(a,b))*a;    
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        int a,b;
        cin>>n>>a>>b>>k;
        int count;
        count=(n/a)+(n/b)-(2*(n/lcm(a,b)));
        if(count>=k)
        {
            cout<<"Win"<<'\n';
        }
        else
        {
         cout<<"Lose"<<'\n';
        }
        //cout<<count;
        }

}
