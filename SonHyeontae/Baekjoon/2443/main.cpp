#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = n; i > 0; i--) {
		for (int j = 0; j < (2 * i) - 1; j++) std::cout << '*';
		std::cout << '\n';
		for (int k = 0; k <= n - i; k++) std::cout << ' ';
	}

	return 0;
}