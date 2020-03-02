#include <iostream>
#include "Proto.hpp"
#include <cmath>
Complex::Complex() {
 	real=0, imag=0;
}

Complex::Complex(double i, double j) {
	real = i;
	imag = j; 
}

Complex::Complex(const Complex &comp) {
	real = comp.real;
	imag = comp.imag;
}

Complex::~Complex() {
	;
}

double Complex::getreal() const {
	return real;
}

double Complex::getimag() const {
	return imag;
}

void Complex::print() {

	if(imag<0) {
		std::cout << real << " + " << -1* imag << "i" << std::endl;
	}
	else {
		std::cout << real << " - " << imag << "i" << std::endl;
	}
}

Complex Complex::add(Complex I) {

	Complex K;
	K.real= real + I.real;
	K.imag= imag + I.imag;

	return K;
}

Complex Complex::sub(Complex I) {

	Complex K;
	K.real= real - I.real;
	K.imag= imag - I.imag;

	return K;
}

Complex Complex::mult(Complex I) {

	Complex K;
	K.real=I.real * real - I.imag * imag; 
	K.imag=I.imag * imag + I.real * real;

	return K;
}

Complex Complex::div(Complex I) {

	double denom= I.magnitude() * I.magnitude();
	
	if(denom==0){
		denom=1;
	}

	Complex K=mult(I.complex_conj());
	K.real = K.real/denom;
	K.imag = K.imag/denom;

	return K;
}

Complex Complex::complex_conj() const {

	Complex K(*this);
	K.imag*=-1;

	return K;
}

double Complex::magnitude() const {

	double K = sqrt((real * real) + (imag * imag));

	return K;

}

double Complex::Phase() const {

	double pha = atan(imag/real);
	pha*=(180/M_PI);

	return (pha<0) ? -pha : pha;

}


Complex Complex::operator+(Complex K) {

	Complex result(add(K));

	return result;

}

Complex Complex::operator-(Complex K) {

	Complex result(sub(K));

	return result;

}

Complex Complex::operator*(Complex K) {

	Complex result(mult(K));

	return result;

}

Complex Complex::operator/(Complex K) {

	Complex result(div(K));

	return result;

}

Complex Complex::operator=(Complex K) {

	real=K.real;
	imag=K.imag;

	return *this;

}

std::ostream &operator<<(std::ostream &out, const Complex &K) {

	out << K.real << " " << K.imag;
	
	return out;

}

std::istream &operator>>(std::istream &in, Complex &K) {

	in >> K.real >> K.imag;
	
	return in;

}
