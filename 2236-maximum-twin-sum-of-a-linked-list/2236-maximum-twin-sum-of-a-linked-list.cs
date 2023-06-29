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
    public int PairSum(ListNode head) {
        ListNode tail = head;
        int count = 0;
        while(tail!=null)
        {
            tail = tail.next;
            count++;
        }
        
        ListNode fast = head;
        ListNode slow = head;
        List<int> val = new List<int>();
        while(fast!=null && fast.next!=null)
        {
            val.Add(slow.val);
            fast = fast.next.next;
            slow = slow.next;
            
        }

        val.Reverse();

        int i=0;

        while(i<count/2 && slow!=null)
        {
            val[i] += slow.val;
            slow = slow.next;
            i++;
        }

    
        return val.Max();


            
        

        
        
        
        
        
    }
}