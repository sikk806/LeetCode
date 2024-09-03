class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1, j = 0, flag = 0;
        for(i; i < nums.size(); i++)
        {
            if((nums[i] != nums[j]))
            {
                j++;
                nums[j] = nums[i];
                flag = 0;
            }
            else if((nums[i] == nums[j]) && flag == 0)
            {
                j++;
                nums[j] = nums[i];
                flag = 1;
            }
        }
        
        return j + 1;
    }
};