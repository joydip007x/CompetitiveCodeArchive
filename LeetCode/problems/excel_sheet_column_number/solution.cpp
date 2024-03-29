class Solution {
public:
    int titleToNumber(string columnTitle) {
        int cnt=1,tar=columnTitle.length(), ml=1,sum=0;
        int ans=0;
        while(cnt<tar){
            cnt++;
            ml=ml*26;
            sum+=ml;
        }
        ans=sum;
        for(const auto& i:columnTitle){
            int x=i-65+1;
            ans+=((x-1)*ml);
            ml=ml/26;
        }
        ans++;
        return ans;
    }
};