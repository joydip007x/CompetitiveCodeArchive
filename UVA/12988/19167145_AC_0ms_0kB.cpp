#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define  sz                         1000000
#define ll                        int

int n,lmt,rv[7][7],cv[7][7];
char g[7][7], s[99],spc=35;
void print();
bool valid(){
   for(int i=0 ; i<4 ;i++,i++)
   {
       for(int j=0 ; j<4; j++,j++)
       {
           if( i+1>=4 || j+1>=4  ) continue;
           set<char>sss;
           sss.insert(g[i][j]);sss.insert(g[i][j+1]);
           sss.insert(g[i+1][j]);sss.insert(g[i+1][j+1]);
           if(sss.size()!=4) return false;
       }
   }
   return true;
}
ll backtrx(int row, int col ){
  if(row==4 ) {
        if(valid()) return 1;
        return 0;
  }
  if(col<3 and g[row][col]!='*' ) return backtrx(row,col+1);
  if(col==3 and g[row][col]!='*' ) return backtrx(row+1,0);
    for(int i=1; i<=4 ; i++){

        if( !rv[ row ][i] || !cv[col][i]  )continue;
        rv[ row ][i]=cv[col][i]=0;
        g[ row][col]=i+48;
        if(col<3) { if(backtrx(row,col+1)) return 1;}
        else      { if( backtrx(row+1,0)) return 1;}
        rv[ row ][i]=cv[col][i]=1;
        g[row][col]='*';
    }
  return 0;
}
int main()
{
    int ccc=0;
    scanf("%d\n",&n);
    for(int cas=0; cas<n; cas++){
         memset(rv,0,sizeof rv);memset(cv,0,sizeof cv);memset(g,0,sizeof g);
        for(int i=0;i<4;i++)
            for(int j=1;j<=4;j++) rv[i][j]++,cv[i][j]++;
        for(int i=0 ; i<4; i++){
            scanf("%s",&s);
            for(int j=0 ; j<4;j++){
                g[i][j]=s[j];
                if(s[j]=='*') continue;
                rv[i][s[j]-48]--;
                cv[j][s[j]-48]--;
            }
        }
        backtrx(0,0);
        printf("Case %c%d:\n",spc,cas+1);
       for(int i=0;i<4;i++){
            for(int j=0;j<4;j++)
                 cout<<g[i][j];
            printf("\n");
       }
    }
}
///joydip007x ///
///Date&Time: whenever i submit*///
