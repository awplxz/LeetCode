class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* index = head;
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* res = index->next;
        while(res)
        {
            if(index->val != res->val){
                index->next = res;
                index = res;
            }
            res = res->next;
        }
        index->next=NULL;
        
        return head;
    }
};