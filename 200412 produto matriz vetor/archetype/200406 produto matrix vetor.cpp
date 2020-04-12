// global declarations
/// libraries
#include <stdio.h>

/// constants
int n;
n = 3;

/// dimensions are row, cols
int matrix[n][n] =  {{1,2,3},
		  {3,2,1},
		  {1,3,2}};

int vector[n] = {1,3,1};


// main
void main(int argc, char *argv[]) {
	exit(0);
	}

// product
int product(int *matrix, int *vector) {

	// variables
	/// matrix and vector dimensions
	volatile int rowm, colm, rowv;

	/// temporary b vector element
	volatile int element;

	// dimensions
	/// matrix
	rowm = n;
	colm = n;

	/// vector
	rowv = n;

	/// dimensional test
	if (colm != rowv) {
		return(0);
	} else {
		/// output vector
		volatile int b[rowv];
		}

	// main loop
	/// naviagate rows
	for (row = 0; row < rowm, row++) {
		/// initial output vector element
		element = 0;

		for (col = 0; col < colm, col++) {
			/// navigate columns
			element = element + matrix[row][col] * vector[col];
			} /// loop end

		/// add into output vector
		b[col] = element
		} /// loop end

	// return
	return b
	} // function end
