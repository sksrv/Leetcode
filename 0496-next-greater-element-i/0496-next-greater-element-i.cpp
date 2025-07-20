class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
            for(int i=0;i<nums1.size();i++){
                    int a= nums1[i];
                    for(int j=0;j<nums2.size();j++){
                    
                    if(a==nums2[j]){
                        int b=j+1;
                        bool great=false;
                        while(b<nums2.size()){
                            if(nums2[b]>nums2[j]){
                                ans.push_back(nums2[b]);
                                great=true;
                                break;
                            }
                            b++;
                        }
                        if(!great){
                            ans.push_back(-1);
                        } 
                    }
                
                }
            }
                
        return ans;        
            
    }
};