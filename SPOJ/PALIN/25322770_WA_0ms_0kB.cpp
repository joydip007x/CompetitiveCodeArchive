#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;

#define D ll
ll n,x,t,c;
string s;
vector<D>v;

ll fun(ll i,ll j){
    
    if( (i==n/2 || j==n/2) )return (s[i]==s[j]);
	return ( (s[i]==s[j] )&&fun(i+1,j-1)  );
}
string pali(ll a, ll b){

     string g=s;
     x=s.size()/2; 
     for(int i=a,j=b; i>=0 ; i--,j++){

            if(s[i]!=s[j]){

            	 if(s[i]>s[j]) s[i]=s[j]=max(s[i],s[j]);
            	 else s[i]=s[j]=min(s[i],s[j]);
            }
     }
     bool  f=lexicographical_compare(begin(g), end(g), begin(s), end(s));
     if(!f){ 

         x=s.size()/2; 
   
        if(n&1){ 

        	if(s[x]!='9'){s[x]=s[x]+1; return s; } 
        	else{

        		ll k=0;
        		for(int i=x; i>=0 && !k; i--){

        			   if(s[i]=='9') s[i]='0';
        			   else {
        			   	          k=1;
        			   	          s[i]=s[i]+1;
        			   }
        		}        		
        		for(int i=x+1; i<s.size(); i++) s[i]='0';
        	 if(!k){	reverse(begin(s), end(s));
        	        		s.pb('1'); reverse(begin(s), end(s));}  }

        	//// cout<<" iere "<<s<<endl;
        	 	   x=s.size()/2; n=s.size();
        	   if(n&1) s=pali(x,x);
               else s=pali(x-1,x);
        	return s;
        }
        else{ 

        	if(s[x]!='9'){s[x]=s[x-1]=(s[x]+1); return s; } 
			else{

        		ll k=0;
        		for(int i=x; i>=0 && !k; i--){

        			   if(s[i]=='9') s[i]='0';
        			   else {
        			   	          k=1;
        			   	          s[i]=s[i]+1;
        			   }
        		}        		for(int i=x+1; i<s.size(); i++) s[i]='0';

        	 if(!k){	reverse(begin(s), end(s));
        	        		s.pb('1'); reverse(begin(s), end(s));}  }

        	  x=s.size()/2; n=s.size();
        	   if(n&1) s=pali(x,x);
               else s=pali(x-1,x); return s;

        }
     }
     return s;
}
int main()
{
	
  // freopen("input.txt", "r+", stdin);
  // freopen("output.txt", "w+", stdout);

  ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
  cin>>t;
  while(t--){
       
          cin>>s;
          n=s.size();
          x=n/2;
          if(fun(0,n-1)==1){
              
          	  if(n&1) {

          	  	if(s[x]!='9')s[x]=s[x]+1;
          	    else{

        		ll k=0;
        		for(int i=x; i>=0 && !k; i--){

        			   if(s[i]=='9') s[i]='0';
        			   else {
        			   	          k=1;
        			   	          s[i]=s[i]+1;
        			   }
        		}
        		for(int i=x+1; i<s.size(); i++) s[i]='0';
        	    if(!k){	reverse(begin(s), end(s));
        	        		s.pb('1'); reverse(begin(s), end(s));}  

               x=s.size()/2; n=s.size();
        	   if(n&1) s=pali(x,x);
               else s=pali(x-1,x);
        	   }
 
          	  }
          	  else {


          	  if(s[x]!='9'){s[x]=s[x-1]=(s[x]+1);  } 
			  else{

        		ll k=0;
        		for(int i=x; i>=0 && !k; i--){

        			   if(s[i]=='9') s[i]='0';
        			   else {
        			   	          k=1;
        			   	          s[i]=s[i]+1;
        			   }
        		}
        		        		for(int i=x+1; i<s.size(); i++) s[i]='0';

        	 if(!k){reverse(begin(s), end(s));s.pb('1'); reverse(begin(s), end(s));}  }
        ///	  cout<<" so << "<<s<<endl;


        	   x=s.size()/2; n=s.size();
        	   if(n&1) s=pali(x,x);
               else s=pali(x-1,x);

          	 }
          	  cout<<s<<endl; continue;
          }
          if(n&1) s=pali(x,x);
          else s=pali(x-1,x);
          cout<<s<<endl;

     
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///