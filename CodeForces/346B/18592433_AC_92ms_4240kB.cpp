///////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;

#define  loop(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  loopeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
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

#define  sz                       100009
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%d",&c);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)
#define TEST_CASE(t)      for(ll int z=1;z<=t;z++)

#define  fs                       first
#define  sc                      second
#define  pi                         acos(-1.0)
#define  eps                     1e-9
#define  inf                     0x7fffffff

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                       int
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///

#define MOD 100000007
#define sz2 101
#define sz3 999999

string s1,s2,s3,s4;
ll dp[sz2][sz2][sz2],lmt,sdp[sz2][sz2];
map<string,ll>m;
vector<string>sv;
ll gen(  string xz )
{
   for(ll i=0;  i<=s3.size() ; i++) sv.pb(s3.substr( 0,i));///generate all possible substr of virus;
   for(auto ix:sv)
   {
       string s=ix;
        for(ll k='A' ; k<='Z'; k ++)  ///push one char ,see how many matchs now
        {
            s.pb(k);
            for(ll j=0; j<s.size(); j++)  ///see the max match by trying to start match from all positon;
            {
                ll jj=0,cnt=0; bool br=0;
                for(ll i=0; i+j<s.size() and jj<s3.size() ; i++)
                {
                    if( s[i+j]==s3[jj] )  jj++, cnt++;
                    else
                    { br=1;  break; }
                }
                if(!br )  sdp[s.size()-1][ (int)s.back() ]=max(cnt,sdp[s.size()-1][ (int)s.back() ] );
            }
            if(sdp[s.size()-1][ (int)s.back() ]  ==-1)
                                 sdp[s.size()-1][ (int)s.back() ]=0;
            s.pop_back();
        }
   }
   ret 1;
}
bool printed=0;
ll lcs(ll i, ll j , ll mi )
{
    if(mi==s3.size()) ret INT_MIN;
    if(i==s1.size() || j==s2.size() ) ret 0;
    if(dp[i][j][mi]!=-1) ret dp[i][j][mi];
    ll x,y,z;
    x=y=z=INT_MIN;
    if(s1[i]==s2[j]) x=1+lcs(i+1,j+1,sdp[mi][(int)s1[i]] );
    y=lcs(i+1,j,mi  );
    z=lcs(i,j+1,mi  );
    ret dp[i][j][mi]=max({x,y,z});
}
void print(ll i,ll j, ll mi)
{
    if(i==s1.size() || j==s2.size() ) { ret ;}
    ll re=lcs(i,j,mi);
    if(s1[i]==s2[j] and re==1+lcs(i+1,j+1, sdp[mi][(int)s1[i]]) )
    {
        cout<<s1[i];
        print(i+1,j+1, sdp[mi][(int)s1[i]] );
        return;
    }
    if(  re==lcs(i+1,j,mi)  ) { print( i+1 , j ,mi);   ret; }
    else print(i,j+1, mi );
    ret;

}
int main()
{
    fast;
    memset(dp,-1,sizeof dp);
    memset(sdp,-1,sizeof sdp);
    cin>>s1>>s2>>s3;
    s4 = s3;
    gen(s4);
    ll ans=lcs(0,0,0);
    if(!ans ) ret cout<<"0",0;
    ///cout<<"XYZ ="<<ans<<endl;
    print(0,0,0);

}
/*
AJKEQSLOBSROFGZ
OVGURWZLWVLUXTH
OZ
QNHRPFYMAAPJDUHBAEXNEEZSTMYHVGQPYKNMVKMBVSVLIYGUVMJHEFLJEPIWFHSLISTGOKRXNMSCXYKMAXBPKCOCNTIRPCUEPHXM
RRFCZUGFDRKKMQTOETNELXMEWGOCDHFKIXOPVHHEWTCDNXVFKFKTKNWKEIKTCMHMHDNCLLVQSGKHBCDDYVVVQIRPZEOPUGQUGRHH
R

ABABABB
ABABABB
ABABB

*/
