#include <stdio.h>

#include <hello.h>

int main()
{
    Hello hello;
    hello.greet();

    void * ptr;
    int num;
    printf("(ptr = %p) Enter a number: ", ptr);
    scanf("%d", &num);
    void * second_ptr = hello.get_memory(56);
    void * huge_ptr = hello.get_memory(59);
    hello.release_memory(second_ptr);
    hello.release_memory(huge_ptr);
    return 0;
}