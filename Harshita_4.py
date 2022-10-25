# -*- coding: utf-8 -*-
"""
Created on Mon Feb  3 18:38:28 2020

@author: PC
"""

a=input('Enter The String :- ')
b=len(a)
d=" "
for c in range(0,b,2):
    d=d+a[c]
    if c<(b-1):
        d+=a[c+1].upper()
print('The New Word Is :- ',d)
