# -*- coding: utf-8 -*-
"""
Created on Wed Feb 13 21:12:21 2019

@author: 24283
"""
#超时
class Solution:
    def myPow(x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        global i
        global ans
        
        i=int()
        ans=1
        
        if n==0:
            return 1
        elif n>0:
            for i in range(n):
                ans=ans*x
            return ans
        elif n<0:
            n_pos=-n
            for i in range(n_pos):
                ans=ans*x
            return 1/ans
print(Solution.myPow(2,3))
        