/*
Program to compute the number or molecules in an amount of hydrocarbon
*/
#include <stdio.h>
#include <math.h>
float molecular_mass(float mass, float n_carbon, float n_hydrogen, float molecules,float molecular_weight);
float training_zone();
int main(){
    float ans = training_zone();
    printf((float)ans);
    return 0;
}

float molecular_mass(float mass, float n_carbon, float n_hydrogen, float molecules,float molecular_weight){
    printf("\nEnter the required details");printf("\n");
    scanf("%f", &mass); scanf(" %d", &n_carbon); scanf(" %d", &n_hydrogen);
    molecules = mass * (1.0/ molecular_weight) * (6.02 * exp(23)/ 1.0);
    printf("%.2f grams of hydrocarbon with %d carbon atom(s) and %d", molecular_weight, n_carbon, n_hydrogen); 
    printf(" hydrogen atoms contains %.2f molecules", molecules);    
    printf("\n") ;
}

float training_zone(){
    int age;
    const set_point = 220.0;
    float l_range, h_range;
    printf("\nEnter your age: ");scanf("%d\n", &age);
    l_range = 0.72 * (set_point - age);   
    h_range = 0.87 * (set_point - age);
    printf("Your training zone is between %f and %f ", l_range, h_range);
}