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

// Link : https://leetcode.com/problems/middle-of-the-linked-list/description/

/*
Time : O(N)
Space : O(N/K)
*/

class Solution {
    int length(ListNode head) {
        int len = 0;
        ListNode cur = head;
        while(cur != null) {
            cur = cur.next;
            len += 1;
        }
        return len;
    }
    public ListNode middleNode(ListNode head) {
        int N = length(head);
        ListNode cur = head;
        for(int i = 0; i < N/2; ++i)
            cur = cur.next;
        return cur;
    }
}