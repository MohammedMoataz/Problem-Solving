/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */

var inorderTraversal = function (root) {
    var result = []
    traverse(root, result)
    return result
}

var traverse = function (root, result) {
    if (!root) return
    traverse(root.left, result)
    result.push(root.val)
    traverse(root.right, result)
}