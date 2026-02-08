// 433. Search for an Element in an Array
// In this problem, you are given an array of integers called nums and an integer target. Your task is to determine whether the target exists within the array. If the target is found, return the index of its first occurrence. If the target is not found, return -1. Use a straightforward approach to access each element in the array to see if it matches the target.

// Example:
// Input:
// nums = [4, 2, 7, 1, 9, 3]
// target = 7

// Output:
// 2
//Solution 
// int searchElementInArray(vector<int>& nums, int target) {
//     int size = nums.size();
//     for(int i = 0; i < size; i++){
//         if(nums[i] == target){
//             return i;
//         }   
//     }

//     return -1;
//    // Placeholder return
// }



//Question Multiply each element by 10

// vector<int> multiplyByTen( vector<int>& arr) {
//     // Create a copy of arr
//     vector<int> arrCopy = arr;
//     int size = arrCopy.size();

//     for(int i = 0; i < size; i++){
//       arrCopy[i] = arrCopy[i] * 10;
//     }
//     return arrCopy;
// }