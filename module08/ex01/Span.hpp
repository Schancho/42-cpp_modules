
#pragma once

#include <iostream>
#include <vector>

class Span
{
private:
    std::vector<int> v;
    size_t _size;
public:
    Span();
    Span(unsigned int sz);
    Span(Span const& obj);
    ~Span();

    Span& operator=(const Span& obj);

    void addNumber(int x);

    template<typename T>
    void    addRange(T a, T b)
    {
        v.insert(v.end(), a, b);
        _size = v.size();
    }

    int  shortestSpan();
    int  longestSpan();
    

    size_t getSize() const;



    class EmptySpan : public std::exception
    {
        const char* what() const throw()
        {
            return "Span is empty";
        }
    };

    class FullSpan : public std::exception
    {
        const char* what() const throw()
        {
            return "Span is full";
        }
    };
};

