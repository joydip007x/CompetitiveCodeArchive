/// Never Give UP ///
/*                                  *
 *    author-joydip007x             *
 *            *                     *
 *    its_simple_i_win              *
 *                                  */
///*	 Never tired :)	:V	*///
///     Date^>XX/08/2018		*///

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define LOOP(i,L,U) for(long long int i=(long long int)L;i<U;i++)
#define LOOPeq(i,L,U) for(long long int i=(long long int)L;i<=U;i++)
#define preflag long long int flag=0,i=0,j,k=-1,l,n,m;

#define pb push_back
#define pii pair<int , int >
#define msi map< long long int,string>
#define vi vector<int >

#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define i(c) cin>>c
#define until0(c) while(c--)

#define notrue false
#define ifnot else
#define eee printf("\n")

long long int arr[1000000],res[1000000],n,m,k,j,temp;
long double z=0;

using namespace std;
int  main( )
{
    memset(arr,0,1000000*sizeof(arr[0]));
    memset(res,0,1000000*sizeof(res[0]));
    cin>>n>>m;
    k=-1;
    LOOP(i,0,n){cin>>arr[++k];}
    j=-1;
    LOOP(i,1,n)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    LOOP(i,0,n)
    {
        z=(arr[i]/m) ;
        if(z==0 || z>0 ) {res[++j]=z;   }
        else ++j;
    }
    cout<<res[0]<<" ";
    LOOP(i,1,n)
    {
//        if(res[i]==0 || res[i]==1)
//        {cout<<res[i]<<" ";}
///        else
            {cout<<res[i]-res[i-1]<<" ";}
    }
}
