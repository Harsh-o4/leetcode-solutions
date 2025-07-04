//21. Merge Two Sorted Lists
// Runtime: 0 ms , Memory Used: 19.63 MB



class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode start;
        ListNode* head = &start;
        
        
        while(list1 && list2){
            if(list1->val < list2->val){
                head->next = list1;
                list1 = list1->next;
            }   
            else{
                head->next = list2;
                list2 = list2->next;
            }
            head = head->next;
        }

        head->next = list1 ? list1 : list2;

        return start.next;
    }
};