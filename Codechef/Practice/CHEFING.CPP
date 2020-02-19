
//Link:  https://www.codechef.com/FEB19B/problems/CHEFING

#include<bits/stdc++.h>
using namespace std;
string removeDuplicatesFromString(string str) 
{ 
    int counter = 0; 
  
    int i = 0; 
    int size = str.size(); 
    int x; 
    int length = 0; 
  
    while (i < size) { 
        x = str[i] - 97; 
        if ((counter & (1 << x)) == 0) { 
  
            str[length] = 'a' + x; 
            counter = counter | (1 << x); 
  
            length++; 
        } 
        i++; 
    } 
  
    return str.substr(0, length); 
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n];
        int temp=-1,h,shit=0,count=0;
        int randi[26]={0};
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            s[i]=removeDuplicatesFromString(s[i]);
           // cout<<s[i]<<endl;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<s[i].length();j++){
                int d=((int)s[i][j])-97;
                randi[d]++;
            }
        }
        for(int i=0;i<26;i++){
            // cout<<randi[i]<<endl;
            if(randi[i]>=n){
                shit++;
            }
        }
            
            
         cout<<shit<<'\n';
       // cout<<temp<<'\n'<<h<<endl;
         }
}
