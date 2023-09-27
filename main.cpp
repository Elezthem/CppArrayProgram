#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	float nums[4];
	for (int i = 0; i < 4; i++) {
		cout << "Enter num " << i << ": ";
		cin >> nums[i];
	}

	float sum = 0;
	float min = nums[0];
	for (int i = 0; i < 4; i++) {
		sum += nums[i];
		if (nums[i] < min)
			min = nums[i];
	}
	cout << "Sum: " << sum << endl;
	cout << "Min: " << min << endl;

	for (int i = 0; i < 4; i++) {
		cout << "Element: " << nums[i] << endl;
	}

	return 0;
}