// global declarations
/// libraries
#include <stdio.h>


// product
void product(int *vector, int n, int *matrix[][3]) {

	// variables
	/// matrix and vector dimensions
	int rowm, colm, rowv;

	/// temporary b vector element
	int element;

	// dimensions
	/// matrix
	rowm = n;
	colm = n;

	/// vector
	rowv = n;
	
	/// output vector
	int b[n];

	/// dimensional test
	/* if (colm != rowv) {
		return(0);
	} else {
		0;
		} */

	// main loop
	/// naviagate rows
	/*for (int row = 0; row < rowm; row++) {
		/// initial output vector element
		element = 0;

		for (int col = 0; col < colm; col++) {
			/// navigate columns
			element = element + matrix[row][col] * vector[col];
			
			/// add into output vector
			if (col % colm == 0) b[col] = element;
			} /// loop end

		} /// loop end */

	// return
	printf("Result: %d, %d, %d\n", b[0], b[1], b[2]);
	} // function end
	
// main
int main() {
	/// constants
	int n = 3;

	/// dimensions are row, cols
	int matrix[3][3] =  {1,2,3,
			  3,2,1,
			  1,3,2};

	int vector[3] = {1,3,1};
	
	product(vector, n, matrix);
	
	return 0;
	}
