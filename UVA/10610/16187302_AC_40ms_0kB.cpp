
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

#define  sz                         10009
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
#define ll                          double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return
char sc[300];
ll x[sz],y[sz],h,mi,v,sp,desty;
int tra=-1,i=0,j,k,kk,destx,rd[sz],len=0;
void clearall()
{
    tra=-1,i=0,j=0,k=0,kk=0,destx=0;
    memset(rd,0,sizeof(rd));
    memset ( x,0,sizeof(x));
    memset(y,0,sizeof(y));
    len=0;
}
int main()
{
       for( ; ; )
       {
           clearall();
           cin>>sp>>mi;
           len=mi*60*sp;
           if(  sp==0 && mi==0 ) {break;}
           gets(sc);
           while ( gets(sc)  )
           {
               tra++;
            if (strlen(sc)==0) break;
             sscanf(sc,"%lf %lf",&x[tra] , &y[tra] );
           }
           //cout<<"start = "<<x[0]<<","<<y[0]<<endl;
           //cout<<"end = "<<x[1]<<","<<y[1]<<endl;
       queue< int > Q;
       Q.push(0);
       rd[  0 ]=1;
       while (  !Q.empty()  )
       {
         destx=Q.front() ; Q.pop();
         for ( kk=0 ; kk<tra ; kk++)
         {
             if (   hypot(  x[kk]-x[destx]   , y[kk]-y[destx]  ) <len )///hypot retrun  x^2 + y^2  >>io -float/double
            {
                if(rd[kk]==0)
                {
                 Q.push(kk);
                 rd[kk]=rd[destx]+1;
                }
            }
         }
           if(  rd[ 1 ]    ) break;//if steps to destination is not 0 means updated and ends;
       }
       if(rd[1]) printf("Yes, visiting %d other holes.\n", rd[1]-2);//start=1 end=1 ei  duita bad diye intemediate hols so -2 ;
       else puts("No.");
      /// clearall() ;
        }

}
//OPTIMAL-http://mypaper.pchome.com.tw/zerojudge/post/1325000877
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/

