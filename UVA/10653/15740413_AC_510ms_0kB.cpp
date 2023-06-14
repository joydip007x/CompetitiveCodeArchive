#include<bits/stdc++.h>
using namespace std;
#define pii pair< long long int , long long int >
#define   ll  long long
#define sz 100000
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
///#define valid(nx,ny)
ll movx[ ]= { 1, -1, 0,0};
ll movy[ ]= {  0, 0, 1, -1};
ll m,n;
vector <ll > cell[sz], d[sz],vis[sz];
void  bfs ( ll startx, ll starty );
bool validx( ll nx, ll ny)
{
    if ( nx>=0 && nx<m && ny>=0 && ny<n && cell[nx][ny]!=-1)
        return true;
    else
        return false;
}

int main ()
{
    fast;
    while(1)
    {
        cin>>m>>n;
        if(m==0 && n==0)
        {
            break;
        }

        for(int pox=0 ; pox<m ; pox++)
        {
            cell[pox].resize(n,0);
            d[pox].resize(n,0);
            vis[pox].resize(n,0);
        }

        ll  xb ;
        cin>>xb;
        while(xb--)
        {
            /// ll rloc; cin>>rloc;
            ll rw, dtn;///dtn=data number
            cin>>rw>>dtn;
            for(ll vb=0; vb<dtn; vb++)
            {
                ll ch;
                cin>>ch;
                /// cell[rw][ch]=-1;
                vis[rw][ch]=1;
            }
        }
        ll str,stc,ends, endnd;
        cin>>str>>stc>>ends>>endnd;
        bfs (  str, stc  );

    ////    cout<<"::::::::::::::::::";
        cout<<d[ends][endnd]<<endl;
        for(int i=0 ; i<m ; i++)
        {
            cell[i].clear();
            d[i].clear();
            vis[i].clear();
        }
//        for(int pox=0 ; pox<m ; pox++)
//       {
//            d[pox].resize(n,0);
//       }
    }
}
void  bfs ( ll startx, ll starty  )
{
    queue< pii >Q;
    Q.push(pii(startx,starty));
    vis[startx][starty]=1;
    d[startx][starty]=0;
    while(!Q.empty())
    {
        pii  fuckx=Q.front();
        Q.pop();
        for(ll cir=0; cir<4; cir++)
        {
            ll topx=fuckx.first+movx[cir];
            ll topy=fuckx.second+movy[cir];
            if(   validx(topx,topy)==true && vis[topx][topy]==0    )
            {
                vis[topx][topy]=1;
                d[topx][topy]=d[  fuckx.first ][  fuckx.second ]+1;
                Q.push(pii (  topx, topy));
            }
        }
    }
}
////DEBUG , see the full cell graph :
/*
 for(int i=0;i<m;i++)
            {
                for(int j=0; j<n;j++)
                {
                    cout<<"     "<<cell[i][j]<<"   ";
                }
                cout<<endl;
            }
 */
