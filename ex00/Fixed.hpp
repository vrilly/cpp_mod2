// Created by Tom Jans on 01-08-20.
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    int fixed;
    static const int frac_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &fixed);
    ~Fixed();
    Fixed &operator=(const Fixed &src);
    int getRawBits() const;
    void setRawBits(int const raw);
};


#endif //FIXED_HPP
