#include<bits/stdc++.h>
using namespace std;
#define ll int
#define  ret return
///*/////////////////// /// *
/*//    author-joydip007x  ///  */
#define M 9999
ll dp[M][M] ,n,lmt,t;
vector<ll>v;
char s[5];
ll lds(ll last,ll cur)
{
    if(last==lmt || cur>lmt) ret 0;
    if(dp[last][cur]!=-1 ) ret dp[last][cur];
    if(  v[last]<v[cur] ) dp[last][cur]=1+lds( cur,cur+1 );
    ret dp[last][cur]=max( dp[last][cur] , lds(last ,cur+1));
}

void lisprin(ll last, ll cur)
{
    if(last==lmt || cur>lmt) ret;
    ll rr=lds(last,cur);
    if(rr==1+ lds(cur,cur+1) )
    {
        cout<<v[cur]<<endl;
        lisprin(cur,cur+1);
        ret;
    }
    lisprin(last,cur+1);
    ret;

}
int main()
{

   scanf("%d\n\n",&n);
   v.push_back(INT_MIN);
    while(n--){

        while(  gets(s) ){
           //// cout<<" got "<<s<<"X"<<endl;
            if(strlen(s)==0 || s[0]=='\n')
            {
                memset(dp,-1,sizeof dp);
                ////cout<<"LIS- ";for(auto it:v)cout<<it<<" ";cout<<endl;
                lmt=v.size()-1;
                printf("Max hits: %d\n",lds(0,1));
                lisprin(0,1);
                 break;
            }
            v.push_back(s[0]-48);

        }
         v.clear();
         v.push_back(INT_MIN);
         if(!n) break;
         getchar();
    }




}
/*
2

1
2
3

2
3
4

*/
