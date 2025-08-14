//24. Swap Nodes in Pairs
// Runtime: 0ms ; Memory Usage: 11.04MB



class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* ptr = &dummy;

        while(ptr->next != nullptr && ptr->next->next != nullptr){
            ListNode* first = ptr->next;
            ListNode* second = ptr->next->next;

            first->next = second->next;   
            second->next = first;         
            ptr->next = second;           

            ptr = first;                   
        }

        return dummy.next;
    }
};