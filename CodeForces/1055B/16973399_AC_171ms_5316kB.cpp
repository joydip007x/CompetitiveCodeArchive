///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

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
#define ll                        long long
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

ll cul , que , len,x,y,z,trig=0,old=-1;
map<ll,ll> m, an;
map<ll ,ll >::iterator it;
bool vis[sz];
void primaryjob()
{
    mem(vis,false);
    loopeq(i,1,cul)
    {
        if ( m[i]>len )
            {   vis[i]=true; }
    }
    old=0;
    loopeq(i,1,cul)
    {
        if( vis[i] )
        {
         old++;
         while(vis[i+1]==vis[i] ) { i++; }
        }
    }
   /// cout<<old<<" fuc my niga \n ";
}
int main()
{
    scanf("%lld %lld %lld",&cul,&que,&len);
    loop(i,0,cul)
    {
        scanf("%lld",&x);
        m[i+1]=x;
    }
    primaryjob();
    loop(i,0,que)
    {
        scanf("%lld",&x);
        if(x){
            scanf("%lld %lld",&y,&z);
            trig=0;//////intially trigger off
            
            if ( m[y]>len )
            {  trig=1;   }///just checking if it is turned on even before my input.if its on ans wont change
            
            m[ y ]=m[y]+z;
            if( trig and m[y]>len) trig=0; // if previously on and now >len , ans wont change
            else if ( !trig and m[y]>len ) trig=1; /// else if it is triggered right now , trig on
            
            if(trig ) /// evaluate trig for every upgrade in len
            {
                 vis[y]=true;
               if ( vis[y-1] and vis[y+1]  ) old--;  //if it destroys a segment just by being in-between ans--
                                                      // like 1 0 1 -> 1 1 1 // ans=2 became >1                                      
               if ( !vis[y-1] and !vis[y+1]  ) old++; // reverse of prev
            }

        }
        else
        {         printf("%lld\n",old);          }
    }
}
