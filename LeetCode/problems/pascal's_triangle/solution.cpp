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
    vector<vector<int>> generate(int numRows) {
        
        pascal.resize(31);
        pascal[1]=vector<int>{1};
        create(numRows);
        return vector<vector<int>>(pascal.begin()+1, pascal.begin()+numRows+1);
        // for(int i=1;i<numRows; i++){
        //     cout<<pascal[i].size();
        //     // for(int j=0;j<pascal[i].size();j++)cout<pascal[i][j]<<",";
        //     cout<<endl;
        // }

    }
};