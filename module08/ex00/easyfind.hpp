
#pragma once
#include <iostream>

template<typename T>
bool easyfind(T container, int x)
{
    return std::find(
        container.begin(),
        container.end(),
        x) != container.end();
}