/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* reverse(ListNode* head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        
        while(curr != NULL)
        {
            ListNode *suc = curr->next;
            curr->next = prev;
            prev = curr;
            curr = suc;
            
        }
        
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        
        int carry = 0;
        
        ListNode *dummy, *temp;
        dummy = new ListNode();
        temp = dummy;
        
        while(l1 || l2 || carry)
        {
            int val = 0;
            if(l1!=NULL)
            {
                val += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)
            {
                val += l2->val;
                l2 = l2->next;
            }
            
            val += carry;
            if(val > 9)
            {
                val -= 10;
                carry = 1;
            }else {
                carry = 0;
            }
            
            ListNode *newNode = new ListNode(val);
            temp->next = newNode;
            temp = temp->next;
        }
        
        return reverse(dummy->next);
    }
};