#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;

int main(){


    sc(t);
    for(int cas=1 ; cas<= t ; cas++) {


           sc( n) ;
           double res=0.00;
        for(int i =0 ; i < n ; i++){

             res+= (double)( ( 1.00*n )/( 1.00*i +1 ) ) ;
        }
        printf("Case %d: %f\n",cas,res);
    }

}
///https://sakibreza7.blogspot.com/2018/12/blog-post.html
///www.shafaetsplanet.com/?p=3060
///https://www.codechef.com/wiki/tutorial-expectation
///http://www.programmersought.com/article/1173896823/
/// https://ibb.co/SyKqW54 [ ovimollick vai ] 