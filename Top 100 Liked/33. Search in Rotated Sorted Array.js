/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function (nums, target) {
    let low = 0,
        high = nums.length - 1

    while (low <= high) {
        if (nums[low] === target) return low
        if (nums[high] === target) return high

        let middle = Math.floor((low + high) / 2)

        if (nums[middle] === target) return middle

        if (nums[middle] >= nums[low])
            if (nums[middle] > target && target >= nums[low]) high = middle - 1
            else low = middle + 1

        else
            if (nums[middle] < target && target <= nums[low]) low = middle + 1
            else high = middle - 1
    }

    return -1
}