class Solution {
public:
    void sortColors(vector<int>& nums) {
           int low = 0;
        int mid = 0;
        int high = nums.size()- 1;
        int temp;
        while(mid<=high){
            switch(nums[mid]){
                case 0: {
                    temp = nums[mid];
                    nums[mid] = nums[low];
                    nums[low] = temp;
                    low++;
                    mid++;
                    break;
                }
                case 1: {
                    mid++;
                    break;
                }
                case 2: {
                    temp = nums[mid];
                    nums[mid] = nums[high];
                    nums[high] = temp;
                    high--;
                    break;
                }
            }
        }
    
    }
};