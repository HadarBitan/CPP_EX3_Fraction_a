#include <iostream>
#include <string>
#include "Fraction.hpp"


namespace ariel
{
    Fraction::Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    //Binary operatoes on the fraction
    //performing the operator with another fraction: fraction +,-,*,/ fraction
    Fraction Fraction::operator+(const Fraction& f){return f;}

    Fraction Fraction::operator-(const Fraction& f){return f;}

    Fraction Fraction::operator*(const Fraction& f){return f;}

    Fraction Fraction::operator/(const Fraction& f){return f;}

    //performing the operator with a number: fraction +,-,*,/ float
    Fraction Fraction::operator+(float value)
    {
        Fraction a(5,3);
        return a;
    }

    Fraction Fraction::operator-(float value)
    {
        Fraction a(5,3);
        return a;
    }

    Fraction Fraction::operator*(float value)
    {
        Fraction a(5,3);
        return a;
    }

    Fraction Fraction::operator/(float value)
    {
        Fraction a(5,3);
        return a;
    }

    //performing the operator with a number: float +,-,*,/ fraction
    Fraction operator+(float value, const Fraction& f){return f;}

    Fraction operator-(float value, const Fraction& f){return f;}

    Fraction operator*(float value, const Fraction& f){return f;}

    Fraction operator/(float value, const Fraction& f){return f;}

    //increasing and decreasing by one
    //prefix operators
    Fraction Fraction::operator++()
    {
        Fraction a(5,3);
        return a;
    }

    Fraction Fraction::operator--()
    {
        Fraction a(5,3);
        return a;
    }

    //postfix operators
    Fraction Fraction::operator++(int)
    {
        Fraction a(5,3);
        return a;
    }

    Fraction Fraction::operator--(int)
    {
        Fraction a(5,3);
        return a;
    }

    //boolean operators on the fraction
    //performing the operator with another fraction: fraction >,<,== fraction
    bool Fraction::operator>(const Fraction& f){return true;}

    bool Fraction::operator<(const Fraction& f){return true;}

    bool Fraction::operator>=(const Fraction& f){return true;}

    bool Fraction::operator<=(const Fraction& f){return true;}

    bool Fraction::operator==(const Fraction& f){return true;}

    //performing the operator with number: fraction >,<,== float
    bool Fraction::operator>(float value){return true;}

    bool Fraction::operator<(float value){return true;}

    bool Fraction::operator>=(float value){return true;}

    bool Fraction::operator<=(float value){return true;}

    bool Fraction::operator==(float value){return true;}

    //performing the operator with number: float >,<,== fraction
    bool operator>(float value, const Fraction& f){return true;}

    bool operator<(float value, const Fraction& f){return true;}

    bool operator<=(float value, const Fraction& f){return true;}

    bool operator>=(float value, const Fraction& f){return true;}
    
    bool operator==(float value, const Fraction& f){return true;}

    //std operators
    std::ostream& operator<<(std::ostream& os, const Fraction& f){return os;}

    std::istream& operator>>(std::istream& is, Fraction& f){return is;}
}