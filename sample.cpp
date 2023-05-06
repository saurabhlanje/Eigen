#include <Eigen/Dense>
#include <Eigen/Dense>
#include <iostream>

// g++ -I /usr/local/include/eigen3/ trial_1.cpp -o my_favorite_cpp_source_file
//./my_favorite_cpp_source_file

using namespace std;
using namespace Eigen;

void step_next()
{
    cout << "____________________________________________________________" << endl<< endl << endl;
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
    //Iterating over rows or columns of 2D arrays and matrices

    ArrayXXf B = ArrayXXf::Random(4,4).abs();
    cout << "Here is the initial matrix B:\n" << B << "\n";
    for(auto row : B.rowwise())
      std::sort(row.begin(), row.end());
    cout << "Here is the sorted matrix B:\n" << B << "\n";


    //Define matrix with varying size during runtume
    Matrix<double, Dynamic, Dynamic> matt; //size is not defined and memory is not allocated and matrix is not initialized
    //OR
    MatrixXd matri(10,10);// here memory is allocated but matrix is not initiated

    //Matlab counts from 1 but Eigen started from 0

    // Matrix an be added like this as well
    step_next();
    cout<<"Different method to add value to matrix"<<endl;
    Matrix4f matr;
    matr<<1,2,3,4,
    5,6,7,8,
    9,10,11,12,
    13,14,15,16;
    cout<<matr<<endl;

    //Dynamically define matrix of zero/ones/constant
    step_next();
    cout<<"different to make zero in all the places within matrix";
    int row=5;
    int col=5;
    MatrixXf matrix1zeros;
    matrix1zeros=MatrixXf::Zero(row,col);
    cout<<endl<<matrix1zeros<<endl;
    //Same thing can be done in this way as well
    
    MatrixXf matrix2zeros;
    matrix2zeros.setZero(row,col);
    cout<<endl<<matrix2zeros<<endl;

    //other methods like ones,constants rand random, Identity also works
    











}
