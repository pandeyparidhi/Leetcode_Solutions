struct ListNode{
    int val;
    ListNode*next;
    ListNode(int x){
        val = x;
        next = nullptr;
    }
};
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode*slow = head;
        ListNode*fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode*prev = nullptr;
        ListNode*curr = slow;
        ListNode*next = nullptr;
        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        
        while(prev != nullptr)
        {
            if(head->val == prev->val){
            head = head->next;
            prev = prev->next;
            }else{
                return false;
            }
        }

       return true;
    }
};