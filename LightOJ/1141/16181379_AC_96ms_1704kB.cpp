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

#define  sz                         1003
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
#define  ret                     return

map < ll , vector < ll > >ma;
ll x,y;
ll step[sz];

int BFS()
{
    queue<ll>Q; Q.push(x);
    ll start,endx;
    step[x]=0;
    while (!Q.empty())
    {
        start=Q.front();Q.pop();
        for ( ll k=0 ; k<ma[start].size() ; k++)
        {
            endx=start+ma[start][k];
           /// Q.push(endx);
            if(   endx<=y && step[endx]==-1  )
            {
                //cout<<" pushed - "<<endx<<endl;
                Q.push(endx);
                step[endx]=step[start]+1;
                if(endx==y) {ret step[endx];}
            }
        }
    }
    ret step[y];
}
void primefactorization(  )
{
    for(ll i=1 ; i<=sz ; i++)
    {
        vector<ll > temp; bool don=false;
        ll x=i;
        for ( ll j=2 ; j<=sz ; j++)
        {
           if(x%j==0 && x!=j)
           {
               temp.pb(j);
               while(x%j==0)  {x=x/j;}
           }
           if(x==1) break;
           ///if (x==i)
        }
        if(x!=1 && x!=i) temp.pb(x);
        if(x==i) temp.erase(all(temp));
        sort( all(temp ), greater<ll>() );
        ma[i]=temp;
    }
}

void clearall()
{
    memset(step,-1,sizeof(step));
}
int main()
{
 ll t;

  primefactorization();
  cin>>t;
  LOOP(a,0,t)
  {
     clearall();
      cin>>x>>y;
      cout<<"Case "<<a+1<<": ";
      cout<<BFS() <<endl;

  }

}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
