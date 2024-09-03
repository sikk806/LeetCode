class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> elements;
        int max = 0, max_num = 0;
        for(int& i : nums)
        {
            elements[i]++;
            if(max < elements[i])
            {
                max = elements[i];
                max_num = i;
            }
        }
        return max_num;
    }
};