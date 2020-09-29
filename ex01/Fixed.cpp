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

Fixed::Fixed(const int i)
{
    fixed = i << frac_bits;
}

Fixed::Fixed(const float f)
{
    fixed = (unsigned int) roundf(f * (1 << frac_bits));
}

float Fixed::toFloat(void) const
{
    return (float) fixed / (1 << frac_bits);
}

int Fixed::toInt(void) const
{
    return fixed >> frac_bits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}
