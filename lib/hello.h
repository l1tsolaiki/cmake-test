#include <cstddef>

class Hello
{
public:
    void greet() const;

    void * get_memory(std::size_t size) const;

    void release_memory(void * ptr) const;
};
