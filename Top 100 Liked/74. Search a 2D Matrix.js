/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function (matrix, target) {
    let start = 0,
        rowLen = matrix[0].length,
        colLen = matrix.length,
        end = rowLen * colLen - 1

    while (start <= end) {
        let mid = Math.floor((start + end) / 2),
            row = Math.floor(mid / rowLen),
            col = Math.floor(mid % rowLen)

        if (matrix[row][col] === target) return true
        else if (matrix[row][col] < target) start = mid + 1
        else end = mid - 1
    }

    return false
}