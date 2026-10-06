// main logic is to check if the current node's value is equal to the next node's value, if yes then we skip the next node by pointing current node's next to the next node's next. If not, we move to the next node. We continue this process until we reach the end of the list. Finally, we return the head of the modified list.
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};  
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*curr = head;
        while(curr != nullptr && curr->next != nullptr){
            if(curr->val == curr->next->val){
                curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
            }
        }
        return head;

        
    }
};