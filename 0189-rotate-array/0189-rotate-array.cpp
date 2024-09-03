class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> copy;
        int size = nums.size();
        for(int i = size - k; i < size; i++)
        {
            cout << nums[i] << " ";
            copy.push_back(nums[i]);
        }
        for(int i = 0; i < size-k; i++)
        {
            cout << nums[i] << " ";
            copy.push_back(nums[i]);
        }
        nums = copy;
    }
};