#include<stdio.h>
#include<omp.h>

int main() 
{
    printf("\n Number of threads running: %d", omp_get_num_threads());

    # pragma omp parallel

    printf("\n Number of threads running: %d", omp_get_num_threads());
    
    return 0;
}
