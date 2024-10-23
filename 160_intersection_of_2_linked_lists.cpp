//160. Intersection of Two Linked Lists
// Runtime: 34ms , Memory usage: 17.37MB



class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr1 = headA;
        ListNode *ptr2 = headB;

        int l1 = 0;
        int l2 = 0;

        while(ptr1->next!=NULL){
            l1++;
            ptr1 = ptr1->next;
        }
        while(ptr2->next!=NULL){
            l2++;
            ptr2 = ptr2->next;
        }

        ptr1 = headA; ptr2 = headB;

        if(l1>l2){
            for(int i=0;i<l1-l2;++i){
                ptr1 = ptr1->next;
            }
        }
        if(l2>l1){
            for(int i=0;i<l2-l1;++i){
                ptr2 = ptr2->next;
            }
        }

        while(ptr1!=ptr2 && ptr1!=NULL && ptr2!=NULL){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        if(ptr1==NULL || ptr2==NULL){
            return NULL;
        }
        else{
          return ptr1;  
        } 
    }
};