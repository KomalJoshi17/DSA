/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */

// Link : https://leetcode.com/problems/intersection-of-two-linked-lists/description/

public class Solution {
    int getLength(ListNode head) {
        ListNode cur = head;
        int len = 0;
        while(cur != null) {
            cur = cur.next;
            len += 1;
        }
        return len;
    }
    ListNode giveTheEdge(ListNode cur, int iterations) {
        for(int i = 0; i < iterations; ++i)
            cur = cur.next;
        return cur;
    }
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int l1 = getLength(headA);
        int l2 = getLength(headB);

        ListNode cur1 = headA, cur2 = headB;

        if(l1 > l2) {
            cur1 = giveTheEdge(headA, l1 - l2);
        }
        else {
            cur2 = giveTheEdge(headB, l2 - l1);
        }

        while(cur1 != cur2) {
            cur1 = cur1.next;
            cur2 = cur2.next;
        }

        return cur1;
    }