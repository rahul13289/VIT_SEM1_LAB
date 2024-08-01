#include<stdio.h>
#include<stdbool.h>
#include<omp.h>

int main() 
{
    //Serial return 0	
    printf("\nParallel? %d",omp_in_parallel());

    #pragma omp parallel
    
    //Parellel return 1
    printf("\nParallel? %d",omp_in_parallel());
}
