/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    
    int value1;
    int extra;
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        
        value1 = 0;
        
        if(l1==null && l2 == null && extra == 0) return null;
        if(l1 != null) value1 += l1.val;
        if(l2 != null) value1 += l2.val;
        value1 += extra;
        if(value1 > 9)
        {
            value1 -= 10;
            extra = 1;
        }else extra  = 0;
        
        ListNode ans = new ListNode(value1);
        ans.next = AddTwoNumbers(l1?.next, l2?.next);
        
        
        return ans;
    }
}