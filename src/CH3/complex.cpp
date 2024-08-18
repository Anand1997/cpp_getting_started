#include "complex.h"

double 
CH3::complex::real() const
{
	return _mnRe;
}

void 
CH3::complex::real(double nRe)
{
	_mnRe = nRe;
}


double
CH3::complex::imag() const
{
	return _mnRe;
}

void
CH3::complex::imag(double nRe)
{
	_mnRe = nRe;
}

CH3::complex&
CH3::complex::operator+=(complex z)
{
	_mnIm += z._mnIm;
	_mnRe += z._mnRe;
	return *this;
}

CH3::complex&
CH3::complex::operator-=(complex z)
{
	_mnIm -= z._mnIm;
	_mnRe -= z._mnRe;
	return *this;
}