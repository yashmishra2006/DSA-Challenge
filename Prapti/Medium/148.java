class Solution {
    public ListNode sortList(ListNode head) {
        //find mid node
        if (head == null || head.next == null) {
            return head;
        }

        ListNode slow = head;
        ListNode fast = head.next;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }

        ListNode rightHead = slow.next;
        slow.next = null;

        //sorting
        head = sortList(head);
        rightHead = sortList(rightHead);

        //merge
        ListNode temp = new ListNode(-1);
        ListNode tempp = temp;
        ListNode temp1 = head;
        ListNode temp2 = rightHead;

        while (temp1 != null && temp2 != null) {
            if(temp1.val <= temp2.val) {
                temp.next = temp1;
                temp1 = temp1.next;
                temp = temp.next;
            } else {
                temp.next = temp2;
                temp2 = temp2.next;
                temp = temp.next;
            }
        }
         while (temp1 != null) {
                temp.next = temp1;
                temp1 = temp1.next;
                temp = temp.next;
            }
            while (temp2 != null) {
                temp.next = temp2;
                temp2 = temp2.next;
                temp = temp.next;
            }

        return tempp.next;
    }
}
