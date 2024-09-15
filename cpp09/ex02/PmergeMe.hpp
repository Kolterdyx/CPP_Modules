//
// Created by Ciro Garcia belmonte on 3/20/23.
//

#ifndef CPP_MODULES_PMERGEME_HPP
#define CPP_MODULES_PMERGEME_HPP


#include <sstream>

#define THRESHOLD 43 // 43 is the best value for this threshold ( n <= 8 log n )

template<class T>
class PmergeMe {

private:
	T elements;

	static T mergeInsertSort(const T &elems) {
		if (elems.size() <= THRESHOLD)
			return insertionSort(elems);
		T left;
		T right;
		for (size_t i = 0; i < elems.size(); i++) {
			if (i < elems.size() / 2)
				left.push_back(elems[i]);
			else
				right.push_back(elems[i]);
		}
		left = mergeInsertSort(left);
		right = mergeInsertSort(right);

		T result;
		size_t leftIndex = 0;
		size_t rightIndex = 0;
		while (leftIndex < left.size() && rightIndex < right.size()) {
			if (left[leftIndex] < right[rightIndex]) {
				result.push_back(left[leftIndex]);
				leftIndex++;
			} else {
				result.push_back(right[rightIndex]);
				rightIndex++;
			}
		}
		while (leftIndex < left.size()) {
			result.push_back(left[leftIndex]);
			leftIndex++;
		}
		while (rightIndex < right.size()) {
			result.push_back(right[rightIndex]);
			rightIndex++;
		}
		return result;
	}

	static T insertionSort(const T &elems) {
		T result = elems;
		for (size_t i = 1; i < result.size(); i++) {
			size_t j = i;
			while (j > 0 && result[j] < result[j - 1]) {
				int temp = result[j];
				result[j] = result[j - 1];
				result[j - 1] = temp;
				j--;
			}
		}
		return result;
	}


public:
	PmergeMe() {}


	explicit PmergeMe(const T &elements)
	{
		this->elements = elements;
	}

	~PmergeMe() {}


	T sort() {
		return mergeInsertSort(elements);
	}


};

/**
 * @brief Sorts a T using the PmergeMe algorithm
 * @tparam T Must be a T that supports push_back, size, and operator[]
 * @param elements Elements to sort
 * @return sorted elements
 */
template<typename T>
T sort(T elements) {
	PmergeMe<T> pmergeMe(elements);

	return pmergeMe.sort();
}

template<typename T>
std::string to_string(T n) {
	std::stringstream ss;
	ss << n;
	return ss.str();
}

template<typename T>
T stringto(const std::string &str) {

	if (str.empty())
		throw std::invalid_argument("Empty string");
	// Check if the string is a number
	for (int i = 0; i < (int)str.size(); i++) {
		if (!std::isdigit(str[i]))
			throw std::invalid_argument("Invalid argument");
	}

	std::stringstream ss(str);
	T n;
	ss >> n;
	return n;
}


#endif //CPP_MODULES_PMERGEME_HPP
