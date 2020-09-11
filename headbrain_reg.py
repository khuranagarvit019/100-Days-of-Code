#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Aug 23 15:50:01 2020

@author: khuranagarvit019
"""


#Import libraries
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

#reading Dataset

df = pd.read_csv('/home/khuranagarvit019/Downloads/headbrain.csv')
print(df.head())
print(df.info())
print(df.isnull().sum())
print(df.shape)

X = df['Head Size(cm^3)'].values
Y =  df['Brain Weight(grams)'].values

print(X.shape)
print(Y.shape)

# performing regression

mean_X = np.mean(X)
mean_Y = np.mean(Y)

n = len(X)

num =0
denom = 0

for i in range(n):
    num += (X[i]-mean_X)* (Y[i]-mean_Y)
    denom +=(X[i]-mean_X)**2
m = num/denom
c = mean_Y - (m*mean_X)

print(m,',',c)

plt.scatter(X,Y)
#creating dummy test set

min_x = np.min(X)-100
max_x = np.max(X)+100



x = np.linspace(min_x,max_x,1000)

y = m*x+c


plt.scatter(X,Y,color='g')
plt.plot(x,y,color='r')
plt.title('Simple Linear Regression')
plt.xlabel('Head size cm^3')
plt.ylabel('Brain weight in grams')


#calculating error
sum_pred = 0
sum_act = 0

for i in range(n):
    y_pred = (m*X[i]+c)
    sum_pred += (Y[i]-y_pred)**2
    sum_act +=(Y[i]-mean_Y)**2

r2 = 1-(sum_pred/sum_act)
print(r2)


#predict function


def predict(x):
    y = m*x + c
    print(y)

predict(3297)





