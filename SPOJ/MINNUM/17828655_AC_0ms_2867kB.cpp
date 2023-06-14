///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

#define  loop(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  loopeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  preflag               long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define ll                        long long
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

#define z 48
string s,out;
ll so=0LL;

void additionstring( string a , ll b)
{
    ////cout<<" came here " <<endl;
    ll cari=1,tmp=0;
    string out2;
    for(ll i=a.size()-1 ; i!=-1; i--)
    {
        cari=cari+ ( a[i]-z);
        out2.pb( (cari%10)+z  );
        cari=cari/10;
    }
    if(cari) cout<<"1";// rather than REVERSE(out2) . pushback(1) ,  REVERSE Again , why not print "1" in front if  required (99+1=100) required for this typo case ;
    for(ll i=out2.size() -1 ; i!=-1 ; i--) cout<<out2[i];
    cout<<"\n";
}
ll divide(string ss, ll a)
{
    ll cur=0, zer=0,start=0,enterJ=0;
    string ans,cc;
    for(ll i=0; i!=ss.size() and !enterJ ; i++)//// !!enter J is added cz there is a inner loop for purpose and once the in_loop is finished our job is done 
    {                                            ///so exit the outer loop to 
       if(cur<a)cur=(cur*10) + (ss[i]-z);///when cur<9 just add em up 
       else
       {
           for(ll j=i ; j<ss.size() ; j++)///clearly this is done means traverseing i should be stop,so enterJ=1;
           {
            out.pb( (cur/a)+z );
           cur=cur%a;
           cur=(cur*10)+( ss[j]-z );
           }
            enterJ=1;
       }

    }
    out.pb( (cur/a)+z );
    cur=cur%a;
    if(!cur ) ret cout<<out<<"\n",0;
    else additionstring(out,1); ///write a function for 82/9==9.1111 === 10 (ans) . means add 1 with ans for ceiling val
    ret 0;
}
int main()
{
     while( cin>>s and s!="-1")
     {
         out.clear();
         if(s=="0") { cout<<"0\n"; continue ; }///s=0 means you dont have any number 
         if( s=="1" || s=="2" || s=="3" || s=="4" || s=="5" || s=="6" || s=="7" || s=="8" || s=="9") //just my ability to do greedy everywhere 
         {  cout<<"1\n"; continue;   }
         divide(s,9LL);
     }
}
