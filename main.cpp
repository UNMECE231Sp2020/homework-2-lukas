#include <iostream>

int main() {
	Complex c1;
	c1.print();

	Complex c2(1.0);
	c2.print();

	Complex c3(3.0, 4.0);
	c3.print();

	Complex c4(5.0, 12.0);

	std::cout << std::endl;

	c1=c3.add(c4);
	c1.print();
	std::cout << "Should be 8 + 16j" << std::endl;

	c2=c3.sub(c4);
	c2.print();
	std::cout << "Should be -2 - 8j" << std::endl;

	c1 = c3.mult(c4);
	c1.print();
	std::cout << "Should be -33 + 56j" << std::endl;

	c2 = c3.div(c4);
	c2.print();
	std::cout << "Should be 0.372791 - 0.0946746j" << std::endl;

	//Magnitude
	std::cout << "Magnitude: " << c3.magnitude() << " should be 5" << std::endl;
	std::cout << "Magnitude: " << c4.magnitude() << " should be 13" << std::endl;

	//Phase
	std::cout << "Phase: " << c3.phase() << " should be 53.1301" << std::endl;
	std::cout << "Phase: " << c4.phase() << " should be 67.3801" << std::endl;

	std::cout << "Testing overloaded operators" << std::endl;

	std::cout << c3 + c4 << std::endl;
	std::cout << c4 - c3 << std::endl;
	std::cout << c3 * c4 << std::endl;
	std::cout << c3 / c4 << std::endl;

	return 0;
}
