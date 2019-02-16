/*
Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

You can modify the input array in-place.
*/

#include <iostream>
#include <set>
#include <string>

int missingnumber(std::set<int> arr) {
	int result = 0;
	for each (int item in arr)
	{
		if (item <= 0) {
			result = -1;
			continue;
		}
		if (result == -1) {
			if (item == 1) {
				result = item;
			}
			else
				return 1;
		}
		else if(result == 0){
			result = item;
		}
		else {
			if (result + 1 == item) {
				result = item;
			}
			else
				return result + 1;
		}
		
	}
	return result + 1;
}

void main() {
	std::set<int> arr;
	int total;

	
	std::cout << "Enter total # of inputs: ";
	std::cin >> total;

	for (int i = 0; i < total; i++) {
		int temp;
		std::cout << "Enter number " + std::to_string(i + 1) + ": ";
		std::cin >> temp;
		arr.insert(temp);
	}
	
	std::cout << "Missing number: " << missingnumber(arr) << std::endl;

	system("pause");
}