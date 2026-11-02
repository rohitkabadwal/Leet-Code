class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();

        stack<int> st;
        vector<int> nsi(n);
        vector<int> psi(n);

        // Next Smaller Index 
        for(int i = n - 1; i >= 0; i--)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            nsi[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        while(!st.empty())
            st.pop();

        // Previous Smaller Index 
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            psi[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        int maxi = 0;

        for(int i = 0; i < n; i++)
        {
            int height = arr[i];
            int width = nsi[i] - psi[i] - 1;

            maxi = max(maxi, height * width);
        }

        return maxi;
    }
};