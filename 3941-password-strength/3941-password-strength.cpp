class Solution {
public:
    int passwordStrength(string password) {
        int ans = 0;
        unordered_set<char> st;
        for(auto i : password)
            st.insert(i);
            
        for(auto i : st)
        {
            if(i >='a' && i<='z')
                ans += 1;
            else if(i >= 'A' && i <= 'Z')
                ans += 2;
            else if(i >= '0' && i<= '9')
                ans += 3;
            else
                ans += 5;
        }
        return ans;
        
    }
};