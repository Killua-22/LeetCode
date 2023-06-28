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
    public ListNode DeleteMiddle(ListNode head) {
        if(head == null || head.next == null)
        {
            head = null;
            return head;
        }

        ListNode f = head;
        ListNode s = head;

        while(f != null && f.next != null)
        {
            s = s.next;
            f = f.next.next;
        }

        if(s.next != null)
        {
            s.val = s.next.val;
            s.next = s.next.next;
        }
        else{
            head.next = null;
        }

        return head;


    }
}