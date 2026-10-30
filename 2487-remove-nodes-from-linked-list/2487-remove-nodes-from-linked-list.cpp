/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode * reverse(ListNode * head)
    {
        ListNode * previous = NULL;
        ListNode * current = head;

        while(current)
        {
            ListNode * future = current -> next;
            current -> next = previous;
            previous = current;
            current = future;

        }
        return previous;
    }
    ListNode* removeNodes(ListNode* head) {
        stack <ListNode*> st;
        ListNode * temp = head;

        while(temp)
        {
            while(!st.empty() and (st.top() -> val )< temp -> val)
                st.pop();

        st.push(temp);
        temp = temp -> next;
        } 
        ListNode * dummy = new ListNode (-1);
        temp = dummy;
        while(!st.empty())
        {
            ListNode * top = st.top();
            st.pop();
            temp -> next = top;
            temp = top;
        }
        temp -> next = NULL;

        return reverse(dummy -> next);
         
    }
};