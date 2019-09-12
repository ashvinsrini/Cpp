This folder does a computation time comparison between cpp and python program.
Both scripts performs a factorial computation for the number 10, with 10,000,000 iterations.
Each iteration is performing the same calculation, multiple iterations are introduced just to increase
the total computation time.

      
      - facotorial.cpp is the cpp program that performs the computation. To compile the
      script:
            1) run "g++ factorial.cpp" from the terminal to create the executable file
            2) run "time ./a.out ; echo Process returned $?" to echo the time taken in the terminal

      - factorial.py is the python script that performs the same computation of 10 factorial with 10 million iterations:
            1) Run "python factorial.py" to print out the output


Conclusion
As can be seen from the screen shots; 10million_python and 10million_cpp,
Python takes 10 seconds to perform the same operations where as cpp takes about 0.18 seconds. This just grows non linearly with increase in iterations. So writing cpp codes can reduce computation time for real time environment constraints. Since cpp is already pre compiled and has static type definitions, it is less prone to any subtle errors.
