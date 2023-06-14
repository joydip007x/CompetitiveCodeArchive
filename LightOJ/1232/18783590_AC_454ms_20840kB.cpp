#include<bits/stdc++.h>
using namespace std;
int n , money ,coin[125];
long long botomup[125][19205];
#define MOD 100000007
int main()
{
    int t,test=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&money);
        for(int i=1 ; i<=n ; i++)
        {
            scanf("%d",&coin[i]);
        }
        memset(botomup,0,sizeof(botomup));
        for(int i=0;i<=n;i++)
        {
            botomup[i][0]=1;
        }
        for(int i=1 ; i<=n ; i++){

            for(int j=1 ; j<=money ; j++)
            {
                if(j>=coin[i])
                {
                    botomup[i][j]=(botomup[i-1][j]+botomup[i][j-coin[i]])%100000007;
                }
                else
                {
                    botomup[i][j]=(botomup[i-1][j])%100000007;
                }
            }
        }
        printf("Case %d: %lld\n",test++,(botomup[n][money])%100000007);
    }
    return 0;
}
/*
2
3 5
1 2 5
4 20
1 2 3 4
*/
