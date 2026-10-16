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
    void reorderList(ListNode* head) {
        //find middle
        ListNode * slow = head;
        ListNode * fast = head;

        while(fast && fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        //slow pointing to middle of LL
        //seperate LL & reverse 2nd half
        ListNode * current = slow -> next;
        slow -> next = NULL;
        ListNode * previous = slow;

        while(current)
        {
            ListNode * nextptr = current -> next;
            current -> next = previous ;
            previous = current;
            current = nextptr;
        }
        //merge two halves
        ListNode * ptr1 = head;
        ListNode * ptr2 = previous ;

        while(ptr1 != ptr2)
        {
            ListNode * temp = ptr1 -> next;
            ptr1 -> next = ptr2;
            ptr1 = ptr2;
            ptr2 = temp;
        }
        
    }
};