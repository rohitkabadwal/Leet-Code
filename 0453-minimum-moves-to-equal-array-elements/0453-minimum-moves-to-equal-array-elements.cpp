class Solution {
public:
    int minMoves(vector<int>& nums) {

        int MinEle = *min_element(begin(nums), end(nums));
        long long count = 0;

        for (int x : nums) 
            count += x - MinEle;

        return count;
        
    }
};