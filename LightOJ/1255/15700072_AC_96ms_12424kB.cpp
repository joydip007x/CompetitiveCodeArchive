#include<bits/stdc++.h>
#include<cstring>
#define ll long long
using namespace std;
char pat[1100000];
char mainx[1100000];
ll  fail[1100000];
ll x,y,j,k,countx,i;
void failure(  char *pat);
ll  kmp(char *s , char *pat);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll p,mn=0;cin>>p;
    while(p--)
    {   countx=0;
        cin>>mainx;
        cin>>pat;
        cout<<"Case "<<++mn<<": "<<kmp(  mainx , pat )<<endl;;
    }
}
void failure (char *pat)
{
   const ll x=strlen(pat);
    i=0,j=-1; fail[0]=-1;
    while(i<x)
    {
        while(j>=0 && pat[i]!=pat[j]) {  j=fail[j];  }
        i++;j++;
        fail[i]=j;
    }
}
ll  kmp(char* s, char* pat)
{
    failure(pat);
  const  ll panlen=strlen(pat);
  const  ll mlen=strlen(s);
    i=j=0;countx=0;
    while(i<mlen)
    {
        while(j>=0 && s[i]!=pat[j]){j=fail[j];}
        i++;
        j++;
        if(j==panlen)
        {
            countx++;  j=fail[j];
        }
    }
    return countx;
}








