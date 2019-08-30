# -*- coding: utf-8 -*-
"""
Created on Tue Feb 12 09:48:19 2019

@author: 24283
"""
inputStr=["flower","flow","flight"]
class Solution:
    def longestCommonPrefix(strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        global i,j
        global n
        global minLen
        global sameStr
        global flag
        
        
        if strs==[]:
            return ""
        if len(strs)==1:
            return str(strs[0])
        
        n=len(strs)
        minLen=len(min(strs, key=len))
        sameStr=""
        flag=0
        
        for i in range(minLen):
            #if strs[0][i]==strs[1][i]==strs[2][i]:
            #    sameStr=sameStr+strs[0][i]
            #else:
            #    break
            for j in range(len(strs)-1):
                if strs[0][i]!=strs[j+1][i]:
                    flag=1
                    break
            if flag!=1:
                sameStr=sameStr+strs[0][i]
            if flag==1:
                break
        return sameStr
        
print(Solution.longestCommonPrefix(inputStr))
        
