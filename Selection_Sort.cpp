class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

  // Selection sort

        for (int i = 0; i < nums.size() - 1; i++) {
            int index = i;
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] < nums[index]) {
                    index = j;
                }
            }
            swap(nums[i], nums[index]);
        }
        return nums;
    }
};

    
