#include <vector>
#include <iostream>
using namespace std;

class Calc
{
public:
float a;
float b;

float sum();
float sub();
float divi();
float mul();

};


float Calc::sum()

   {
     return a+b;
   }

float Calc::sub()
{
  return a-b;
}

float Calc::divi()
{
  return a/b;
}

float Calc::mul()
{
  return a*b;
}



class Mat
{
public:
  int rows;
  int cols;
  vector <vector <int> > result;



vector <vector <int> > accept_matrix(int rows, int cols);
void display(vector <vector <int> > matrix);
vector <vector <int> > add_matrix(vector<vector <int> > mat1, vector<vector <int> > mat2);
vector <vector <int> >  sub_matrix(vector <vector <int> > mat1, vector <vector <int> > mat2);
vector <vector <int> >  div_matrix(vector <vector <int> > mat1, vector <vector <int> > mat2);
vector <vector <int> >  mul_matrix(vector <vector <int> > mat1, vector <vector <int> > mat2);
vector <vector <int> >  matmul_matrix(vector <vector <int> > mat1, vector <vector <int> > mat2);



//void display_matrix(vector <vectir <int> >);



};


vector <vector <int> > Mat::accept_matrix(int r, int c)
{
  vector <vector <int> > mat;
  int temp;
  for(int i = 0; i<r; i++)
  {
     vector <int> row;
     for (int j = 0; j<c; j++)
     {
        cin >> temp;
        row.push_back(temp);
     }
     mat.push_back(row);
  }
  display(mat);
  return mat;
}


void Mat::display(vector <vector <int> > matrix)
{
  cout << "Matrix is" << endl;
  for (int i = 0; i< rows; i++)
  {
    for (int j = 0; j< cols; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}


vector <vector <int> > Mat::add_matrix(vector <vector <int> > mat1, vector <vector <int> > mat2)
{
     vector <vector <int> > res;

     for (int i =0; i< rows; i++)
     {
       vector <int> row;
       int temp;
       for (int j=0; j<cols; j++)
       {
         temp = mat1[i][j] + mat2[i][j];
         row.push_back(temp);
       }
       res.push_back(row);
     }
     display(res);
     return res;
}


vector <vector <int> > Mat::sub_matrix(vector <vector <int> > mat1, vector <vector <int> > mat2)
{
     vector <vector <int> > res;

     for (int i =0; i< rows; i++)
     {
       vector <int> row;
       int temp;
       for (int j=0; j<cols; j++)
       {
         temp = mat1[i][j] - mat2[i][j];
         row.push_back(temp);
       }
       res.push_back(row);
     }
     display(res);
     return res;
}


vector <vector <int> > Mat::div_matrix(vector <vector <int> > mat1, vector <vector <int> > mat2)
{
     vector <vector <int> > res;

     for (int i =0; i< rows; i++)
     {
       vector <int> row;
       int temp;
       for (int j=0; j<cols; j++)
       {
         temp = mat1[i][j] / mat2[i][j];
         row.push_back(temp);
       }
       res.push_back(row);
     }
     display(res);
     return res;
}


vector <vector <int> > Mat::mul_matrix(vector <vector <int> > mat1, vector <vector <int> > mat2)
{
     vector <vector <int> > res;

     for (int i =0; i< rows; i++)
     {
       vector <int> row;
       int temp;
       for (int j=0; j<cols; j++)
       {
         temp = mat1[i][j] * mat2[i][j];
         row.push_back(temp);
       }
       res.push_back(row);
     }
     display(res);
     return res;
}

vector <vector <int> > Mat::matmul_matrix(vector <vector <int> > mat1, vector <vector <int> > mat2)
{
     vector <vector <int> > res;

     for (int i = 0; i< rows; i++)
     {
       vector <int> row;

       for (int j=0; j<cols; j++)
       {
         int temp;
         temp = 0;
         for(int k = 0; k < cols; k++)
            {
                temp += mat1[i][k] * mat2[k][j];
            }
         row.push_back(temp);
       }
       res.push_back(row);
     }
     display(res);
     return res;
}
