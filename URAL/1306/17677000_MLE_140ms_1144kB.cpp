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

    int t;priority_queue<ll>pq;
        ll a,i;
        double xx;
    while( scanf("%d",&t) ==1 )
    {
        while(!pq.empty()) pq.pop();
        for(i=0 ; i<t/2 +1 ; i++)
        {
            scanf("%d",&a);
            pq.push(a);
        }
        for(   ; i<t ; i++)
        {
            scanf("%d",&a);
            pq.push(a);
            pq.pop();
        }
        if(t%2==1)
           {
                xx=pq.top();
               printf("%.1lf\n",xx);
           }
        else
        {
            xx=pq.top();
            pq.pop();
            xx+=pq.top();
            printf("%.1lf\n",xx/2);
//            printf("%d",(a+pq.top())/2);
//            if( (a+pq.top())%2==1 )
//                printf(".5\n");
//            else
//                printf(".0\n");
        }
    }
}
