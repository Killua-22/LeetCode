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
    public ListNode ReverseBetween(ListNode head, int left, int right) {
        
        int i;
        ListNode curr = head; 
        ListNode prev = null;
        
        for(i=1; i<left; i++)
        {
            prev = curr;
            curr = curr.next;
        }
        
        ListNode rtail = curr;
        ListNode rhead = null;
        
        while(i<=right)
        {
            ListNode next = curr.next;
            curr.next = rhead;
            rhead = curr;
            curr = next;
            i++;
        }
        
        if(prev != null)
            prev.next = rhead;
        else
            head = rhead;
        
        rtail.next = curr;
        
        return head;
    }
}