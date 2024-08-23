/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function (nums) {
    // return Math.min(...nums)

    let low = 0,
        high = nums.length - 1

    while (low < high) {
        let middle = Math.floor((low + high) / 2)

        if (nums[middle] < nums[high]) high = middle
        else low = middle + 1
    }

    return nums[low]
}