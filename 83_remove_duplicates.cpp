//83. Remove duplicates from sorted list
// runtime: 0 , memory used: 18.7MB



class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)
            return nullptr;

        ListNode* ptr= head;
        while(ptr!=nullptr && ptr->next!=nullptr){
           
           if(ptr->val==ptr->next->val)
               { ptr->next=ptr->next->next;    
               }
            else
                ptr=ptr->next;
        }

        return head;
    }
};