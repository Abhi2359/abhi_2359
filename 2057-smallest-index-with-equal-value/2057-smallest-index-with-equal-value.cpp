class Solution {
public:
    int smallestEqual(vector<int>& nums) {
          int val=-1;
        for(int i=0;i<nums.size();i++){
            if(i%10==nums[i])return i;
        }
        return val;
        
    }
};