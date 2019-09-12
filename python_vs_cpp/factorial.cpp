#include<iostream>
using namespace std;
unsigned long long int factorial(int num);

int main()
{
  int iter;
  unsigned long long int fact;
  int number;
  fact = 0;
  //cout << "Enter number of iterations" << endl;
  //cin >>  iter;
  //cout << "Enter the number whose factorial needs to be computed" << endl;
  //cin >> number;
  number = 10;
  iter = 10000000;
  for (int i =0; i<= iter; i++)
  {
    fact = factorial(number);
  }
  cout << "Iterations: " << iter << " Factorial: " << fact << endl;
}

unsigned long long int factorial(int num)
{
  unsigned long long int res;
  res = 1;
  for(int j = 1; j<=num; j++)
  {
    res*=j;
  }
  return res;
}
