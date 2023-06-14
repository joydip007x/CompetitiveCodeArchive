#include <bits/stdc++.h>
#define ll int
#define mx 1000000

using namespace std;
ll a,b,c;

int main()
{
    int  t;
	scanf("%d",&t);
	int kkk=0;
	for(int k=0 ; k<t ; k++){
        char s[600];
        map<ll,ll>m;
        if(kkk) printf("\n");
        scanf("%s",&s);
        kkk=0;
        for(int i=0 ; i<strlen(s);i++)
        {
            m[s[i]]++;
        }
        int mn=9999;
        for(auto it:m)
        {
            mn=min(mn,it.second);
        }
        printf("%d\n",strlen(s)/mn);
        kkk=1;
	}
}
