#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,x  ,t;
vector<ll>order,nn;
void finddivisor(){

   order.resize(10000,0);
   order[0]=order[1]=1;
   for(int i=2; i<=1010 ; i++)
   {
       ll cnt=0;
       for(int j=1 ; j <=i+1 ; j++)
       {
           if(i%j)continue;
           cnt++;
       }
       order[i]=cnt;
   }
}
bool cmp(ll a, ll b)
{
    if( order[a]!=order[b] ){  //number of divisors of x is less than number of divisors of y
            if( order[a]<order[b] ) return true; //means a comes first
            else return false;
    }
    else{// number of divisors of x is equal to number of divisors of y
        if(  a>b) return true;//X comes first if x>y
         return false;
    }
}
int main()
{
   finddivisor();
   for(int i=1; i<=1000 ; i++) nn.push_back(i);
   sort(nn.begin(),nn.end(), cmp);
   cin>>t;
   for(int c=0; c<t ; c++){
    cin>>x;
    cout<<"Case "<<c+1<<": "<<nn[x-1]<<"\n";
   }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
