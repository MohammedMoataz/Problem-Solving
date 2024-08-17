/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function (nums, target) {
    let start = 0,
        end = nums.length - 1,
        middle

    while (start <= end) {
        middle = Math.floor((end + start) / 2)
        if (nums[middle] === target) return middle
        else if (nums[middle] < target) start = middle + 1
        else end = middle - 1
    }

    return nums[middle] > target ? middle : middle + 1
}