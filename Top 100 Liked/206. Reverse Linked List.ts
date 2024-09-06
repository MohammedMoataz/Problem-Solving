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

function reverseList(head: ListNode | null): ListNode | null {
    if (!head) return head

    return reverse(head, null)
}

function reverse(head: ListNode | null, parent: ListNode | null): ListNode | null {
    let next = head.next

    head = new ListNode(head.val, parent)

    if (!next) return head

    return reverse(next, head)
}