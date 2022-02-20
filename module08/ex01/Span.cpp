
#include "Span.hpp"

Span::Span() : _size(0)
{
    
}

Span::Span(unsigned int sz) : _size(sz)
{

}

Span::~Span()
{

}

Span::Span(Span const &obj) : v(obj.v), _size(obj._size)
{

}

Span    & Span::operator=(const Span &obj)
{
    if (this != &obj)
    {
        v = obj.v;
        _size = obj._size;
    }
    return *this;
}
  
void    Span::addNumber(int x)
{
    if (_size == 0)
        throw FullSpan();
    v.push_back(x);
    _size--;

}

int Span::shortestSpan()
{
    if (v.size() < 2)
        throw EmptySpan();
    std::sort(v.begin(), v.end());

    int curr_span = abs(v[0] - v[1]);

    for (size_t i = 0; i < v.size() - 1; i++)
        curr_span = std::min(curr_span, abs(v[i] - v[i + 1]));
    return curr_span;
}

int Span::longestSpan()
{
    if (v.size() < 2)
        throw EmptySpan();
    std::sort(v.begin(), v.end());
    return v[v.size() - 1] - v[0];
}

size_t Span::getSize() const
{
    return _size;
}