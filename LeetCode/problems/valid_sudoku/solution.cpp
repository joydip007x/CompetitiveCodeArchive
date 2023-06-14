class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int dx[]={0,0,0,1,1,1,2,2,2};
        int dy[]={0,1,2,0,1,2,0,1,2};
        for(int i=0; i<9;i++){
            unordered_map<int,int>u1,u2;
            for(int j=0;j<9;j++){
                int x=board[i][j]-48;
                int y=board[j][i]-48;
                if( board[i][j]!='.' && u1[x] ) return false;
                if( board[j][i]!='.' && u2[y] ) return false;
                u1[x]++;
                u2[y]++;
                if(i%3==0 && j%3==0){
                    unordered_map<int,int>u3;   
                    for(int k=0; k<9 ;k++){
                        int p=i+dx[k];
                        int q=j+dy[k];
                        if(board[p][q]=='.' )continue;
                        int x=board[p][q]-48;
                        if(u3[x]) return false;
                        u3[x]++;
                    }
                }
            }
        }
        return true;
    }
};