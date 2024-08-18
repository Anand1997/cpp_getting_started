#pragma once 

namespace CH3
{

/**
 * @file complex.h
 * @brief Declaration of the complex class.
 * 
 *
 * @author ag_narawade
*/
class complex 
{
public: ///////////////////////////////////////////////////////////////////////
	complex()
		: _mnRe(0), _mnIm(0) {}

	complex(double nRe, double nIm)
		: _mnRe(nRe), _mnIm(nIm) {}

	complex(double nRe)
		: _mnRe(nRe), _mnIm(0) {}

	/// Static Polymorphism example 
	/// The "const" key word after function 
	/// indicates that the function 
	/// will not modify any of the class members
	/// 
	double real() const;    
	void real(double nRe);
	
	double imag() const;
	void imag(double nIm);

	/// Operator overloading
	///
	complex& operator+=(complex z);
	complex& operator-=(complex z);

	complex& operator*=(complex z);
	complex& operator/=(complex z);

private: ///////////////////////////////////////////////////////////////////////
	double _mnRe; 
	double _mnIm;
};/// complex /////////////////////////////////////////////////////////////////

} /// CH3 /////////////////////////////////////////////////////////////////////
