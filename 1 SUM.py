# -*- coding: utf-8 -*-
"""
Created on Mon Feb 11 15:52:58 2019

@author: 24283
"""
inputNums=[1,2,3,4,5]
inputTarget=4

def twoSum(nums, target):
    n = len(nums)
    numbers=[0,0]
    for x in range(n):
        for y in range(x+1,n):
            if nums[y] == target-nums[x]:
                numbers[0]=x
                numbers[1]=y
                return numbers;


print(twoSum(inputNums,inputTarget))


