class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if(!n || !m) { if (!m) nums1=nums2; return; }
        int l1=0,l2=0,chk2=m+n;
        nums1.resize(m);
        for(  ; nums1.size()!=chk2 ; l1++){

            while(l1<m && nums1[l1]<=nums2[l2])l1++;

            if(nums1[l1]>nums2[l2] || l1-l2>m-1 ){  
                nums1.insert(nums1.begin()+l1,nums2[l2]);
                l2++; 
            } 
        }
    }
};