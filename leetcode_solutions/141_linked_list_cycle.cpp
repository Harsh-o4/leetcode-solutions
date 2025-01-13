//141. Linked List Cycle
// Runtime: 8 ms, Memory Usage: 11.88 MB



class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;

        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;

            if(fast==slow)  return true;
        }

        return false;
    }
};