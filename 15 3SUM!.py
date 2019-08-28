# -*- coding: utf-8 -*-
"""
Created on Mon Feb 11 18:35:57 2019

@author: 24283
"""
inputnums = [0,0,0,0]

class Solution:
    def threeSum(nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        import operator as op
        global value
        global count
        global n
        
        chongfu=[]
        value=[]
        n=len(nums)
        count=0
        
        if nums==[]:
            return []
        elif nums==[0]:
            return []
        elif set(nums)==[0]:
            return {[0,0,0]}
        elif (nums!=[] and nums!=[0] and set(nums)!=[0]):
            for i in range(n):
                for j in range(i+1,n):
                    for k in range(j+1,n):
                        if nums[i]==0-nums[j]-nums[k]:
                            value.append([nums[i],nums[j],nums[k]])
                            count=count+1
        
            for i in range(count):
                value[i].sort()
        
            if count>1:
                for i in range(count):
                    for j in range(i+1,count):
                        if op.eq(value[i],value[j]):
                            del value[j]
            return value

print(Solution.threeSum(inputnums))