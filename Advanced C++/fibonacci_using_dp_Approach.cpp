#include<bits/stdc++.h>
using namespace std;

int fib(int n,vector<int> &dp){

    //base case if (n==0) || (n==1) return 0 or 1 simultaneously because fib(0)==0 and fib(1)==1
    if(n<=1)
      return n;
    
    //if we have calculated dp[n] then we need not to calculate it again thus saving time and no of operations
    if(dp[n]!=-1)
        return dp[n];
    
    //calculating dp array of the number n as a sum of its previous two elements(fibonacci)
    dp[n] = fib(n-1,dp)+fib(n-2,dp);
    
    //returning dp[n] as a fibonacci number
    return dp[n];
    

}


int main(){
    int n;
    cin>>n;
    
    //initializing the dp array with -1 because we will check if fib(dp[i]) is calculated then we will not calculate 
    vector<int> dp(n+1,-1);
    
    cout<< fib(n,dp);

}
