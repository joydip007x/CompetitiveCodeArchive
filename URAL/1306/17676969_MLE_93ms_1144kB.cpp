///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<bits/stdc++.h>

using namespace std;

#define  loop(i,L,U)        for( int i=(int)L;i<U;i++)
#define  loopeq(i,L,U)    for( int i=(int)L;i<=U;i++)
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define ll long long
int main()
{
 priority_queue<ll>pq;
 ll t,a;
 o(t);
 loopeq(i,0,t/2)
 {
     o(a);
     pq.push(a);
 }
 loop(i,t/2+1 , t)
 {
     o(a);
     if(a<pq.top())
     {
         pq.pop();pq.push(a);
     }
 }
 if(t&1) printf("%lld\n",pq.top());
 else
 {
     a=pq.top();pq.pop();
     ///x=pq.top(); pq.pop();
     printf("%lld",(a+pq.top())/2);
     if( (a+pq.top()) %2 ) printf(".5\n");
     else printf("\n");
 }
}
