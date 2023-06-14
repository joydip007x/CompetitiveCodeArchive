#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        long long
#define sz  120
ll n,nn;
unsigned ll ans1=0ULL;
map<string , vector<string > >m;
map<string , vector<string > >::iterator it;
ll fun( ll a)
{
    ll o =1;
    ///cout<<" : "<<a<<endl;
    for(int i=1; i<=a ; i++)
        o=o*2;
    return o;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char s1[sz] , s2[sz] ;
        string ss1,ss2;
        m.clear();
        scanf("%lld",&n);
        for(int i=0 ; i<n ; i++)
        {
            scanf("%s %s",&s1,&s2);
            ss1=s1 ; ss2=s2;
            m[ss2].push_back(ss1);
        }
        if(!n)
        {
            printf("0\n");continue;
        }
        if(m.size()==1) {
            printf("%lld\n",n);
            continue;
        }
        ans1=1ULL;
       for(it=m.begin() ; it!=m.end() ; it++)
       {

           ans1= ans1*(1+it->second.size() );
       }
        printf("%u\n",ans1-1);
    }

}

/*
2
3
hat headgear
sunglasses eyewear
turban headgear
3
mask face
sunglasses face
makeup face
*/
///author-joydip007x         ///
///Time&Date-Whenever i submit///
