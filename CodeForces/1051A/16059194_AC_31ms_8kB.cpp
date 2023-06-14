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
int main()
{
        ll t;
        cin>>t;
        LOOP(i,0,t)
        {
            string s;
            bool L=false,H=false,N=false;
            ll cap=0, low=0, nom=0;
            cin>>s;
            LOOP(j,0,s.size())
            {
                if(isupper(s[j])  ) {H=true;  cap++;}
              else  if(islower(s[j])) {L=true;  low++; }
             else   if(   s[j]>='0' && s[j]<='9'   ) {N=true; nom++;}
            }
            bool gg=false;
            if( L && H && N) {cout<<s<<endl;  gg=true;}
             ll len=0;
          if(!gg)
          {
              if(!L && !H )
            {
                s[0]='a'; s[1]='A';
                L=H=true;
            }
            else if(!L && !N )
            {
                s[0]='6'; s[1]='a';
                L=N=true;
            }
           else   if(!N && !H )
            {
                s[0]='6'; s[1]='A';
                N=H=true;
            }
            else if (!N)
                {
                    if(cap<low)
                    {
                        for(ll i=0; i<s.size() ; i++)
                        {
                            if(islower(s[i]))   {s[i]='3';break;}
                        }
                    }
                   else
                    {
                        for(ll i=0; i<s.size() ; i++)
                        {
                            if(isupper(s[i]))  {s[i]='3'; break;}
                        }
                    }
            }


            else if (!L) {
                    if(nom<cap)
                    {
                         for(ll i=0; i<s.size() ; i++)
                        {
                            if(isupper(s[i]))   {s[i]='a'; break;}
                        }
                    }
                    else {
                         for(ll i=0; i<s.size() ; i++)
                        {
                            if(!isupper(s[i]))  { s[i]='a'; break;}
                        }
                    }

            }

            else if (!H) {


                   if(nom<low)
                    {
                         for(ll i=0; i<s.size() ; i++)
                        {
                            if(islower(s[i]))   {s[i]='A';break;}
                        }
                    }
                    else {
                         for(ll i=0; i<s.size() ; i++)
                        {
                            if(!islower(s[i]))   {s[i]='A'; break;}
                        }
                    }
                    ////s[0]='A';
            }
            cout<<s<<endl;
          }

         }
}