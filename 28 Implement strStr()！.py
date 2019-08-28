# -*- coding: utf-8 -*-
"""
Created on Wed Feb 13 16:34:01 2019

@author: 24283
"""
#运行时间太长，超时
inputhaystack = "mississippi"
inputneedle = "issippi"
class Solution:
    def strStr(haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        global i
        global j
        global same
        global position
        global i_tmp
        position=-1
        
        if needle=="" or needle==haystack:
            return 0
        if len(needle)>len(haystack):
            return -1
        
        for i in range(len(haystack)):
            same=0
            if needle[0]==haystack[i]:
                i_tmp=i
                for j in range(len(needle)):
                    if needle[j]==haystack[i_tmp]:
                        same=same+1
                        if j==0:
                            position=i
                    if needle[j]!=haystack[i_tmp]:
                        same=0
                        break
                    if i_tmp<len(haystack)-1:
                        i_tmp=i_tmp+1
                    else:
                        break
                    
            if same==len(needle):
                break
        
        if same==len(needle):
            return position
        if same!=len(needle):
            return -1
        
print(Solution.strStr(inputhaystack, inputneedle))