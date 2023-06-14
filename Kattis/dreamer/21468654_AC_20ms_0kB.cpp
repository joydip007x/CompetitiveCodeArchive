#include<bits/stdc++.h>
using namespace std ;

#define ll           int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll t ;
char day[6],mon[6],year[6] ;
string s,saveit;
ll cfd,cfm,cfy;
vector<string > v;
vector<string > v2;
vector<string > ::iterator it;
ll leap( ll a, ll b, ll c){

    if(b!=2) return 1;
    if(  (c%400==0) || ( c%4==0  && c%100!=0  ) ){

        if(a<=29 && a>=1 ) return 1;
        return -1;
    }
    if(a<=28 && a>=1 ) return 1;
    return -1;
}
bool monthchk( ll day, ll a, ll c){

    if(a==2) return true;

   if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12 ) {

        if(day<=31 && day>=1  ) return true;
        return false;

   }
   else if( a==4 || a==6 || a==9 || a==11 ) {

       if(day<=30  && day>=1 ) return true;
        return false;
   }
   return false;
}
ll savmx ( ll a, ll b, ll c, string ss){

     if( saveit=="-1" ){

          saveit=ss;
          cfd=a; cfm=b; cfy=c;
          return  1;
     }
     else{

        if( c<=cfy ){

            if(c<cfy) {
                cfy=c; cfm=b; cfd=a;
                saveit=ss; return 1;
            }
            else {

                if( b<=cfm) {

                    if(b<cfm) {
                         cfy=c; cfm=b; cfd=a;
                         saveit=ss; return 1;
                    }
                    else{
                       if(a<=cfd){

                          if(a<cfd){
                              cfy=c; cfm=b; cfd=a;
                              saveit=ss; return 1;
                          }
                          else return 1;

                       }
                    }
                }
            }


        }
         return 1;
     }
     return 1;
}
bool valid (string s){

     ll d=0 , m=0 , y=0 ;
     for(int i=0 ; i<s.size() ; i++){
          if(i<=1) d=(d*10)+ (s[i]-'0');
          else if ( i<=3) m=(m*10)+ (s[i]-'0');
          else y=(y*10) + ( s[i]-'0');
     }
     if( d>31 || m>12 || d==0 || m==0 ) return false;
     ll f=leap(d,m,y);
     if(f==-1) return false;
     if(  !monthchk( d,m,y)) return false;
     if( y<2000   ) return false ;
     savmx(  d,m,y,s ) ;
     return true ;
}
//bool cmp(   const string a ,const  string b){
//
//     if(a==b) return true;
//     if(!a.size() || !b.size()  ) return 1;
//     //cout<<a<<"          "<<b;
//     ll da=0 ,  ma=0 , ya=0 ;
//     for(int i=0 ; i<a.size() ; i++){
//
//          if(i<=1) da=(da*10)+ (a[i]-'0');
//          else if ( i<=3) ma=(ma*10)+ (a[i]-'0');
//          else ya=(ya*10) + ( a[i]-'0');
//     }
//     ll db=0 , mb=0 , yb=0 ;
//     for(int i=0 ; i<b.size() ; i++){
//          if(i<=1) db=(db*10)+ (b[i]-'0');
//          else if ( i<=3) mb=(mb*10)+ (b[i]-'0');
//          else yb=(yb*10) + ( b[i]-'0');
//     }
////    cout<<"da= "<<da<<" ma "<<ma<<" "<<ya<<"  db= "<<db<<" mb "<<mb<<" "<<yb<< "  ";
//     if( ya<yb ) return true;
//     if( ma<mb ) return true;
//    return  (da<db) ;
//    cout<<"da= "<<da<<" ma "<<ma<<" "<<ya<<"  db= "<<db<<" mb "<<mb<<" "<<yb<< "  ";
//
//     return true;
//}
int main(){

      sc(t);
      while(t--){

          s.clear(); v.clear(); v2.clear(); saveit.clear();
          saveit="-1";
          cfd=cfm=cfy=00;
          scanf("%s %s %s",&day,&mon,&year);
          s=s+day+mon+year;
          sort(s.begin(),s.end());
          v.pb(s);
          while(next_permutation(s.begin() , s.end() )) {
             v.pb(s);
          }
          for(it=v.begin() ; it!=v.end() ; it++) {
             if(valid(*it))
                   v2.pb(*it);
          }
         if(v2.size()==0){

            printf("0\n");continue;
         }

         string ans=saveit,dd,mm,yy;
         dd.clear();mm.clear(); yy.clear();
          for(int i=0 ; i<ans.size() ; i++){
          if(i<=1)  dd.pb(ans[i]);
          else if ( i<=3)  mm.pb(ans[i]);
          else  yy.pb(ans[i] ) ;
        }
         cout<<v2.size()<<" ";
         printf("%s %s %s\n",dd.c_str() , mm.c_str() ,yy.c_str()  );

      }

}

