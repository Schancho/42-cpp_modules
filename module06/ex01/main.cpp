
#include <iostream>
#include <iomanip>

struct Data {
    std::string name;
};

uintptr_t serialize(Data * ptr)
{
    return reinterpret_cast<uintptr_t> (ptr);
}


Data *deserialize(uintptr_t ptr)
{
    return reinterpret_cast<Data *> (ptr);
}

int main ()
{
    Data A;
    A.name = "idk";
    
    uintptr_t encoded = serialize(&A);
    Data *decoded = deserialize(encoded);

    if (&A == decoded)
        std::cout << "True" << std::endl;

    std::cout << "encoded: " << encoded << std::endl;
    std::cout << "decoded: " << decoded << std::endl;
    
    std::cout << "name: " <<  decoded->name << std::endl;

    return 0;
}
