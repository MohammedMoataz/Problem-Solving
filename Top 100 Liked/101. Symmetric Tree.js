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
 * @return {boolean}
 */
var isSymmetric = function (root) {
    return isMirror(root.left, root.right)
}

var isMirror = function (leftTree, rightTree) {
    if (!leftTree && !rightTree) return true
    if (!leftTree || !rightTree) return false

    return leftTree.val === rightTree.val
        && isMirror(leftTree.left, rightTree.right)
        && isMirror(leftTree.right, rightTree.left)
}
