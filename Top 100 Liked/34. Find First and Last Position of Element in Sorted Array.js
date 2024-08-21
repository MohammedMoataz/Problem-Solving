/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function (nums, target) {
    let start = 0,
        end = nums.length - 1,
        startRange = endRange = -1

    while (start <= end) {
        let middle = Math.floor((start + end) / 2)

        if (nums[middle] === target) {
            startRange = middle
            end = middle - 1
        }
        else if (nums[middle] > target) end = middle - 1
        else start = middle + 1
    }

    if (startRange === -1) return [-1, -1]

    start = 0
    end = nums.length - 1

    while (start <= end) {
        let middle = Math.floor((start + end) / 2)

        if (nums[middle] === target) {
            endRange = middle
            start = middle + 1
        }
        else if (nums[middle] > target) end = middle - 1
        else start = middle + 1
    }

    return [startRange, endRange]
}