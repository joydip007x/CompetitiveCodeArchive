#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

const int numCoins = 11;
int coins[] = {5,10,20,50,100,200,500,1000,2000,5000,10000};

const int SIZE = 30001;
long long possible[SIZE+10009];

int main()
{
    ///possible[0] = 1;
   ///sort(coins , coins+11);
    for (int c = 0; c < numCoins; ++c)
    {
        possible[coins[c] ]+=1;

        int end = SIZE; //- coins[c];
        for (int i = 0; i < end; ++i)
        {
            //if(icoins[c]) continue;
            ////if(i==50) cout<<end<<" pos["<<i<<"+"<<coins[c]<<"]="<<possible[i + coins[c]]<<"+"<<possible[i]<<" coin "<<coins[c]<<endl;
            possible[i + coins[c]] += possible[i];
        }
    }

    double num;

    while (scanf("%lf", &num), num>1e-9  )
    {
        long long int x=(int)(num*100+ 1e-9);
        printf("%6.2f%17lld\n", num, possible[x]);
    }
}
