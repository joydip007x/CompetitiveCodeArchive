#include<bits/stdc++.h>
using namespace std ;

#define ll           int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,k,x,y,z;
#define pp pair< int , int >

vector < pair < pp, pp > >v1,v2,v3 ;

set<ll>s;
bool attk( pair < pp, pp > A, pair < pp, pp > B ){

    return A.first.first>B.first.first ;

}

bool healt( pair < pp, pp > A, pair < pp, pp > B ){

    return A.second.first>B.second.first ;

}
bool defen( pair < pp, pp > A, pair < pp, pp > B ){

    return A.first.second>B.first.second  ;

}

int main(){

   sc(n) ;sc(k);
  for(int i=0 ; i< n ; i++){

     sc(x);sc(y); sc(z);
     v1.pb ({ {x,y},{z,i}  } );
  }
  v2=v1;
  v3=v1;
  sort(v1.begin(),v1.end() , attk  );
  sort(v2.begin(),v2.end() ,healt );
  sort(v3.begin(),v3.end() , defen );
 ll  sa=0 , sh=0 , sd=0;
  for(auto it :v1) {

      if(sa==k) break;
      sa++;
      s.insert(it.second.second);
  }
  for(auto it :v2) {

      if(sh==k) break;
      sh++;
      s.insert(it.second.second);

  }for(auto it :v3) {

      if(sd==k) break;
      sd++;
      s.insert(it.second.second);
  }
  cout<<s.size()<<"\n";
}
