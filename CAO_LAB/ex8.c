#include<stdio.h>
#include<omp.h>

int main() 
{
    
    #pragma omp parallel for
    
    for(int i=0;i < 4; i++) 
    {
        printf("\n Iteration: %d",i);
    }
}
