#include <iostream>

using namespace std;

// matrix builder
int matrix(const int n) {
	int m[n][n];
	
	m[47][50] = 1;
	
	cout << m[47][50];
	
	return(0);
	}



// main
int main() {
	int n;
	cout << "Insert your matrix size: ";
	cin >> n;
	
	matrix(n);
	
	return 0;
	}

#include <iostream>
#include <vector>

using namespace std;

main () {
    int n = 3;
    
    vector <vector <int> > x(n, vector <int> (n));
    
    x[0][1] = 1;
    
    cout << x[0][1];
    
    return (0);
}
