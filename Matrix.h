//#pragma once
#ifndef MATRIX_H
#define MATRIX_H

#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;


class Matrix{
    private:

    vector <int> ParseLine(string line){
     stringstream sline(line);
    int n;
    char c;
    vector<int> row;
    while (sline >> n) {
        row.push_back(n);
    }
     return row;

}
    vector<vector<int>> matrix;
  



    public:
    //creating the object based on a given size
    Matrix(int size):matrix(size, std::vector<int>(size, 0)){}
    //creating the object based on a filename
    Matrix(const string &path):matrix{}{ 
    ifstream myfile(path);
        if(!myfile)cout<<"not found\n";
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      vector<int> row = ParseLine(line);
      matrix.push_back(row);
    }
  }

}
//printing the matrix
   void PrintBoard() { 
  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
      cout << (matrix[i][j])<<" ";
      
    }
    cout << "\n";
  }
  cout << "\n";
}
//returning the size of the matrix
int size(){ return matrix.size();}

//overloading the operator +
Matrix operator+(const Matrix& m){
	Matrix result(this->matrix.size());
	
	for (int i = 0; i < this->matrix.size(); i++) {
    for (int j = 0; j < this->matrix[i].size(); j++) {
      result.matrix[i][j]=this->matrix[i][j]+m.matrix[i][j];
     
    }
}

return result;
	
}
//overloading the operator -
Matrix operator-(const Matrix& m){
	Matrix result(this->matrix.size());
	
	for (int i = 0; i < this->matrix.size(); i++) {
    for (int j = 0; j < this->matrix[i].size(); j++) {
      result.matrix[i][j]=this->matrix[i][j]-m.matrix[i][j];
     
    }
}

return result;
	
}
//overloading the operator *
Matrix operator*(const int& m){
	Matrix result(this->matrix.size());
	
	for (int i = 0; i < this->matrix.size(); i++) {
    for (int j = 0; j < this->matrix[i].size(); j++) {
      result.matrix[i][j]=this->matrix[i][j]*m;
     
    }
}

return result;
	
}

//overloading   the operator *
Matrix operator*(const Matrix& m){
	Matrix result(this->matrix.size());
	
	for (int i = 0; i < this->matrix.size(); i++) {
		 for (int j = 0; j < this->matrix[i].size(); j++) {
			result.matrix[i][j]=0;
			for (int k = 0; k < this->matrix.size(); k++) {
				result.matrix[i][j]+=this->matrix[i][k]*m.matrix[k][j];    
			}    
		}    
	}  

return result;
	
}
//overloading the operator !
Matrix operator !(){
	Matrix result(this->matrix.size());
	
	for (int i = 0; i < this->matrix.size(); i++) {
		 for (int j = 0; j < this->matrix[i].size(); j++) {
			result.matrix[j][i]= this->matrix[i][j]; 
		}    
	}  

return result;
	
}




  




};




#endif
