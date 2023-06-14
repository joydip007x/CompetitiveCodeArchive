#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll a[100000+20],n;
ll balof2(ll x){

   if(x==1) return 2;
   if(x==2) return 1;
   return 1;
}
ll balof( ll x , ll y){

  if(x==-1 || y==-1){

     if(y==-1) swap(x,y);
     return balof2(y);
  }
  if( (x==1 && y==2) || (y==1 && x==2 ) ){
      return 3;
  }
  if(x!=1 && y!=1) return 1;
  if(x!=2 && y!=2) return 2;

}
void printsol(){

    cout<<"YES\n";
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return;
}

int main(){

    ll t;
    cin>>t;
    while(t--){

        ll k,start,f=0 , prob=0 , cnt=0, jk=0;
        cin>>n>>k;
        memset(a,-1,sizeof a);
        start=-1;
        for(int i=0 ; i< n; i++){
             cin>>a[i];
             if(i && a[i-1]==a[i] && a[i-1]!=-1 ) { a[i]=-1; prob=1;}
             if(!f && a[i]!=-1) start=i;
             if(a[i]==-1) cnt++;
        }
        if(prob==0 && cnt==0){   printsol();continue;     }
        if( cnt==n ){

          cout<<"YES\n";
          for(int i=0; i<n; i++)
                 (i%2==0) ? cout<<1<<" ":cout<<2<<" ";
          cout<<"\n";
          continue;
        }
        if(n==1){
            if(a[0]==-1) a[0]=1;
            printsol();continue;
        }
        if(k==2){
             for(int i=start-1 ; i>=0 ; i--){
                  if(a[i]!=-1) continue;
                  if(a[i+1]==1) a[i]=2;
                  else a[i]=1;
             }
             for(int i=start+1; i+1<n && f==0 ; i++){
                if(a[i]!=-1) continue;
                 if(a[i-1]==1 ){
                    if(a[i+1]==2) { f=1; break;}
                        a[i]=2;
                }
              else if(a[i-1]==2 ){
                    if(a[i+1]==1) { f=1; break;}
                    a[i]=1;
              }
             }
             if(f || a[n-1]==a[n-2]) { cout<<"NO\n"; continue;}
             if(a[n-2]==1)a[n-1]=2;
             else a[n-1]=1;
             printsol();
             continue;
        }
    }

}
