class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxi = 0;
        
        int low = 0, high = height.size()-1;
        
        while(low<high)
        {
            maxi = max(maxi, min(height[low],height[high]) * (high-low));
            if(height[low]<height[high]){
                low++;
            }
            else{
                high--;
            }
            
            
        }
        return maxi;
        
    }
};

// Complexity O(n)
