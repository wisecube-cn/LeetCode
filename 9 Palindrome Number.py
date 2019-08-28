# -*- coding: utf-8 -*-
"""
Created on Mon Feb 11 21:52:01 2019

@author: 24283
"""

class Solution:
    def isPalindrome(x):
        """
        :type x: int
        :rtype: int
        """
        global symbol
        global reverse_number
        global str_x
        global y
        
        symbol=int()
        reverse_number=int()
        str_x=list()
        y=int()
        
        if x<0:
            return False
        y=x 
        str_x = list(map(int, str(y)))
        str_x.reverse()
        n=len(str_x)
        for i in range(n):
            reverse_number=reverse_number+str_x[i]*10**(n-1-i)
        
        if y==reverse_number:
            return True
        if y!=reverse_number:
            return False