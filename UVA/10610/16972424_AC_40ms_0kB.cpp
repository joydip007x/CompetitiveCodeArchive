
#include <stdio.h>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
double px[1005], py[1005];
int main() {
    int v, m, i, j, k;
    char s[105];
    while(bool(scanf("%d %d", &v, &m) )==true ) {
        if(v == 0 && m == 0)    break;
        int len = v*m*60, n = -1;
      //  scanf("%lf %lf", &px[0], &py[0]);
      //  scanf("%lf %lf", &px[1], &py[1]);
       // while(getchar() != '\n');
        getchar();
        while(gets(s) && s[0] != '\0') {
                n++;
            sscanf(s, "%lf %lf", &px[n], &py[n]);
          //  n++;
        }
        queue<int> Q;
        int dist[1005] = {}, x;
        dist[0] = 1;
        Q.push(0);
        while(!Q.empty()) {
            x = Q.front(), Q.pop();
            for(i = 0; i <= n; i++) {
                if(hypot(px[i]-px[x], py[i]-py[x]) < len) {
                    if(dist[i] == 0) {
                        dist[i] = dist[x]+1;
                        Q.push(i);
                    }
                }
            }
            if(dist[1]) break;
        }
        if(dist[1])
            printf("Yes, visiting %d other holes.\n", dist[1]-2);
        else
            puts("No.");

    }
    return 0;
}
