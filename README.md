# HurdleNormal
Estimation and sampling for multi-dimensional Hurdle models on a Normal density with applications to single-cell co-expression

A Hurdle model is a modification of a distribution at zero. 
This package provides routines to estimate and sample from multivariate Hurdle models on a Normal density. 
These are distributions that are conditionally Normal, but with singularities along the coordinate axes, so generalize a univariate zero-inflated distribution.  
The main functionality is to estimate graphical models using group-lasso penalized neighborhood selection.