#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			std::cout << ' ';
		}
		for (int k = n - i; k > 0; k--) {
			std::cout << '*';
		}
		std::cout << '\n';
	}

	return 0;
}