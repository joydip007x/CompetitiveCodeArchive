///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  preflag               int flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define  ppb                        pop_back()
#define  pii                       pair< char ,  int >
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
bool chk1 (char x)
{
    if (x>=97 && x<=105) return true;
    else return false;
}
bool chk2 (char x)
{
    if (x>=106 && x<=114) return true;
    else return false;
}
//bool chk3 (char x)
//{
//    if (chk1(x) ==false && chk2(x)==false  ) return true;
//    else return false;
//}
int main()
{

        while(1){
        int nk1 , nk2 , nk3 ;
        cin>>nk1>>nk2>>nk3;
        if (nk1 +nk2 + nk3 ==0)  {break;}
        char s[1000];
        cin>>s;
        vector <char > k1,k2,k3;
        vector <char >v1,v2,cut;
        preflag;
        LOOP(i,0,strlen(s)){
        if( chk1(s[i]) ){     k1.pb(s[i]);       }
        if(chk2(s[i])) {   k2.pb(s[i])  ;        }
        if(chk1(s[i])==false && chk2(s[i])==false ) { k3.pb(s[i]);  /*check(s[i]);*/ }
        }
        //////////////////////////////////////////////////////////////////////////////////////////key 1
         int szk1=k1.size();
        if(szk1>0){
                                   if(nk1>szk1) {  nk1=nk1%szk1;      }

                        LOOP(i,0,szk1-nk1)
        {cut.pb(k1[i]);}   reverse(all(k1));k1.resize(nk1); reverse(all(k1));
         LOOP(i,0,szk1-nk1)
        {k1.pb(cut[i]);}                    j=0;
        ////
        //for(auto it : k1) cout<<char(it)<<" ";
        ///
        LOOP(i,0,strlen(s))
        {   if(chk1(s[i])){  s[i]=k1[j++]; }        }
        ////cout<<s;
        cut.erase(all(cut));

        }

        ////////////////////////////////////////////////////////////////////////////////////////////key2
         szk1=k2.size();
        
       if(szk1>0) {
                   if(nk2>szk1) {  nk2=nk2%szk1;      }
                        LOOP(i,0,szk1-nk2)
        {cut.pb(k2[i]);}   reverse(all(k2));k2.resize(nk2); reverse(all(k2));
         LOOP(i,0,szk1-nk2)
        {k2.pb(cut[i]);}                    j=0;
        ////
        //for(auto it : k1) cout<<char(it)<<" ";
        ///
        LOOP(i,0,strlen(s))
        {   if(chk2(s[i])){  s[i]=k2[j++]; }        }
       /// cout<<s;
       cut.erase(all(cut));
       }
       ////////////////////////////////////////////////////////////////////////////////////////////////key3
                szk1=k3.size();
        if(szk1>0){

        if(nk3>szk1) {  nk3=nk3%szk1;      }

         LOOP(i,0,szk1-nk3)
         
        {cut.pb(k3[i]);}   reverse(all(k3));k3.resize(nk3); reverse(all(k3));
         LOOP(i,0,szk1-nk3)
        {k3.pb(cut[i]);}
              j=0;
            //  reverse(all(k3));

        ////
       /// for(auto it : k3) cout<<char(it)<<" ";
        ///
        LOOP(i,0,strlen(s))
        {   if(chk1(s[i])==false && chk2(s[i])==false )   {
                 // cout<<" replacing "<<s[i] <<" with "<< k3[j] <<endl;
                     s[i]=k3[j++];       }
                }
        }
        cout<<s<<endl;

        }

}

