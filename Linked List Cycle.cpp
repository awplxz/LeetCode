class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return false;
        ListNode *index1 = head;
        ListNode *index2 = head;
        while( index2->next && index2->next->next){
            index1 = index1->next;
            index2 = index2->next->next;
            if(index1->val == index2->val)
                return true;
        }
        return false;
    }
};