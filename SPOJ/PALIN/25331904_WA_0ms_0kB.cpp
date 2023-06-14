#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,t;
vector<ll>v ;
string s,s2;

ll ok(string s2, string s){

    ll cnt=0,f=1, all9=0;
    for(int i=0; i<s2.size() && f==1 ; i++){
         
         if(s2[i]=='9') all9++;
    	 if(s2[i]>s[i]){ f=0; break;}
    	 else if( s2[i]<s[i]){  f=2; break; }
    	 else cnt++;
    }
    if(all9==s.size() )return 2;
    if(cnt==s.size() ) return -1;
    if(f==0) return 1;
    else return 0;
}
string  pali( string g){

	 n=g.size();
	 x=n/2;
	 for(int i=x+1,j=2; i<g.size(); i++,j+=2)g[i]=g[i-j-(n%2==0)];
	 return g;
}
string findSum(string str1, string str2) 
{ 
if (str1.length() > str2.length())swap(str1, str2); 
string str = ""; 
int n1 = str1.length(), n2 = str2.length(); 
reverse(str1.begin(), str1.end()); 
reverse(str2.begin(), str2.end()); 
 int carry = 0; 
 for (int i=0; i<n1; i++) 
 { 
int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
str.push_back(sum%10 + '0'); 
carry = sum/10; 
 } 
for (int i=n1; i<n2; i++) 
 { 
int sum = ((str2[i]-'0')+carry); 
str.push_back(sum%10 + '0'); 
carry = sum/10; 
 } 
if (carry) 
str.push_back(carry+'0'); 
reverse(str.begin(), str.end());  return str; 
} 

ll fun(ll i,ll j,string s){
    
    if( (i==n/2 || j==n/2) )return (s[i]==s[j]);
	return ( (s[i]==s[j] )&&fun(i+1,j-1,s)  );
}
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

        //ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    
    cin>>t;
    while(t--) {
     
         cin>>s;
         if(s.size()==1 && s[0]=='9'){ cout<<"11\n"; continue;}
         if(s.size()==1){cout<<char(s[0]+1)<<endl; continue;}
         if(s.size()==2){
                 
                 int o=stoi(s),m=0;string y;
                 while( !m){

                     o++;
                     y=to_string(o);
                     if(y.size()%2)m=fun(y.size()/2, y.size()/2,y);
                     else m=fun((y.size()/2)-1, y.size()/2,y);
                 }
                 cout<<y<<endl;
                 continue;

         }
         string s2=pali(s);
         ll g=ok(s2,s);
         if(g==1){cout<<s2<<endl;continue;}
         else if( g==2 ){
                
                string s4="1";
         	    s2=findSum(s2,s4);
         	    //cout<<" SUM of "<<s2<<" "<<s4<<endl;
         	    s2=pali(s2);
         	  ///  cout<<s2.size()<<" : ";
         	    cout<<s2<<endl;continue;
         }
         else if(s2[x]!='9'){

         	  if(n&1)s2[x]=s2[x]+1; 
         	  else s2[x]=s2[x-1]=s2[x]+1;
         	  cout<<s2<<endl; continue;
         }
         else{
              
              string s3="1";
         	  for(int i=x+1; i<s.size();i++){s2[i]='0'; s3.pb('0');}
         	  s2=findSum(s2,s3);
         	  s2=pali(s2);
         	  cout<<s2<<endl;
         }


          


    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///