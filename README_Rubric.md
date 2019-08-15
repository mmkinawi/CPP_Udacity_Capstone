# CPPND: Capstone Hello World Repo
## Rubric: Loops, Functions, I/O
1. The project demonstrates an understanding of C++ functions and control structures:
in [main.cpp] you can find a while loop and swtich statement, starting from line 32 onwords. Also, you will find a function called `menu()` to be used to call the menu from the main program.
You will find also similar control structures in [Matrix.h], within the methods.

2. The project reads data from a file and process the data, or the program writes data to a file.
in [main.cpp] lines 60, 61, the program uses the file path to read the matrix data. The actual file reading can be found in [Matrix.h] in the copy constructor `Matrix(const string &path)`, starting from lines 35 till the end of the constructor.

3. The project accepts user input and processes the input.
in [main.cpp] lines 15, the user has to enter his choice from the menu.


## Object Oriented Programming
4. The project uses Object Oriented Programming techniques.
The whole program is consisting of Matrix class, found in [Matrix.h]. The data used is: `vector<vector<int>> matrix;`, while the methods used are: `ParseLine(string line)`, `PrintBoard()`, `operator+(const Matrix& m)`, `operator-(const Matrix& m)`, `operator*(const int& m)`,`operator*(const Matrix& m)`, `operator !()`, `size()`

5. Classes use appropriate access specifiers for class members.
the class members under `public:` are:
* Constructors;  `Matrix(int size)` and `Matrix(const string &path)`
* `PrintBoard()`,
* `operator+(const Matrix& m)`, 
* `operator-(const Matrix& m)`, 
* `operator*(const int& m)`,
* `operator*(const Matrix& m)`, 
* `operator !()`
* `size()`
the class members under `private:` are:
* `ParseLine(string line)`
* `vector<vector<int>> matrix`

6. Class constructors utilize member initialization lists.
this can be seen in [Matrix.h], in lines 33,34

7. Classes abstract implementation details from their interfaces, and
8. Classes encapsulate behavior.
all the comments are displayed in [Matrix.h] and [main.cpp]. In general, the program [main.cpp] ensures that the user only uses the basic operations to create the matrices as well as apply any prefered operations. All detailes are hidden within [Matrix.h]

9. Overloaded functions allow the same function to operate on different parameters.
generally in [Matrix.h], some operators are overloaded (strating from line 63 onwords). In addition, the opertor `*` is overloaded via 
* `operator*(const int& m)` and,
* `operator*(const Matrix& m)`, 

## Memory Management
10. The project makes use of references in function declarations.
in [Matrix.h], all operator functions used (strating from line 63 onwords), uses the second operand by reference.

11. The project follows the Rule of 5.
in [Matrix.h], the copy construcotr is defined in lines 34, and 36




