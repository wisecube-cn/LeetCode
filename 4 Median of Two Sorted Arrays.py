# -*- coding: utf-8 -*-
"""
Created on Wed Feb 13 20:31:55 2019

@author: 24283
"""
input_nums1 = [3]
input_nums2 = [-2,-1]
class Solution:
    def findMedianSortedArrays(nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        global nums
        
        nums=nums1+nums2
        nums.sort()
        
        if len(nums)%2==0:
            return (nums[int(len(nums)/2)]+nums[int(len(nums)/2-1)])/2
        elif len(nums)%2!=0:
            return nums[int((len(nums)-1)/2)]
print(Solution.findMedianSortedArrays(input_nums1,input_nums2))