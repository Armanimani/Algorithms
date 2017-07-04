#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#include "algorithms.hpp"

int main()
{
	std::vector<int> v {2, 3, 6, 5, 1, 4};
	std::for_each(v.begin(), v.end(), [](int value) { std::cout << value << " "; });
	std::cout << std::endl;

	alg::insertation_sort(v.begin(), v.end());
	std::for_each(v.begin(), v.end(), [](int value) { std::cout << value << " "; });
	std::cout << std::endl;

	alg::insertation_sort(v.begin(), v.end(), [](auto lhs, auto rhs) { return rhs < lhs; });
	std::for_each(v.begin(), v.end(), [](int value) { std::cout << value << " "; });
	std::cout << std::endl;
	return 0;
}