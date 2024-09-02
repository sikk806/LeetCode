class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> answer;
        int count = 0;
        // for(int& i : nums)
        // {
        //     if(i != val)
        //     {
        //         answer.push_back(i);
        //         count++;
        //     }
        // }

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                answer.push_back(nums[i]);
                count++;
            }
        }

        nums = answer;
        return count;
    }
};
