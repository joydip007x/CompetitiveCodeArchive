#include<bits/stdc++.h>
using namespace std;
typedef double ll;

double l,w;
char c;
int main()
{
    int cas=1;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %c %lf\n",&l,&c,&w);
        ll q=sqrt( (l*l)+(w*w) );
        ll r=q /2.00 ;
        ll e4= acos(( (2.00*(r*r))-(w*w) )/(2.00*r*r) );
        ll s= r*e4;
        ll a1=(400.00)/(2.00*(l+s));
        printf("Case %d: ",cas);
        printf("%0.8lf %0.8lf\n",a1*l,a1*w);
        cas++;
    }
    return 0;
}


///author-joydip007x         ///
///Time&Date-Whenever i submit//
