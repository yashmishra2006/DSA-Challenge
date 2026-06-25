class Solution {
    public void reorderList(ListNode head) {
        //find mid
        ListNode slow = head;
        ListNode fast = head.next;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }

        ListNode mid = slow;

        //reverse second half
        ListNode curr = slow.next;
        slow.next = null;
        ListNode prev = null;
        ListNode next;

        while (curr != null) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        //alt merge
        ListNode left = head;
        ListNode right = prev;
        ListNode nextL, nextR;

        while(left != null && right != null) {
            nextL = left.next;
            nextR = right.next;

            left.next = right;
            right.next = nextL;

            left = nextL;
            right = nextR;
        }
    }
}
