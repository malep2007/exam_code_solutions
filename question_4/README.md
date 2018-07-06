# Exam Solution Code
This is my take on how the solutions for the exam questions could have been. But you can feel free to make modifications to any of them. 

## Question 4

```c
#include <stdio.h>
#define SIZE 10
//Question 4 c
void init_array();
void add_ten_to_array();
void show_array();
int array[SIZE] = {0,0,0,0,0,0,0,0,0,0};

int main(){
    init_array();
    add_array();
    show_array();
}

void init_array(){
    for (int i =0; i < SIZE; i++){
        array[i] = i+1;
    }
}

void add_ten_to_array(){
    for (int i =0; i < SIZE; i++){
        array[i] = i+10;
    }
}

void show_array(){
    for(int i = 0; i<10; i++){
        printf("%d ",array[i]);
    }
}
```