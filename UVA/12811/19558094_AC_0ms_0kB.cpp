#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                       long long
const ll  mod= 1e6+03;

ll t, lef,righ,forwar, bgn,en,rec;
string s;
vector<string>vs;
void process(string s, ll xz) ;
void calc(ll z){

     string aa;
     while( cin>>aa){
            ll x;
         if(aa=="]") return ;
         else   if(aa=="left") {
            cin>>x;
            x= ( (x%mod) * (z%mod) )%mod;
            lef=(lef+ x%mod )%mod;
         }
         else   if(aa=="right") {
            cin>>x;
            x= ( (x%mod) * (z%mod) )%mod;
            righ=righ+ x%mod ;righ%=mod;
         }
         else   if(aa=="forward"){

             cin>>x;
             x= ( (x%mod) * (z%mod) )%mod;
            forwar=forwar+ x%mod ;
            forwar%=mod;
         }
         else if(aa=="repeat"){
            cin>>x;
            calc( ( (z%mod*x%mod)%mod ) );
         }
     }
     return ;
}
int main()
{
  cin>>t;
   while(t--)
    {
        string str;
        lef=righ=forwar=bgn=en=rec=0;
        while( cin>>str ){

          ll x;
         if(str=="end") break;
         else   if(str=="left") {
            cin>>x;
            lef=lef+ x%mod ;
            lef%=mod;
         }
         else   if(str=="right") {
                    cin>>x;

             righ=righ+ x%mod ;
            righ%=mod;
         }
         else   if(str=="forward"){
                    cin>>x;

            forwar=forwar+ x%mod ;
            forwar%=mod;
         }
         else if(str=="repeat"){
                    cin>>x;

            calc(x%mod);
         }
        }
        ///xxx;
        cout<<lef<<" "<<righ<<" "<<forwar<<endl;
        ///cout<<"LAURA MERA\n";
    }

}


/*
2
begin
left 90
right 90
forward 10
repeat 10 [ left 10 ]
end

*/


///author-joydip007x         ///
///Time&Date-Whenever i submit///
