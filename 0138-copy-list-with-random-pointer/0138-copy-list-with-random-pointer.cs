/*
// Definition for a Node.
public class Node {
    public int val;
    public Node next;
    public Node random;
    
    public Node(int _val) {
        val = _val;
        next = null;
        random = null;
    }
}
*/

public class Solution {
    
    Dictionary<Node, Node> lookup = new Dictionary<Node, Node>();
    
    
    public Node CopyRandomList(Node head) {
        
        if(head == null)
            return null;
        
        Node currentNode = head;
        while(currentNode != null)
        {
            lookup[currentNode] = new Node(currentNode.val);
            currentNode = currentNode.next;
        }
        
        foreach(KeyValuePair<Node, Node> x in lookup)
        {
            if(x.Key.next!=null)
                x.Value.next = lookup[x.Key.next];
            
            if(x.Key.random != null)
                x.Value.random = lookup[x.Key.random];
        }
        
        return lookup[head];
        
    }
}