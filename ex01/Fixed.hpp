// Created by Tom Jans on 01-08-20.
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    unsigned int fixed;
    static const int frac_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int i);
    Fixed(const float f);
    ~Fixed();
    Fixed &operator=(const Fixed &src);
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif //FIXED_HPP
