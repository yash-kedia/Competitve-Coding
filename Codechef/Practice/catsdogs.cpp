//Link: https://www.codechef.com/viewsolution/26209277


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool fun(ll c,ll d,ll l)
{
    ll total = 4*d+4*c;
     ll min = 4*d;
     ll dogscat = 2*d;
    if(l>total)
    {
        return false;
    }
    else if(l==total)
    {
        return true;
    }
    else if(l<min)
    {
        return false;
    }
    else if(l>=min&&l<total)
    {
        if((l%4))
            return false;
        else
        {
            l-=min;
           ll cats = l/4;
           if(cats>c)
            return false;
           else if(cats==c)
            return true ;
           else
           {
               c-=cats;
               if(c<=dogscat)
                return true;
               else
                return false;
           }
        }
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll d,c,l;
        cin>>c>>d>>l;
        if(fun(c,d,l))
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
    }
}
