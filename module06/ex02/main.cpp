
#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
    srand(time(NULL));
    int x = rand() % 3;

    if (x == 0)
        return new A();
    else if (x == 1)
        return new B();
    return new C();
}

void identify(Base *p)
{
    if (  dynamic_cast<A*> (p)  )
        std::cout << "A" << std::endl;
    
    if ( dynamic_cast<B*> (p)  )
        std::cout << "B" << std::endl;
    
    if ( dynamic_cast<C*> (p)  )
        std::cout << "C" << std::endl;
}


void identify(Base & p)
{
    try
    {
        Base & ref = dynamic_cast<A &> (p);
        std::cout << "A" << std::endl;
        (void)ref;
    }
    catch(const std::exception & e)
    {
        try
        {
            Base & ref = dynamic_cast<B &> (p);
            std::cout << "B" << std::endl;
            (void)ref;
        }
        catch(const std::exception & e)
        {
            std::cout << "C" << std::endl;
        }
    }
}

int main()
{
    Base *p = generate();

    identify(p);
    identify(p);
    
    identify(*p);
    identify(*p);

    return 0;
}
