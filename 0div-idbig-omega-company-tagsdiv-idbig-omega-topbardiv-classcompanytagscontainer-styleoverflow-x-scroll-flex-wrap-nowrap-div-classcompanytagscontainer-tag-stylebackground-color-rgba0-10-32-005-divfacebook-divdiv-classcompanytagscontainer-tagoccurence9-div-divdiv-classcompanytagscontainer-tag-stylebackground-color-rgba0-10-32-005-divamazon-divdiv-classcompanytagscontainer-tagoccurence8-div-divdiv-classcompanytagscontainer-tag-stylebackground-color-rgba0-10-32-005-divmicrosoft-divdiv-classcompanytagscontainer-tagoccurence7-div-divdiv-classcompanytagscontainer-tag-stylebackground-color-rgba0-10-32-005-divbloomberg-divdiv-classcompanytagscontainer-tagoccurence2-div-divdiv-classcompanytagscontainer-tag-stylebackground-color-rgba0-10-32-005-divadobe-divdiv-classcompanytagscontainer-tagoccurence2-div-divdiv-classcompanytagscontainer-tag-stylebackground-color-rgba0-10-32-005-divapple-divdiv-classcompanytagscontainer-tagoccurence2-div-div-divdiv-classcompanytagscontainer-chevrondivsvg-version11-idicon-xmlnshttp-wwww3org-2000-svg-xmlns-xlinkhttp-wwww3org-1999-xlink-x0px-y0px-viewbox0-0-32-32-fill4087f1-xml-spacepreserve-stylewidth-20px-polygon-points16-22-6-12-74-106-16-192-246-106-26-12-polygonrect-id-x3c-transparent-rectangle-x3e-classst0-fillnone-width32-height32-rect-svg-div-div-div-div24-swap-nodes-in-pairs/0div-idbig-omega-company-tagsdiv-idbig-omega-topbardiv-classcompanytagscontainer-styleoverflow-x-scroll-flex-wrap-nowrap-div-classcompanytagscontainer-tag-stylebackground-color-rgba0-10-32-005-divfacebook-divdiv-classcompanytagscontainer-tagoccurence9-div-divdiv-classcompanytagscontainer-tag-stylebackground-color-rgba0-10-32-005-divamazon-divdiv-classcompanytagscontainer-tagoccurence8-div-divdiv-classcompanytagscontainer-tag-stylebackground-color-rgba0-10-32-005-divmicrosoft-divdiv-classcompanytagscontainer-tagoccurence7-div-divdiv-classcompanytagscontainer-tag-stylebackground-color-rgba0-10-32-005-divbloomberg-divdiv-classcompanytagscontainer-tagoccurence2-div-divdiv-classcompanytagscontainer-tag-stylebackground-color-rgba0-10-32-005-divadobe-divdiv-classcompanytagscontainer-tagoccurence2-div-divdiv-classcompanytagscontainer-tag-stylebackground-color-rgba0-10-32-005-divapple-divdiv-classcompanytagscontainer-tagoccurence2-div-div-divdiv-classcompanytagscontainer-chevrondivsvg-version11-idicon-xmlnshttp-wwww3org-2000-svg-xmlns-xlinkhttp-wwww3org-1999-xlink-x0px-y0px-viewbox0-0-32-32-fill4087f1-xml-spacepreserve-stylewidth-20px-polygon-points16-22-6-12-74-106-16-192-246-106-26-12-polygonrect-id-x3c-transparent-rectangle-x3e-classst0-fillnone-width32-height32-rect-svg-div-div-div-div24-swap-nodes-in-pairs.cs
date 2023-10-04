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
    public ListNode SwapPairs(ListNode head) {
        ListNode dummy= new ListNode();
        
        dummy.next = head;
        
        ListNode prev = dummy;
        ListNode curr = head;
        
        while(curr!=null && curr.next != null)
        {
            prev.next = curr.next;
            curr.next = prev.next.next;
            prev.next.next = curr;
            
            prev = curr;
            curr = curr.next;
        }
        
        return dummy.next;
    }
}