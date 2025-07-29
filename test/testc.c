#include <stdio.h>
#include "test_file_module.c"

int main()
{
    printf("hello world from C\n");

    test_file_module_func();
    return 0;
}