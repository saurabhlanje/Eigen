#include <Eigen/Dense>
#include <iostream>

// g++ -I /usr/local/include/eigen3/ trial_1.cpp -o my_favorite_cpp_source_file
//./my_favorite_cpp_source_file

using namespace std;
using namespace Eigen;

void step_next()
{
    cout << "____________________________________________________________" << endl
         << endl
         << endl;
}
int main(int argc, char **argv)
{
    cout << "Code started" << endl;
    Matrix<float, 5, 6> mat; // define a matrix with float elements with size of 5 x 5
    mat.setRandom();         // set all elements randomly
    mat.setZero();           // set all elements zero
    // mat.setUnit(); // possible on vectors only
    mat.setIdentity();   // set matrix to identiy matrix works on square and non square matrix as well
    mat.setOnes();       // set all elements to 1
    mat.setConstant(10); // set provided value to all elements in matrix
    cout << mat << endl;

    step_next();
    cout << "Feed individual element in matrix" << endl;
    MatrixXd m(2, 2);
    m(0, 0) = 3;
    m(1, 0) = 2.5;
    m(0, 1) = -1;
    m(1, 1) = 5;

    cout << m << endl;

    step_next();
    // Iterating over 1D arrays and vectors
    VectorXi v = VectorXi::Random(4);

    cout << "Here is the vector v:\n";
    for (auto x : v)
        cout << x << " ";
    cout << "\n";

    step_next();
    // Iterating over coefficients of 2D arrays and matrices
    Matrix2i A = Matrix2i::Random();
    cout << "Here are the coeffs of the 2x2 matrix A:\n";
    for (auto x : A.reshaped())
        cout << x << " ";
    cout << "\n";

    step_next();
    // Iterating over rows or columns of 2D arrays and matrices

    ArrayXXf B = ArrayXXf::Random(4, 4).abs();
    cout << "Here is the initial matrix B:\n"
         << B << "\n";
    for (auto row : B.rowwise())
        std::sort(row.begin(), row.end());
    cout << "Here is the sorted matrix B:\n"
         << B << "\n";

    // Define matrix with varying size during runtume
    Matrix<double, Dynamic, Dynamic> matt; // size is not defined and memory is not allocated and matrix is not initialized
    // OR
    MatrixXd matri(10, 10); // here memory is allocated but matrix is not initiated

    // Matlab counts from 1 but Eigen started from 0

    // Matrix an be added like this as well
    step_next();
    cout << "Different method to add value to matrix" << endl;
    Matrix4f matr;
    matr << 1, 2, 3, 4,
        5, 6, 7, 8,
        9, 10, 11, 12,
        13, 14, 15, 16;
    cout << matr << endl;

    // Dynamically define matrix of zero/ones/constant
    step_next();
    cout << "different to make zero in all the places within matrix";
    int row = 5;
    int col = 5;
    MatrixXf matrix1zeros;
    matrix1zeros = MatrixXf::Zero(row, col);
    cout << endl
         << matrix1zeros << endl;
    // Same thing can be done in this way as well

    MatrixXf matrix2zeros;
    matrix2zeros.setZero(row, col);
    cout << endl
         << matrix2zeros << endl;

    // other methods like ones,constants rand random, Identity also works

    // Access matrix blocks
    //.block(a,b,c,d)
    // a,b is start position
    // c,d, are the height and width of block

    MatrixXd matrixv(4, 4);
    matrixv << 101, 102, 103, 104,
        105, 106, 107, 108,
        109, 110, 111, 112,
        113, 114, 115, 116;
    cout << "Initial matrix is " << endl;

    cout << matrixv << endl;
    MatrixXd blocked_mat = matrixv.block(1, 0, 3, 2); // start position row, start pos column, height, width
    cout << "block of matrix is" << endl;
    cout << endl
         << blocked_mat << endl;

    // Access individual rows and columns of matrix
    cout << "row 0 of above matrix is " << endl;
    cout << matrixv.row(0) << endl;
    cout << endl
         << "col 0 of above matrix is " << endl;
    cout << matrixv.col(0) << endl;

    // Create diagonal matrix
    Matrix<double, 3, 1> vector1;
    vector1 << 1, 2, 3;
    cout << endl
         << "Initial matrix is" << endl
         << vector1;
    MatrixXd diagonalmatrix;
    diagonalmatrix = vector1.asDiagonal();
    cout << endl
         << "diagonal matrix is" << endl
         << diagonalmatrix << endl;

    // Basic matrix operations
    step_next();
    MatrixXd A1(2, 2);
    MatrixXd B1(2, 2);

    A1 << 1, 2, 3, 4;
    B1 << 3, 4, 5, 6;
    cout << endl
         << A1 << endl;
    cout << endl
         << B1 << endl;

    MatrixXd C1 = A1 + B1; // Addition
    cout << "Matrix addition is " << endl
         << C1 << endl;
    MatrixXd D1 = A1 * B1; // Multiplication
    cout << "Matrix multiplication is " << endl
         << D1 << endl;

    // Multiplication by scalar
    int s = 2;
    MatrixXd F1;
    F1 = s * A1;
    cout << endl <<"Matrix multiplication by scalar is"<< endl<<F1 << endl;

    //Matrix transpose
    MatrixXd At;
    MatrixXd R1;
    At=A1.transpose();
    cout<<endl<<"Transpose of A1 is"<<endl<<At<<endl;

    //Matrix transpose in place
    A1.transposeInPlace();//this is specific method just to get the transpose at the place itself A1=At.transpose() will not work at all
    cout<<endl<<"In place transpose of A1"<<endl<<A1<<endl;


    MatrixXd abc(2, 2);
    abc << 1, 2, 2, 4;
    // Inverse of matrix
    MatrixXd G1=abc.inverse();
    cout<<endl<<"Inverse of matrix is"<<endl<<G1<<endl;
    MatrixXd Z(2,2);
    Z=abc*G1;
    cout<<endl<<"Multiplication of matrix is"<<endl;
    cout<<endl<<Z<<endl;

    cout<<endl<<A.reshaped()<<endl;


}
