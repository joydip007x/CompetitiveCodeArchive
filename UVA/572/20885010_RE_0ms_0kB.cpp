#include<bits/stdc++.h>
using namespace std;
#define ll int

const int sz = 200;
int n, m, vis[sz+10][sz+12], cnt, k, posx[sz+10], posy[sz+10];
int movx[]={1,1,1,-1,-1,-1,0,0,0};
int movy[]={1,0,-1,1,0,-1,1,-1,0};
vector<string>a ;
bool check( ll a, ll b)
{
    if( a >= 0 && a < n && b >= 0 && b < m ) return true;
    return false;
}
ll bfs( ll x, ll y)
{
    vis[x][y] = true;
    queue<int> q;
    q.push(x);q.push(y);
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
    while( cin>>n>>m and n>0 and m>0)
    {
         k=0; cnt=0;
         for(int i = 0 ; i < -5+sz ; i++){
                for(int j = 0 ; j < -5+sz ; j++)
                    vis[i][j]=false;
        }
        a.clear();
        for(int i = 0 ; i < n ; i++)
        {
           string s;
           cin>>s;
           a.push_back(s);
            for(int j=0 ; j<s.size() ; j++)
            {
                if(s[j]=='@')
                    posx[k] = i, posy[k] = j,k++;
            }
        }
        for(int i = 0 ; i < k; i++)
        {
            if(!vis[posx[i]][posy[i]])
            {
                bfs(posx[i], posy[i]);
                cnt++;
            }
        }
       cout<<cnt<<endl;
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
