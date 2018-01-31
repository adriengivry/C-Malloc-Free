#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#include <stdio.h>
#include <unistd.h>

#include "../include/malloc_perso.h"

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;

    printf("Extend heap result pointer : %p\n", extend_heap(5));
    
    return EXIT_SUCCESS;
}