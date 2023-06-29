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
    public ListNode ReverseList(ListNode head) {
        ListNode pre = null;
        ListNode node = head;
        ListNode suc = null;
        while(node != null)
        {
           suc = node.next;
           node.next = pre;
           pre = node;
           node = suc;
        }

        return pre;
    }
}