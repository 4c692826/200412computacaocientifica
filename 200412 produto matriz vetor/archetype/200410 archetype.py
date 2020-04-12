#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Apr  6 14:25:06 2020

@author: bruno
"""

# time function
"""
<ctime>
difftime(start, end): diference in seconds

"""




matrix = [[1,2,3],
		  [3,2,1],
		  [1,3,2]]

vector = [[1],
		  [3],
		  [1]]

def matrixbuilder(matrix, dimensions):
	rows = int(dimensions[0])
	cols = int(dimensions[2])

	model = rows * [cols * [None]]

	for element in range(0, rows * cols, 1):
		col = element % cols
		for row in range(0, rows, 1):
			model[row][col] = matrix[element + element % (rows * cols)]

	return(model)


print(matrixbuilder("1,2,3,3,2,1,1,3,2", "3,3"))

def product(matrix, vector):
	'''Returns the product of matrix and vector, for any size, but
	it requires the matrix to be square '''

	# dimensions
	## matrix
	rowm = len(matrix)
	colm = len(matrix[0])

	## vector
	rowv = len(vector)

	## dimensional test
	if not (colm == rowv):
		return(False)
	else:
		pass

	# output strucute
	b = list()

	# main loop
	## navigate rows
	for row in range(0, rowm, 1):

		## inital output vector element
		element = 0

		## navigate columns
		for col in range(0, colm, 1):
			element = element + matrix[row][col] * vector[col][0]
		## loop end

		## sum into output vector
		b.append(element)
		## loop end

	return(b)

#print(product(matrix, vector))




'''
References

	range(start, stop, step)
	int i = start, i < stop, i++

'''
