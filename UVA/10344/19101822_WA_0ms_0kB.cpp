#include<bits/stdc++.h>
using namespace std;

#define  loop(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  loopeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
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

#define  sz                         1000000
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
#define  inf                     0x7fffffff

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                         int
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///
vector<int>v,tmp;
bool foind=0;
int n,k,t,vis[1000],x,cx,a[6];
ll callmedad(  ){

    if(foind) ret 1;
    if(  tmp.size()==5   )
    {
       if(tmp.back()==23) ret 1;
       ret 0;
    }
   for( int i=1 ; i<=5 ; i++){

        if(vis[i]) continue;
        vis[i]=1;
        cx=tmp.back();
        tmp.pb(  cx+ a[i]);if( tmp.back()==23 ) foind=1;
        if(  callmedad(  )) ret 1;tmp.pop_back();
        tmp.pb(  cx * a[i]);if( tmp.back()==23 ) foind=1;
        if(  callmedad(  )) ret 1;tmp.pop_back();
        tmp.pb(  cx - a[i]);if( tmp.back()==23 ) foind=1;
        if(  callmedad(  )) ret 1;tmp.pop_back();
        vis[i]=0;
   }
   ret 0;
}
int main()
{
    int lll=0;
   while( scanf("%d %d %d %d %d",&a[1] , &a[2] , &a[3] ,&a[4] , &a[5] ) and a[1]  ){
        foind=0;
        bool ff=false;
        for(ll i=1; i<=5 ; i++){
            tmp.clear();
            tmp.pb(a[i]);
            vis[i]=1;
            if(callmedad()) { ff=1; break;  }
            vis[i]=0;

        }
       if(ff) printf("Possible\n");
       else printf("Impossible\n");
    }

}
