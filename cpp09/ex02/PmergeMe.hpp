//
// Created by Ciro Garcia belmonte on 3/20/23.
//

#ifndef CPP_MODULES_PMERGEME_HPP
#define CPP_MODULES_PMERGEME_HPP


#include <array>
#include <vector>

#define THRESHOLD 50

template<class container>
class PmergeMe {

private:
	container elements;

	static container mergeInsertSort(const container &elems) {
		if (elems.size() <= THRESHOLD)
			return insertionSort(elems);
		container left;
		container right;
		for (size_t i = 0; i < elems.size(); i++) {
			if (i < elems.size() / 2)
				left.push_back(elems[i]);
			else
				right.push_back(elems[i]);
		}
		left = mergeInsertSort(left);
		right = mergeInsertSort(right);

		container result;
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

	static container insertionSort(const container &elems) {
		container result = elems;
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


	explicit PmergeMe(const container &elements)
	{
		this->elements = elements;
	}

	~PmergeMe() {}


	container sort() {
		return mergeInsertSort(elements);
	}


};


#endif //CPP_MODULES_PMERGEME_HPP
