#include <iostream>
#include "Matrix.h"
using namespace std;

bool menu(Matrix &m1, Matrix &m2, Matrix &m3){
	int choice,scalar;
	cout<< "*******************************\n";
	cout<< " 1 - Adding Matrix1 and Matrix2 (M1+M2)\n";
	cout<< " 2 - Subtracting Matrix2 from Matrix1 (M1-M2)\n";
	cout<< " 3 - Scalar Multiplication (M1*n)\n";
	cout<< " 4 - Multiplying Matrix1 by Matrix2 (M1*M2)\n";
	cout<< " 5 - Matrix Transpose (M1^T)\n";
	cout<< " 6 - Exit.\n";
	cout<< " Enter your choice and press return: ";
	
	cin >> choice;

	switch (choice){
		case 1:
			cout << "M1+M2\n";
			m3=m1+m2;
			m3.PrintBoard();
			break;
		case 2:
			cout << "M1-M2\n";
			m3=m1-m2;
			m3.PrintBoard();
			break;
		case 3:
			cout << "(M1*n)\nEnter your scalar n:\n";
			cin>>scalar;
			m3=m1*(scalar);
			m3.PrintBoard();
			break;
		case 4:
			cout << "(M1*M2)\n";
			m3=m1*m2;
			m3.PrintBoard();
			break;
		case 5:
			cout << "(M1^T)\n";
			m3=!m1;
			m3.PrintBoard();
			break;
		case 6:
			cout << "End of Program.\n";
			 return false;
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}
	
	
	
	
	}

int main() {
    cout << "Hello" << "\n";
    cout<<"This program helps you doing basic and simple matrix operation, given that your matrix is a square size" << "\n";
    //menu and read the user input: file name
    //for some reason I have to provide the full path to the file!!

    string filename1="/home/mariam/Documents/OC/Udacity/CPLUSPLUS/Capstone/CppND-Capstone-Hello-World-master/src/small1.txt";
    string filename2="/home/mariam/Documents/OC/Udacity/CPLUSPLUS/Capstone/CppND-Capstone-Hello-World-master/src/small2.txt";
    
    cout<<"reading matrix1 from this file:"<<filename1<<"\n";
    cout<<"reading matrix2 from this file:"<<filename1<<"\n";
    
    //creating the corresponding Matrix objects:
    Matrix   m1(filename1);
    Matrix  m2(filename2);
    Matrix  m3(m2.size());//to be used as a resultant matrix
    cout<<"Your matrices are:\n";
    //printing the matrices
    m1.PrintBoard();
    m2.PrintBoard();
    
    cout<<"Please check the below menu:\n";
    //menu operations
	bool inMenu = true;
	while (inMenu != false){
		inMenu = menu(m1,m2,m3);
		
	
	}
   
  
  

    return 0;
}
