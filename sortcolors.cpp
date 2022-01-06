class Solution {
public:
    void sortColors(vector<int>& nums) {
    // low for tracking 0, mid for tracking 1, high for tracking 2
        int low =0, mid = 0, high = nums.size() - 1;
        
        while(mid<=high){
            
            if(nums[mid] == 0) {
                swap(nums, low, mid);
                low++;
                mid++;
            } 
            else if(nums[mid] == 2) {
             
                swap(nums, mid, high);
                high--;
                
            }
            else if(nums[mid] == 1) {
                mid++;
            }
        }
        
    }
    
    void swap(vector<int> & nums, int index1, int index2){
        int temp = nums[index1];
        nums[index1] = nums[index2];
        nums[index2] = temp;
    }
};

// Complexity O(N)
