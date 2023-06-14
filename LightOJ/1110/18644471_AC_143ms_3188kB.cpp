#include<bits/stdc++.h>
using namespace std;
#define ll int
#define  ret return
///*/////////////////// /// *
/*//    author-joydip007x  ///  */

#define M 101
ll dp[M][M] ,lm1,lm2,printed=0;
char s1[M],s2[M];

map<  pair<ll,ll> , string >m;
string lcs(ll i1, ll i2 )
{
   if(i1==lm1 || i2==lm2 ) ret "";
   if(dp[i1][i2]!=-1 ) ret m[ {i1,i2}  ];
    if(s1[i1]==s2[i2]){

     dp[i1][i2]=1;
     ret  m[ {i1,i2} ]= s1[i1]+lcs(i1+1,i2+1);

    }
    string h1=lcs(i1+1,i2);
    string h2=lcs(i1,i2+1);
   if(h1.size()!=h2.size() )
   {
       if(h1.size()>h2.size() )  m[ {i1,i2} ]=h1;
       else m[ {i1,i2} ]=h2;
   }
   else
   {
       if(  lexicographical_compare(h1.begin() , h1.end() , h2.begin() , h2.end() ) ) m[ {i1,i2}]=h1;
       else m[{i1,i2} ]=h2;
   }
     dp[i1][i2]=1;
    ret m[ {i1,i2} ];
}

int main()
{
    ll t,cnt;
   scanf("%d\n",&t);cnt=1;
   while(t--)
   {
       printed=0;
       scanf(" %s",&s1);
       scanf(" %s",&s2);
       lm1=strlen(s1);lm2=strlen(s2);
       memset(dp,-1,sizeof dp);
       string tmp=lcs(0,0);
       printf("Case %d: ",cnt++);
       ///if(tmp.size() cout<<" ][][ "<<tmp<<"XXX"<<endl;
       if(tmp.size() ) printf("%s",tmp.c_str() );
       else printf(":(");
       ///if(printed==0) printf(":(");
       printf("\n");
   }
}

