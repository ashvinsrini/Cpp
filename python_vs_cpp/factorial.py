#iterations = int(input("Enter number of iterations"))
#num = int(input('Enter factorial number'))
import time
iterations = 10000000
num = 10
def factorial(num):
    res =1;
    for j in range(1,num+1):
        res*=j
    return res 


start_time = time.time()
for i in range(0, iterations):
    result = factorial(num)
print('Total time taken:', time.time()-start_time)

print('iterations: ', iterations, 'Result:', result )    
    
   