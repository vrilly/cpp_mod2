// Created by Tom Jans on 01-08-20.
#include "Fixed.hpp"

Fixed::Fixed()
    : fixed(3)
{
    std::cout << "Default constructor" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor" << std::endl;
    this->fixed = fixed.fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor constructor" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Assignment operator" << std::endl;
    fixed = src.fixed;
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getrawbits" << std::endl;
    return fixed;
}

void Fixed::setRawBits(const int raw)
{
    fixed = raw;
}
