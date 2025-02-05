class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         if (nums.empty()) return 0;  // Edge case: empty array
        int i = 0; // Unique elements pointer
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) { // If a new unique element is found
                i++;  
                nums[i] = nums[j];  // Copy unique element
            }
        }
        return i + 1; // New length 
    }
};
