This folder has linear regression.cpp file that contains simple ols regression
in cpp. To compile please run "g++ --std=c++11 linear_reg.cpp" from cmd.
The problem formulation is as follows:

              1) We have initialised x from 1 through 1000
              2) We have initialised y as an affine function of x, in that
              y = 3+2*(x+noise), noise is generated randomly between (0,1)

The code contains 4 functions;

              - cost_func that computes the average OLS
              - cost_derivative that computes the cost derivative w.r.t weights/biases
              - cost_derivative_for_algo same as above function but this function is called from the
              gradient descent func
              - grad_descent that updates the weights, for now, bias is initialised to
              6 and wt to -5, when we compile and run the program, we see that wt update happens
              very quickly though bias iteratively, slowly approaches to 3. If you want, you could replace it by random wts as init_bias, and init_wt respectively.

N.B Care must be taken, if no of examples generated is changed to 1000 in step(1) to say 10,000 then learning rate must be changed accordingly by trial and error to ensure convergence!
