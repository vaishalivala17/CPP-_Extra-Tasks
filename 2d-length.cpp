#include <iostream>
using namespace std;

int main(){
	// Dynamic array's length
	
	int sum = 0;
	int array[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int length = sizeof(array) / sizeof(array[0][0]);

	cout << "Length of Array = " << length << endl ;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			sum = sum + array[i][j];
		}
	} 
	
	cout << "Sum of Array Elements is = " << sum << endl ; 
	float avg;
	
	avg = sum / length ;
	cout << "Avrage of array elements is = " << avg << endl ;
	
}
