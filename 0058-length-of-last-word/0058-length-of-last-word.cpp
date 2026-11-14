class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.size() - 1 ;

        for(; i >= 0 && s[i] == ' ' ; i--)
        {}   // last word ke lst char par ayega

        for( ; i >= 0 && s[i] != ' ' ; i--)
            count++;

        return count;
    }
};