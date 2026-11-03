class Solution {
public:
    int minMoves(vector<int>& nums) {


        int maxi= *max_element(begin(nums), end(nums));
        long long count = 0;

        for(int i = 0; i< nums.size(); i++)
        {
            count += abs(maxi - nums[i]);
        }

        return count;
        
    }
};
        