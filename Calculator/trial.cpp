#include <vector>
#include <iostream>
#include "trial_class.h"
using namespace std;

//int sum(int num1, int num2 );
void display(vector <vector <int> > mat, int row, int col);
int main()
{
char option;
cout << "simple calculation: 1, matrix calculation: 2" << endl;
cout << "enter option" << endl;

cin >> option;
if (option == '1')
{
 Calc calc;
 float a;
 float b;
 cout << "enter num1" <<endl;
 cin >> a;
 cout <<  "enter num2" << endl;;
 cin >> b;
 calc.a = a;
 calc.b = b;
 cout << "enter operation" << endl;
 char oper;
 cin >> oper;
 float res;
 if (oper == '+')
 {res = calc.sum();}
 else if (oper == '-')
 {res = calc.sub();}
 else if (oper == '/')
 {res = calc.divi();}
 else if (oper == '*')
 {res = calc.mul();}
 else
 {cout<< "operater not valid" << endl;}
 cout << "The result for "<< a << oper << b << " is " << res << endl;


}

else
{
   int rows, cols;
   cout << "enter matrix rows" << endl;
   cin >> rows;
   cout << "enter matrix columns" << endl;
   cin >> cols;
   Mat mat;
   mat.rows = rows;
   mat.cols = cols;
   vector <vector <int> > mat1;
   vector <vector <int> > mat2;

   mat1 = mat.accept_matrix(mat.rows, mat.cols);
   mat2 = mat.accept_matrix(mat.rows, mat.cols);

   cout<< "enter matrix operation" << endl;
   char oper;
   cin >> oper;
   if (oper == '+')
   {mat.result = mat.add_matrix(mat1, mat2);}
   else if (oper == '-')
   {mat.result = mat.sub_matrix(mat1, mat2);}
   else if (oper == '/')
   {mat.result = mat.div_matrix(mat1, mat2);}
   else if(oper == '*')
   {mat.result = mat.mul_matrix(mat1, mat2);}
   else if (oper == 'X')
   {mat.result = mat.matmul_matrix(mat1, mat2);}
   else
   {cout << "invalid operation" << endl;}


}



}
