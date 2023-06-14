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

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        int
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())

#define   chk(L,H)           L>=0 && H>=0 && L<y && H<x  && vis[L][H]!=1
int mvx[ ]={1,0,-1,0 };
int  mvy[ ]={0,-1,0,1};
int a[21][21],vis[21][21];
int cnt=0,x,y;
void dfs ( int  s1,int s2 )
{
   vis[s1][s2]=1;
   cnt++;
    for(int i=0 ; i<4 ; i++)
    {
            if( chk (s1+mvx[i],s2+mvy[i] ) && a[s1+mvx[i]  ][  s2+mvy[i]   ] !=-1    )
                      dfs(  s1+mvx[ i ],      s2+mvy[  i  ]);
             ///cout<<cnt;
    }
}
int main()
{
       ll t; //o(t);
       cin>>t;
     LOOP(p,0,t)
     {
         ll ans,start1,start2;
         //o(x);o(y);
         cin>>x>>y;
         char z;
         memset(a,0,sizeof(a));
         memset(vis,0,sizeof(vis));
         for(int i=0; i<y;i++)
         {
             for(int j=0; j<x ; j++)
             {
                ///scanf("%c",&z);
                cin>>z;
                if(z=='#' ) {a[i][j]=-1;}
                if(z=='@') {start1 = i ;start2=j;}
             }
         }
         dfs(start1,start2);
          printf("Case %d: ",p+1);
         cout<<cnt<<endl;
         cnt=0;
    // printf("Case %d: %d\n",i+1,ans);
     }
}
///*followed by ->https://vjudge.net/problem/CodeForces-292D*//