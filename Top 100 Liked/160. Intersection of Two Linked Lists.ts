/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function getIntersectionNode(headA: ListNode | null, headB: ListNode | null): ListNode | null {
    if (!headA || !headB) return

    let tempA: ListNode = headA
    let tempB: ListNode = headB

    while (tempA !== tempB) {
        tempA = tempA ? tempA.next : headB
        tempB = tempB ? tempB.next : headA
    }

    return tempA
}