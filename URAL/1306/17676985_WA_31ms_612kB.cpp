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
#define  o(c)                     scanf("%d",&c);
#define ll int
int main()
{

    int t;
    while( scanf("%d",&t) ==1 )
    {
        priority_queue<ll>pq;
        ll a,i;
        for(i=0 ; i<t/2 +1 ; i++)
        {
            o(a);
            pq.push(a);
        }
        for(   ; i<t ; i++)
        {
            o(a);
            if(a<pq.top())
            {
                pq.pop();
                pq.push(a);
            }
        }
        if(t&1)
            printf("%d\n",pq.top());
        else
        {
            a=pq.top();
            pq.pop();
            printf("%d",(a+pq.top())/2);
            if( (a+pq.top())%2==1 )
                printf(".5\n");
            else
                printf("\n");
        }
    }
}
