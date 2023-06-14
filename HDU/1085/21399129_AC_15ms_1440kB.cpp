#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

const ll sz=100+100;
ll a,b,c,x,y,z1,z2,vis[1000000];
vector<ll>v(5);
ll rec ( ll tk ) {

   vis[tk]=1;
   if(tk>=sz) return  0;
   cout<<tk<<" ";
   for(ll i=0 ; i<=2 ; i++){

        rec(  tk+ v[i]  );
   }
   return 0;
}
ll bal( ll  s) {

  ///ll aa=( (a*1)+(b*2)+(c*5) ) ;
  if(s<=a  ) return true;
  if(s%2==0 and b*2>=s) return true;
  for(int i=2; i!=-1; i--){

     if(i==0 ) {

            ///cout<<s<<" : ";
            ll mm=min(v[i], s/1 );
            if(mm*1 <=s) s-=(mm*1) ;

         ///  cout<<mm<<" "<<s<<endl;
     }
     if(i==1 ){

          ///  cout<<s<<" : ";
            ll mm=min(v[i], s/2 ) ;
            if(mm*2 <=s) s-=(mm*2) ;
          /// cout<<mm<<" "<<s<<endl;

     }
     if(i==2 ){

           ///  cout<<s<<" : ";
            ll mm=min(v[i], s/5 );
            if(mm*5<=s) s-=(mm*5) ;

          /// cout<<mm<<" "<<s<<endl;
           ///cout<<" mm "<<mm<<" * 5 ---"<<mm*5<<" "<<(ll)( s-(mm*5) )<<endl;

     }
     ///cout<<s<<endl;
  }
  if(s==0 ) return true;
 return false;
}
int main(){

  nikal_laura;
  while(1){

      cin>>a>>b>>c;
      ///memset(vis,0,sizeof vis);
      if(!a and !b and !c) return 0;
      if(!a ) { cout<<"1\n" ; continue;  }
      if(!b and a<2) { cout<<"2\n" ; continue;  }
      v.resize(3,0);
      v[0]=a ; v[1]=b; v[2]=c;
//      ///cout<<v[0] <<" "<<v[1]<<" "<<v[2]<<endl;
//
//      rec(0);
////      low= a ;
////      if(     )
     ll   tot=(5*c)+(2*b)+(1*a)+2;

      for(int i=3; i<tot+1000; i++)
      {
            if(!bal(i))  { cout<<i<<"\n";break; }
      }

  }
}
