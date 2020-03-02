#include <iostream>
// This is the structure that will contain the primary data members.
class Complex {
	private:
	
		double real;
		double imag;
	

public:

//Constructors and Destructors
	Complex();
	Complex(double i, double j); 
	Complex(const Complex &comp);
	
	~Complex();
//Functions are below here.
	double getreal() const;
	double getimag() const;
	void print();

	Complex add(Complex I);
	Complex sub(Complex I);
	Complex mult(Complex I);
	Complex div(Complex I);
	Complex complex_conj() const;
	double magnitude() const;
	double Phase() const;
		
	//Overloaded Operators
	
	Complex operator+(Complex K);
	Complex operator-(Complex K);
	Complex operator*(Complex K);
	Complex operator/(Complex K);
	Complex operator=(Complex K);
	friend std::ostream &operator<<(std::ostream &out, const Complex &K);
	friend std::istream &operator>>(std::istream &in, Complex &K);

};
