///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<bits/stdc++.h>
using namespace std;
#define ll                        long long

char ss[400];
void sdivide(string a  , ll b)
{
    ll ans=0;
    for(int i=0 ; i<a.size() ; i++ )
    {
        int gg=a[i]-'0';
        ans=(ans*2)+ gg;
        ans=ans%b;
    }
    ans=(ans+b)%b;
    if(ans==0)printf("YES\n");
    else printf("NO\n");
}
int main()
{
    ll t; ll b=131071;
  ///  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    string s;
    while(scanf("%s",&ss)!=EOF ){
        for(int i=0 ; i<strlen(ss); i++)
        {
            if(ss[i]=='#') {
                sdivide(s,b);
                s.clear();
                break;
            }
            s.push_back(ss[i]);
        }
    }
}

