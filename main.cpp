#include <iostream>

using namespace std;

int main() {

	int a, b, * ptr_a, * ptr_b;

	cout << "Enter two numbers: ";

	cin >> a >> b;


	ptr_a = &a;

	ptr_b = &b;


	if (*ptr_a > *ptr_b) {

		cout << *ptr_a << " is the maximum number." << endl;

	}
	else {

		cout << *ptr_b << " is the maximum number." << endl;

	}

	return 0;

}

#include <iostream>

int main() {

	int num;

	std::cout << "Enter a number: ";

	std::cin >> num;

	if (*(&num) < 0) {

		std::cout << "The number is negative." << std::endl;

	}

	else if (*(&num) > 0) {

		std::cout << "The number is positive." << std::endl;

	}

	else {

		std::cout << "The number is zero." << std::endl;

	}

	return 0;

}



#include <iostream>

int main() {

	int a, b;

	std::cout << "Enter two numbers: ";

	std::cin >> a >> b;

	int* ptrA = &a;

	int* ptrB = &b;

	int temp = *ptrA;

	*ptrA = *ptrB;

	*ptrB = temp;

	std::cout << "Swapped numbers: " << a << " " << b << std::endl;

	return 0;

}


#include <iostream>

int main() {

	int a, b;

	char op;

	std::cout << "Enter an operation (+, -, *, /): ";

	std::cin >> op;

	std::cout << "Enter two numbers: ";

	std::cin >> a >> b;

	int* ptrA = &a;

	int* ptrB = &b;

	int result;

	switch (op) {

	case '+':

		result = *ptrA + *ptrB;

		std::cout << "Result: " << result << std::endl;

		break;

	case '-':

		result = *ptrA - *ptrB;

		std::cout << "Result: " << result << std::endl;

		break;

	case '*':

		result = *ptrA * *ptrB;

		std::cout << "Result: " << result << std::endl;

		break;

	case '/':

		if (*ptrB == 0) {

			std::cout << "Error: division by zero." << std::endl;

		}

		else {

			result = *ptrA / *ptrB;

			std::cout << "Result: " << result << std::endl;

		}

		break;

	default:

		std::cout << "Invalid operation." << std::endl;

		break;

	}

	return 0;

}