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
    public ListNode Partition(ListNode head, int x) {
        
        ListNode before = new ListNode(0);
        ListNode after = new ListNode(0);
        ListNode beforecur = before;
        ListNode aftercur = after;
        
        while(head != null)
        {
            if(head.val < x)
            {
                beforecur.next = head;
                beforecur = beforecur.next;
            }
            else
            {
                aftercur.next = head;
                aftercur = aftercur.next;
            }
            head = head.next;
        }
        
        aftercur.next = null;
        beforecur.next = after.next;
        
        return before.next;
}
}