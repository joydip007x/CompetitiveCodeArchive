#include <bits/stdc++.h>
 
using namespace std;
 
int grundy[2011][2011];
int x, y, n;
 
int dx[] = {-1, -1, -2, -3, -2, +1};
int dy[] = {-3, -2, -1, -1, +1, -2};
 
void pre() {
  for (int i = 0; i <= 2000; ++i) {
    int row = i, col = 0;
    while (row >= 0) {
      set<int> s;
      for (int j = 0; j < 6; ++j) {
        int xx = dx[j] + row;
        int yy = dy[j] + col;
        if (xx >= 0 && yy >= 0) s.insert(grundy[xx][yy]);
      }
      for (int j = 0; ; ++j) {
        if (s.find(j) == s.end()) {
          grundy[row][col] = j;
          break;
        }
      }
      row--;
      col++;
    }
  }
}
 
int main() {
  pre();
  int t;
  scanf("%d", &t);
  for (int cs = 1; cs <= t; ++cs) {
    scanf("%d", &n);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      scanf("%d %d", &x, &y);
      ans ^= grundy[x][y];
    }
    printf("Case %d: ", cs);
    if (ans) printf("Alice\n");
    else printf("Bob\n");
  }
}