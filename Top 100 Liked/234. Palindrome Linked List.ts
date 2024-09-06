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

function isPalindrome(head: ListNode | null): boolean {
    if (!head.next) return true

    const stack = []
    while (head) {
        stack.push(head.val)
        head = head.next
    }

    while (stack.shift() === stack.pop())
        if (stack.length <= 1)
            return true

    return false
}