//61. Rotate list
// runtime: 3ms , memory used: 16.6MB



class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)
            return nullptr;
        if(head->next==nullptr || k==0)
            return head;

        ListNode* ptr=head;
        int size=0;
        while(ptr){
            ++size;
            ptr=ptr->next;
        }

        int rep = k % size;
        if(rep==0)
            return head;
        for(int i=0;i<rep;++i){
        ListNode* ptr=head;
        while(ptr->next->next!=0)
            ptr=ptr->next;

        ptr->next->next=head;
        head=ptr->next;
        ptr->next=nullptr;

        }

        return head;
    }
};
