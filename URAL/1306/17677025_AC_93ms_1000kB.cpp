///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<stdio.h>
#include<queue>
using namespace std;
#define  loop(i,L,U)        for( int i=(int)L;i<U;i++)
#define  loopeq(i,L,U)    for( int i=(int)L;i<=U;i++)
#define ll int
int main()
{

    int t,a,i;
    priority_queue<ll>pq;
    scanf("%d",&t);
    for(i=0 ; i<t ; i++)
    {
        scanf("%d",&a);
        pq.push(a);
        if(i>t/2) pq.pop();
    }
    if(t%2)
    {
        double xx=pq.top();
        printf("%.1lf\n",xx);
    }
    else
    {
            double xx=pq.top(); pq.pop();
            printf("%.1lf\n",(xx+pq.top())/2);
    }
}
