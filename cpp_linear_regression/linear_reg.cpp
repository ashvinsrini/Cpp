// to compile please run g++ --std=c++11 linear_reg.cpp

#include<iostream>
#include<vector>
#include <cmath>
#include <stdlib.h>
using namespace std;
int cost_func(vector<float> x,vector <float> y);
float cost_derivative(vector <float> x, vector <float> y, int mult, char bias);
float cost_derivative_for_algo(vector <float> x, vector <float> y, int mult, char bias, vector<float> wts);
void grad_descent(vector <float> x, vector <float> y, char bias);

int main()
{
  vector <float>  input;
  vector <float>  output;
  char bias;
  bias = 'T';
  float avg_cost = 0;
  float noise;
  for (int i = 0; i< 1000; i++)
  {
     noise = 0.01*(rand()%100);
     input.push_back(i+1+noise);
     output.push_back(3+2*(i+1+noise));
     //cout << input[i]<< endl;
     //cout << output[i]<< endl;

  }
avg_cost= cost_derivative(input, output, -1, bias);
//cout << avg_cost << endl;
//cout << tot << endl;

grad_descent(input, output, bias);

}


int cost_func(vector<float> x,vector <float> y)
{
  vector <float> wts{1,1};
  float cost = 0;
  float ypred;
  float err = 0;

  for (int i = 0; i<x.size(); i++)
  {
    err = y[i]-(wts[0]+wts[1]*x[i]);
    ypred = pow(err,2);
    cost+=ypred;

  }
  cost = cost/(2*x.size());

return cost;
}


float cost_derivative(vector <float> x, vector <float> y, int mult, char bias)
{
  vector <float> wts{1,1};
  float der = 0;
  float sum = 0 ;
  float t =0;
  for (int i = 0; i<x.size(); i++)
  {
    if (bias == 'T')
    {
      sum+= (y[i]-(wts[0]+wts[1]*x[i]))*mult*2;
      t = (y[i]-(wts[0]+wts[1]*x[i]))*mult*2;
     }
    else
    {
      sum+= (y[i]-(wts[0]+wts[1]*x[i]))*x[i]*mult*2;
      t = (y[i]-(wts[0]+wts[1]*x[i]))*x[i]*mult*2;
    }

    //cout << t << endl;
  }
  der = sum/(2*x.size());
  return der;
}

float cost_derivative_for_algo(vector <float> x, vector <float> y, int mult, char bias, vector<float> wts)
{
  float der = 0;
  float sum = 0;
  float t =0;
  for (int i = 0; i<x.size(); i++)
  {
    if (bias == 'T')
    {
      sum+= (y[i]-(wts[0]+wts[1]*x[i]))*mult*2;
      //t = (y[i]-(wts[0]+wts[1]*x[i]))*mult*2;
     }
    else
    {
      sum+= (y[i]-(wts[0]+wts[1]*x[i]))*x[i]*mult*2;
      //t = (y[i]-(wts[0]+wts[1]*x[i]))*x[i]*mult*2;
    }


  }
  der = sum/(2*x.size());
  //cout << "derivative is " << der << endl;
  //cout << "examples " << x.size() << endl;
  return der;
}




void grad_descent(vector <float> x, vector <float> y, char bias)
{
  float init_bias = 0.01*(rand()%100);
  float init_wt = 0.01*(rand()%100);
  vector <float> wts{6, -5};
  cout << "intialized wts are " << wts[0] << " " << wts[1] << endl;
  float learning_rate = 0.000005;
  for (int i =0; i<10000000; i++)
  {
    wts[0] = wts[0] - learning_rate*cost_derivative_for_algo(x,y, -1, 'T',wts);
    wts[1] = wts[1] - learning_rate*cost_derivative_for_algo(x,y, -1, 'F',wts);
    cout << "bias is " << wts[0]<< endl;
    cout << "wt is " << wts[1]<< endl;

  }


  //return w;
}
