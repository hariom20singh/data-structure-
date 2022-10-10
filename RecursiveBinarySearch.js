/**
Javascript program for Binary Search Recursively

Data structure used => Array
Binary Search is a searching algorithm for finding an element's position in a sorted array.
In this approach, the element is always searched in the middle of a portion of an array.

Input
[-1,0,3,5,9,12]
9
Output
4
 */

/**
 * @param {number[]} nums Accepts sorted array on which binary search to be performed
 * @param {number} target Accepts element that needs to be searched
 * @return {number} Returns index of element if found otherwise -1
 */
const recursiveBinarySearch = function (nums, target) {
    return recursiveSearch(nums, target, 0, nums.length - 1);
};

const recursiveSearch = (nums, target, l, h) => {
    if (l > h) return -1;
    let m = parseInt(l + (h - l) / 2);
    if (nums[m] === target) return m;
    if (nums[m] < target) return recursiveSearch(nums, target, m + 1, h);
    if (nums[m] > target) return recursiveSearch(nums, target, l, m - 1);
};

//Driver Code
recursiveBinarySearch([-1, 0, 3, 5, 9, 12], 9); // O/P: 4
