
# Rain Water Trapping

Problem Description : Given an array of N non-negative integers arr[] representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

Approach Used: Two Pointer Approach

Implementation Steps:

1. Take two pointers l and r. Initialize l to the starting index 0 and r to the last index N-1.

2. Since l is the first element, left_max would be 0, and right_max for r would be 0.

3. While l ≤ r, iterate the array. We have two possible conditions

4. Condition1 : left_max <= right max

Consider Element at index l.
Since we have traversed all elements to the left of l, left_max is known. 
For the right max of l, We can say that the right max would  always be >= current r_max here.
So, min(left_max,right_max) would always equal to left_max in this case. Increment l.

5. Condition2 : left_max > right max

 Consider Element at index r. Since we have traversed all elements to the right of r, right_max is known. For the left max of l, We can say that the left max would  always be >= current l_max here. 
 So, min(left_max,right_max) would always equal to right_max in this case. Decrement r.


# Time Complexity:

O(N)

# Auxiliary Space:
O(1)
