# -*- coding: utf-8 -*-
"""
Created on Mon Feb 11 20:49:01 2019

@author: 24283
"""

class Solution:
    def reverse(x):
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
            y=-x
            symbol=1
        if x==0:
            return 0
        if x>0:
            y=x
            symbol=0
            
        str_x = list(map(int, str(y)))
        str_x.reverse()
        n=len(str_x)
        for i in range(n):
            reverse_number=reverse_number+str_x[i]*10**(n-1-i)
        
        if reverse_number>2147483647 or reverse_number<-2147483648 :
            return 0
        if symbol==1:
            return -reverse_number
        else:
            return reverse_number
        
        
        
        
        