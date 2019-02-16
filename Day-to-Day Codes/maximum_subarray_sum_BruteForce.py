#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the maximumSum function below.
def maximumSum(a, m):
    mx=0
    pre=[]
    c=0
    for i in range(len(a)):
        c=(a[i]+c)%m
        pre.append(c)
    
    for i in range(len(pre)):
        for j in range(i-1,-1,-1):
            mx=max(mx,(pre[i]-pre[j]+m)%m)
        mx=max(mx,pre[i])
    return mx
