
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <utility>
#include <algorithm>
#include <set>
#include <ctime>
#include <queue>
#include <stack>

#define ll long long

//#define inf cin
//#define outf cout

using namespace std;

int main()
{
    //ifstream inf("");
    //fstream outf("");
    //cout << setprecision(10);

    int n, m;
    cin >> n >> m;
    
    vector<vector<ll>> dist(n, vector<ll>(n));
    vector<vector<ll>> path(n, vector<ll>());
    vector<bool> vis(n);
    
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        dist[a][b] = -c;
        dist[b][a] = -c;
        
        path[a].push_back(b);
        path[b].push_back(a);
        
    }
    
    priority_queue< pair<ll,pair<ll,ll>> > pq;
    
    pq.push({0,{0, 0}}); //tot cost, cur node, prev node
    
    ll ret = 0;
    
    while (!pq.empty()) //will stop running when all visited
    {
        auto node = pq.top(); pq.pop();
        
        if (vis[node.second.first]) continue;
        vis[node.second.first] = true;
        
        ret += dist[node.second.second][node.second.first];
        
        for (auto e : path[node.second.first])
        {
            if (!vis[e])
            {
                pq.push({ret+dist[node.second.first][e], {e, node.second.first}});
            }
        }
    }
    
    cout << ret << endl;
    
    return 0;
    
}