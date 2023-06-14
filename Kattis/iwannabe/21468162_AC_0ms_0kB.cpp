#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

ll n,k,x,y,z;
#define pp pair< ll , ll >

vector < pp >v1,v2,v3 ;
vector < pp >::iterator it, it2,it3 ;

set<ll>s;
int main(){

  cin>>n>>k;
  for(int i=0 ; i< n ; i++){

    cin>>x>>y>>z;
     v1.pb ( { x,i } );
     v2.pb ( { y,i } );
     v3.pb ( { z,i } );
  }
  sort(v1.begin(),v1.end()  );
  sort(v2.begin(),v2.end()  );
  sort(v3.begin(),v3.end()  );
  reverse(v1.begin(),v1.end() );
  reverse(v2.begin(),v2.end() );
  reverse(v3.begin(),v3.end() );

  ll  sa=0 , sh=0 , sd=0;
//  cout<<"A ";for(auto it:v1) cout<<it.first<<","<<it.second<<"  ";cout<<endl;
//  cout<<"D ";for(auto it:v2) cout<<it.first<<","<<it.second<<"  ";cout<<endl;
//  cout<<"H ";for(auto it:v3) cout<<it.first<<","<<it.second<<"  ";cout<<endl;
  for(it=v1.begin() ; it!=v1.end() ; it++ ) {

      sa++;
      s.insert( it->second  );
      if(sa==k) break;
  }
 ///cout<<sh<<" sh  "<<sd<<" sd  "<<sa<<"  sa\n";
  for(it2=v2.begin() ; it2!=v2.end() ; it2++) {

      sh++;
      s.insert(it2->second);
      if(sh==k) break;
  }
 ////  cout<<sh<<" sh  "<<sd<<" sd  "<<sa<<"  sa\n";

  for(it3=v3.begin() ; it3!=v3.end() ; it3++) {

      sd++;
      s.insert(it3->second);
      if(sd==k) break;
  }
// cout<<sh<<" sh  "<<sd<<" sd  "<<sa<<"  sa\n";
//  for(auto it:s) cout<<it<<" ";cout<<endl;
  cout<<s.size()<<"\n";
}
