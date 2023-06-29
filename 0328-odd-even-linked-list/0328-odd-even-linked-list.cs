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
    public ListNode OddEvenList(ListNode head) {

        if (head == null || head.next == null)
            return head;
            
        var even = head.next;
        var evenHead = even;
        var odd = head;

        while (odd.next != null && even.next != null)
        {
            odd = odd.next = even.next;
            even = even.next = even.next.next;
        }

        odd.next = evenHead;

        return head;


    }
}