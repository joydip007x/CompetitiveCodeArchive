class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if(!n || !m) {
           if (!m) nums1=nums2;
           return;
        }
        int l1=0,l2=0,chk=m,chk2=m+n;
        nums1.resize(m);
        cout<<" SIZE "<<nums1.size()<<endl;
        for(  ; nums1.size()!=chk2 ; l1++){
            cout<<n<<" start "<<nums1[l1]<<" :  "<<nums2[l2]<<endl;

            while(l1<chk && nums1[l1]<=nums2[l2]){
                cout<<n<<" [loo] "<<nums1[l1]<<" :  "<<nums2[l2]<<endl;
                l1++;
            }
            cout<<"Change > "<<nums1[l1]<<" :  "<<nums2[l2]<<" : "<<l1<<","<<l2<<endl;
            if(nums1[l1]>nums2[l2] || l1-l2>m-1 ){  
                cout<<" X"<<endl;
                nums1.insert(nums1.begin()+l1,nums2[l2]);
                l2++; 
            }
           
        }
       // nums1.pop_back();
    }
};