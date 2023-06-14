class Solution {
public:
    int maxArea(vector<int>& height) {
       int l=0,r=height.size()-1,mx=0;
       for(  ; l<r ; ){
          int h=min(height[l],height[r]);
          mx=max(mx, h*abs(l-r));
          while(height[l]<=h && l<r)l++;
          while(height[r]<=h && l<r)r--;
       }
       return mx;
    }
};