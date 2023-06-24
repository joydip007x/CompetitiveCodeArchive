class Solution {
public:
    vector<vector<int>>pascal;
    bool create(int i){

        if(i<=1 || pascal[i].size() ) return true;
        create(i-1);
        vector<int>tmp=pascal[i-1];
        vector<int>tmp2(i,1);
        for(int j=1;j<i-1;j++)tmp2[j]=tmp[j]+tmp[j-1];
        pascal[i]=tmp2;
        return true;
    }
    vector<int> getRow(int rowIndex) {
        pascal.resize(35);
        pascal[1]=vector<int>{1};
        create(rowIndex+1);
        return pascal[rowIndex+1];
    }
};