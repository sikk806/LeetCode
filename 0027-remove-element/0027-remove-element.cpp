class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> answer;
        int count = 0;
        for(int& i : nums)
        {
            if(i != val)
            {
                answer.push_back(i);
                count++;
            }
        }

        nums = answer;
        return count;
    }
};