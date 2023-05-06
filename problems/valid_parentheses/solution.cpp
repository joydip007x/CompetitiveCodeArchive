class Solution {
public:
    bool isValid(string s) {
        
        unordered_map<int,int>u={{'(',')'},{'{','}'},{'[',']'}};
        stack<int>q;
        for(auto i:s){
            //cout<<i<<endl;
            if(i=='(' || i=='[' || i=='{'){
                q.push(i);
                continue;
            }
            else if (q.empty() || u[q.top()]!=i) return false;
            q.pop();
        }
        return (q.size()==0);
    }
};