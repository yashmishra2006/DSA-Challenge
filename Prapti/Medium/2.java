/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode op = new ListNode();

        ListNode ptr1 = l1;
        ListNode ptr2 = l2;
        ListNode ptr3 = op;

        int sum = 0;
        int carry = 0;
        while (ptr1 != null || ptr2 != null) {
            int val1;
            if (ptr1 != null) {
                val1 = ptr1.val;
            } else {
                val1 = 0;
            }

            int val2;
            if (ptr2 != null) {
                val2 = ptr2.val;
            } else {
                val2 = 0;
            }

            sum = (val1 + val2 + carry) % 10;
            carry = (val1 + val2 + carry) / 10;
            ptr3.next = new ListNode(sum);
            
            if (ptr1 != null)
                ptr1 = ptr1.next;
            if (ptr2 != null)
                ptr2 = ptr2.next;
            
            ptr3 = ptr3.next;
        }
        if (carry != 0)
            ptr3.next = new ListNode(carry);
        
        return op.next;
    }
}
