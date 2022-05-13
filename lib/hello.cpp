#include "hello.h"

#include <iostream>

#include <mimalloc.h>

void Hello::greet() const
{
    std::cout << "greetings!" << "\n";
}

void * Hello::get_memory(std::size_t size) const
{
    return mi_malloc(size);
}

void Hello::release_memory(void * ptr) const
{
    return mi_free(ptr);
}