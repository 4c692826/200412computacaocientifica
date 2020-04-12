// global declarations
/// libraries
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

// product between matrix and vector
int product(vector <vector <double>> &matrix,
		vector <double> &v,
		vector <double> &b,
		int n) {
	
	cout << "product: main loop initiate" << "\n";
	
	// main loop
	int row;
	int col;
	/// naviagate rows
	for (row = 0; row < n; ++row) {
		/// navigate columns
		for (col = 0; col < n; ++col) {
			
			// add product into its output position
			b[row] += matrix[row][col] * v[col];
			//cout << "matrix: " << matrix[row][col] << " vetor: " << v[col] << "\n";
			
			} /// loop end
		} /// loop end

	/*cout << "product: end result: " << "\n";
	for (row = 0; row < n; ++row) {
		cout << "\t" << b[row] << "\n";
		}*/
	
	return(0);
	} // function end

// random numbers
double lotus(int size = 10000, float fragment = 100.0) {
	double r = rand() % size / fragment;
	return(r);
	}

// populate matrix
int populate(vector <vector <double>> &matrix,
		int n) {
	// variables
	int row, col, elements;
	
	cout << "populate: populating the main matrix" << "\n";
	
	// loop the matrix in a linear fashion
	for (elements = 0; elements < n*n; ++elements) {
		// indexes
		row = elements % n;
		col = elements / n;
		
		// set value to random
		matrix[row][col] = lotus();
		} // end loop 

	return(0);
	} // end function

// main
int main(int argc, char *argv[]) {
	
	// get matrix size parameter
	int n = atoi(argv[1]);
	
	// final result
	int deltatime;
	
	// random seed for lotus()
	time_t unixtimestamp;
	srand(time(&unixtimestamp));
	
	cout << "main: Matrix size: " << n << "\n";
	
	// declaring matrix v(vector) and b(output)
	vector <vector <double> > matrix(n, vector <double> (n));
	vector <double> v(n);
	vector <double> b(n);
	
	cout << "main: Vectors and Matrices set" << "\n";;
	
	// populate the matrix
	populate(matrix, n);
	
	cout << "main: Main matrix ready" << "\n";;
	
	//populate the vectors
	for (int i = 0; i < n; ++i) {
		// initialize the vector
		v[i] = lotus();
		
		// initialize the output
		b[i] = 0;
		} // end loop

	cout << "main: v and b vectors ready" << "\n";;

	// setting cronometers
	clock_t start, end;
	
	/// initial time
	start = clock();
	
	cout << "main: start time: " << start << "\n";
	
	/* // test setting
	n = 2;
	matrix[0][0] = 1;
	matrix[0][1] = 2;
	matrix[1][0] = 5;
	matrix[1][1] = 1;
	
	v[0] = 3;
	v[1] = 5; */
	
	/// objective function
	product(matrix, v, b, n);
	
	/// final time
	end = clock();
	
	cout << "main: end time: " << end << "\n";
	
	deltatime = end - start;
	
	cout << "main: delta time: " << deltatime << "\n";
	
	return(deltatime);
	}
