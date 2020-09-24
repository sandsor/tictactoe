#include <iostream>



int main()
{
	char numbers[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	for (int i = 0; i < 9; i++) {
		if (i % 3 == 0) {
			std::cout << "\n\n";
		}
		std::cout << "\t" << numbers[i] << " ";
	}

	return 0;
}
