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
    void reorderList(ListNode* head) {
        
        if ((!head) || (!head->next) || (!head->next->next)) return; 
        stack<ListNode*> st;
        int size = 0;
        
        ListNode* ptr = head;
        
        while(ptr!=NULL)
        {
            st.push(ptr);
            size++;
            ptr = ptr->next;
        }
        
        ListNode* ptr2 = head;
        
        for(int i=0; i<size/2; i++)
        {
            ListNode* temp = st.top();
            st.pop();
            
            temp->next = ptr2->next;
            ptr2->next = temp;
            ptr2 = ptr2->next->next;
        }
        
        ptr2->next = NULL;
    }
};