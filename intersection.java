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
        public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        //boundary check
        if(headA == null || headB == null) return null;
        
        ListNode cur1 = headA;
        ListNode cur2 = headB;
        
        //if LL1 & LL2 have different len, then we will stop the loop after second iteration
        // because they'll reach null at the same time, and hence
        // will become equal.
        while( cur1 != cur2){
            //for the end of first iteration, we just reset the pointer to the head of another linkedlist
            cur1 = cur1 == null? headB : cur1.next;
            cur2 = cur2 == null? headA : cur2.next;    
        }
        
        return cur1;
    }
}