class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> answer;
        answer.push_back(nums[0]);
        
        int count = 1;

        for(int i = 1; i < nums.size(); i++)
        {
            if(answer[count-1] != nums[i])
            {
                answer.push_back(nums[i]);
                count++;
            }
        }
        cout << count << endl;
        nums = answer;

        return count;
    }
};