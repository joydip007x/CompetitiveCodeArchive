#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        int
#define mod 1000003

int t, lef,righ,forwar, bgn,en,rec;
char str[ 2000 ];
string s;
vector<string>vs;

void calc(){

    lef=righ=forwar=bgn=rec=0;t--;

    for(int i=0 ; i<vs.size() ; i++)
    {
        //cout<<vs[i]<<" "<<" : ";cout<<endl;
        if(vs[i]=="repeat") { rec=1;   }
        if(!rec){
            if(isdigit(vs[i][0]))
            {
                int yy=stoi(vs[i],NULL,10);
                yy=yy%mod;
                if(vs[i-1]=="forward") forwar+=yy,forwar%=mod;
                if(vs[i-1]=="left") lef+=yy,lef%=mod;
                if(vs[i-1]=="right") righ+=yy,righ%=mod;
               /// cout<<"NO ONE ";
            }
            continue;
        }
       int j,yy=1,overall=1;
       for(int j=i+1 ; j<vs.size() ; j++)
       {
           if(vs[j]=="repeat" || vs[j]=="[" || vs[j]=="]") { continue ;}
           if( vs[j]=="forward" || vs[j]=="left" || vs[j]=="right"  ) {

             yy=stoi(vs[j+1],nullptr,10);
             yy%=mod;
            /// cout<<" calc "<<vs[j+1]<<" V:  yy - "<<yy<<endl;
             overall=( (overall%mod)*(yy%mod) )%mod;
            if(vs[j]=="forward") forwar+=overall,forwar%=mod;
            if(vs[j]=="left") lef+=overall,lef%=mod;
            if(vs[j]=="right") righ+=overall,righ%=mod;
            i=j+1;
            rec=0;
            break;
           }
          yy=( stoi(vs[j] ,nullptr,10 )  );
          overall= ( (overall%mod)*(yy%mod) )%mod;
         //cout<<" call stoi "<<vs[j]<<" :v  "<<overall<<" :v \n";
       }

    }
    printf("%d %d %d\n",lef,righ,forwar);
    vs.clear();
    en=bgn=0;
}
void process(string x)
{
    stringstream ss(x); string tmp;
    while(ss>>tmp)
    {
        vs.pb(tmp);
        if(tmp=="begin") bgn=1;
        if( bgn and tmp=="end") {  calc(); }
    }
    return ;
}
int main()
{
   scanf("%d",&t);
   getchar();
   while(1)
    {
        if(!t) break;
        fgets(str,2000,stdin);
        s=str;
        process(s);
    }

}


/*
2
begin
left 90
right 90
forward 10
repeat 10 [ left 10 ]
end

*/


///author-joydip007x         ///
///Time&Date-Whenever i submit///
