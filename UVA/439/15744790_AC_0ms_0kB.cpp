#include<bits/stdc++.h>

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define notrue false;
using namespace std;

ll mvx[ ]={-2 , -2 , -1, 1 , +2 , 2 , 1 , -1};
ll mvy[ ]={1 , -1 , 2 , 2 , +1 , -1 , -2 , -2};
vector < ll >board [8];
vector <bool >vis[8];
vector <ll >dis[8];
bool valid(ll nxx , ll nxy)
{
    if(nxy>=0 && nxy<=7 && nxx>=0 && nxx<=7 ) {return true;}
    else return notrue;
}
void bfs (ll s1 , ll s2)
{
 ///  cout<<" got value  = "<<s1 <<" "<<s2<<endl;
    queue<ll >Q;
    Q.push(s1);Q.push(s2);
    vis[s1][s2]=true;
    dis[s1][s2]=0;
    while (!Q.empty())
    {
        ll topx=Q.front();Q.pop();
        ll topy=Q.front();Q.pop();
        for(ll ka=0 ; ka<8;ka++)
        {
            ll nxx=topx+mvx[ka];
            ll nxy=topy+mvy[ka];
            if (   valid ( nxx  , nxy )  ==true  && vis[nxx][nxy]==false   )
            {
                vis[nxx][nxy]=true;
                dis[nxx][nxy]=dis[topx][topy]+1;
                Q.push(nxx);
                Q.push(nxy);
            }
        }
    }
}
int main()
{
   /// fast;
    char s,t;
    int p,q;
    char a[2], b[2];
   ///while(bool( cin>>s>>p>>t>>q)==true )
   ///while(  scanf("%c %d  %c%d", &s, &p, &t ,&q) !=EOF  )
   while (cin>>a>>b)
   {
       //cout<<a<<b;
       /////this is modified faltu only for output ////////
      char    ans1=a[0];  char ans2=a[1];                            ///////
        char  wans=b[0]; char wans2=b[1];                         ///////
       //////////////////////////////////////////////
        ll sx=int (a[0]-'a');
        ll sy=int (b[0]-'a');
        p=a[1]-49;
        q=b[1]-49;

        ///cout<<sx<<" "<<p<<" :  :  :"<<sy<<" "<<q<<endl;
        for(ll oop=0 ; oop<8 ; oop++)
        {
            board[oop].resize(8,0);
            dis[oop].resize(8,0);
            vis[oop].resize(8,false);

        }
    //    cout<<sx<<p<<" "<<sy<<q<<endl;;

     //  cout<<s<<p<<" "<<t<<q;
        bfs ( sx ,p);
    //bfs (0 ,0 );
        ///To get from e2 to e4 takes 2 knight moves.
       ///printf("To get from %lld%lld to %lld%lld takes %lld knight moves\n",sx,p,sy,q,dis[sy][q]);
      printf("To get from %c%c to %c%c takes %lld knight moves.\n",ans1,ans2,wans,wans2,dis[sy][q]);
       for(int i=0 ; i<8 ; i++)
        {
            board[i].clear();
            dis[i].clear();
            vis[i].clear();
        }

    // cout<<dis[7][7];
    ///cout<<sx<<p<<"  "<<sy<<q;
   }
}
