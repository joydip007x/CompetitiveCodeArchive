#include<bits/stdc++.h>
using namespace std ;

#define ll           long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

ll n,k,x,y,z;
#define pp pair< ll , ll >

vector < pair < pp, pp > >v1,v2,v3 ;
vector < pair < pp, pp > >::iterator it, it2,it3 ;

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
     v2.pb ({ {x,y},{z,i}  } );
     v3.pb ({ {x,y},{z,i}  } );
  }
  sort(v1.begin(),v1.end() , attk  );
  sort(v2.begin(),v2.end() ,healt );
  sort(v3.begin(),v3.end() , defen );
 ll  sa=0 , sh=0 , sd=0;
  for(it=v1.begin() ; it!=v1.end() ; it++ ) {

      if(sa==k) break;
      sa++;

      s.insert( it->second.second  );
  }
  for(it2=v2.begin() ; it2!=v2.end() ; it2++) {

      if(sh==k) break;
      sh++;
      s.insert(it->second.second);

  }for(it3=v3.begin() ; it3!=v3.end() ; it3++) {

      if(sd==k) break;
      sd++;
      s.insert(it->second.second);
  }
  printf("%lld\n",s.size()*1LL);
}
