# Exam Solution Code
This is my take on how the solutions for the exam questions could have been. But you can feel free to make modifications to any of them. 

## Question 3

```c
#include <stdio.h>

//Define the functions for each question
int factorial(int n);
int init_array();


int main(){
    int fact = factorial(0);
    printf("\n%d\n", fact);
}

int factorial(int n){
    if (n == 0){
        return 1;
    }
    
    else if (n == 1)
    {
        return 1;
    }
    
    else{
        return n * factorial(n-1);
    }
    
}
```