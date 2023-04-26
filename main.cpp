#include "mbed.h" //call mbed library

int nth_term = 9;   //define the Fibonacci sequence length as 9
int fib(int n);     //define fib as n integer

int main() {        //start main program
    printf("Lab Program Recursive \r\n");  //print information for user and go to next line  
    for(int i=0; i<nth_term; i++) { //start for loop, if set i to 0, check if under 9, increase by 1
        printf("%d, ", fib(i));     //print the n value
    }               //close for loop
    printf("....\r\n"); //print 4 periods after for loop closes  
}               //close main program

int fib(int n)      //define fib as n integer for recursive loop
                    //recursive allows one or more functions to be processes outside of main loop
                    //and can allow prosessing in blocks or sections 
{           //start if loop code executed before main     
if (n==0) return 0; //evaluate and if n equals 0 set to 0 to give 0 and 1 to start sequence
if (n==1) return 1; //evaluate and if n equals 1 set to 1
else                //if not 1 or 0 got to else loop
    {                  //start return loop
    return (fib(n-1)+fib(n-2)); // gived Fibonacci values starting at 0 + 1=1
    }               //close return loop
}           //close if loop 