#include <iostream>
#include <algorithm>

bool findTriplets(int arr[], int n) {
	std::sort(arr, arr+n);
	for(int i = 0; i < n - 2; i++) {
		
		int j = i + 1;
		int k = n - 1;

		while(j < k) {
			if(arr[i] + arr[j] + arr[k] == 0) {
				return true;
			} else if (arr[i] + arr[j] + arr[k] > 0) {
				--k;
			} else {
				++j;
			}
		}
	}

	return false;
}

int main() {
	int cases;
	int n;

	std::cin >> cases;
	while(cases) {
		std::cin >> n;
		int arr[n];
		for(int i = 0; i < n; ++i)
			std::cin >> arr[i];

		std::cout << findTriplets(arr, n) << std::endl;
		--cases;
	}
}