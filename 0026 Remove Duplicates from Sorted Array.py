# -*- coding: utf-8 -*-
"""
Created on Fri Feb 15 11:33:29 2019

@author: 24283
"""
inputnums=[1,1,2,2,3,3,4,4]
class Solution:
    def removeDuplicates(nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) <= 1:
            return len(nums)
        n = 0
        for i in range(1, len(nums)):
            if nums[n] != nums[i]:
                n=n+1
                nums[n] = nums[i]
        return n+1
print(Solution.removeDuplicates(inputnums))
