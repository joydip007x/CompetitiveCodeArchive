#include<bits/stdc++.h>
using namespace std;
typedef int ll;

const int sz = 120;
int n, m, vis[sz][sz], cnt, k, posx[sz], posy[sz];
int movx[] = { 0, 0, +1, -1, +1, -1, +1, -1};
int movy[] = {+1, -1, 0, 0, +1, -1, -1, +1};
char a[sz][sz];
bool check( ll a, ll b)
{
    if( a >= 0 && a < n && b >= 0 && b < m ) return true;
    return false;
}
ll bfs( ll x, ll y)
{

    vis[x][y] = true;
    queue<int> q;
    q.push(x);
    q.push(y);
    while(!q.empty())
    {
        ll u = q.front();q.pop();
        ll v = q.front();q.pop();
        for(int i = 0 ; i <= 7 ; i++)
        {
            ll nx = u + movx[i];
            ll ny = v + movy[i];
            if( check(nx,ny) &&  a[nx][ny]=='@' && !vis[nx][ny] ){
            	vis[nx][ny]=true;
            	q.push(nx);
            	q.push(ny);
            }
        }
    }
   return 1;
}
int main()
{
    while(1)
    {
        scanf("%d %d", &n, &m);
        if(!n && !m) break;
        k = 0; cnt=0;
         for(int i = 0 ; i < sz ; i++){
                for(int j = 0 ; j < sz ; j++)
                   vis[i][j]=false,a[i][j]='a',posx[i]=posy[i]=posx[j]=posy[j]=-1;
        }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                char c;
                cin>>c;
                if(c =='@') posx[k] = i, posy[k] = j,k=k+1;
                a[i][j] = c;
            }
        }
        for(int i = 0 ; i < k; i++)
        {
            if(!vis[ posx[i] ][ posy[i] ])
            {
                bfs(posx[i], posy[i]);
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }


    return 0;
}
/*
 1 1
 *
 3 5
 *@*@*
 **@**
 *@*@*
 1 8
 @@****@*
 5 5
 ****@
 *@@*@
 *@**@
 @@@*@
 @@**@
 0 0
 */
