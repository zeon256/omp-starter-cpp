#include <omp.h>

#include <cstdio>
#include <cstdlib>

int main() {

// parallel part
#pragma omp parallel
    {
        printf("Hello World... from thread = %d\n", omp_get_thread_num());
    }
}