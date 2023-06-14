///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///
/*
     If opportunity doesn't knock, build a door.
    Success is how high you bounce when you hit bottom.
*/
#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  preflag               long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define  ppb                        pop_back()
#define  pii                       pair<long long int , long long int >
#define  msi                       map< string,long long int>
#define  vi                           vector<long long int >
#define  iit                          iterator it,it1,it2
#define  iip                       iterator ip,ip1,ip2

#define  sz                         100000
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)
#define TEST_CASE(t)      for(ll int z=1;z<=t;z++)

#define  fs                       first
#define  sc                      second
#define  pi                         acos(-1.0)
#define  eps                     1e-9

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())

int sdivide(string a  , ll b)
{
    bool cas=false;
    if(  (a[0]=='-'  && b>0) || (a[0]!='-'  && b<0) )  {cas=true;}
   //// if(cas==true &&  (a[0]!='-'  && b<0) )
    {b=abs(b);}
     ////   cout<<" flag stat = "<<cas<<"    "<<b<<endl;
   if ( a[0]=='-' && b<0)
   {

       reverse(all(a)); a.pop_back(); reverse(all(a));
       b=abs(b);
   }
    ll ten=1, modd=b,ans=0,i=a.size()-1;
    for ( ;   i>=0  && a[i]!='-'   ; i--)
    {
        ans=ans+((a [i] -'0'  )*ten)%b;
        ten= (ten*10)%b;
    }
    ans=ans%b;
    if(cas) {ans=-ans;}
    ans=(ans+b)%b;
   // //////////////////
   /// cout<<"::"<<ans<<endl;
    /////////////
    return ans;
}
int main()
{
        ll t; cin>>t;
        LOOP(i,0,t)
        {
            string s; ll b;
            cin>>s>>b;
         cout<<"Case "<<i+1<<": ";
            ll V=sdivide ( s , b);
            if(V==0) cout<<"divisible";
            else cout<<"Not divisible";
            eee;
        }
}

