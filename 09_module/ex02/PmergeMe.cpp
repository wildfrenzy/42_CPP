//
// Created by Nadiia Maliarenko on 12.08.23.
//

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe &p) {
	this->_deque = p._deque;
	this->_vector = p._vector;
}

PmergeMe &PmergeMe::operator=(PmergeMe &p) {
	if (this != &p)
	{
		this->_deque = p._deque;
		this->_vector = p._vector;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::addInput(int i) {
	this->_vector.push_back(i);
	this->_deque.push_back(i);
}

void PmergeMe::printSequence() {
	size_t end;

	end = (this->_vector.size() > 10) ? 10 : this->_vector.size();
	for (size_t i = 0; i < end; ++i) {
		std::cout << this->_vector.at(i) << " ";
	}
	if (end < this->_vector.size())
		std::cout << "[...]";
	std::cout << std::endl;
/*
	std::deque<int>::iterator dit;
	std::cout << "Deque:" << std::endl;
	for (dit = this->_deque.begin(); dit != this->_deque.end() ; ++dit) {
		std::cout << *dit << " ";
	}
	std::cout << std::endl;*/
}

void PmergeMe::sort() {
	clock_t start, end;

	start = clock();
	sortVec(this->_vector);
	end = clock();

	std::cout << "After:\t";
	printSequence();

	std::cout << "Time to process range of " << this->_vector.size()
				<< " elements with std::vector : "
				<< double(end - start) / CLOCKS_PER_SEC * 1000 << " ms" << std::endl;

	start = clock();
	sortDeque(this->_deque);
	end = clock();
	std::cout << "Time to process range of " << this->_deque.size()
			  << " elements with std::deque : "
			  << (double)(end - start) / CLOCKS_PER_SEC * 1000 << " ms" << std::endl;

/*	if (!std::is_sorted(this->_vector.begin(), this->_vector.end()))
		std::cout << "Vector is not sorted" << std::endl;
	if (!std::is_sorted(this->_deque.begin(), this->_deque.end()))
		std::cout << "Deque is not sorted" << std::endl;*/
}

void PmergeMe::sortVec(std::vector<int> &vec) {
	std::vector<int> left;
	std::vector<int> right;
	size_t middle;

	if (vec.size() < 2) return ;
	middle = vec.size() / 2;
	left = std::vector<int>(vec.begin(), vec.begin() + middle);
	right = std::vector<int>(vec.begin() + middle, vec.end());

	sortVec(left);
	sortVec(right);

	vec = sortInsert(left, right);
}

std::vector<int> PmergeMe::sortInsert(std::vector<int> &left, std::vector<int> &right) {
	std::vector<int> result;
	std::vector<int>::iterator leftIt = left.begin();
	std::vector<int>::iterator rightIt = right.begin();

	while (leftIt != left.end() && rightIt != right.end()){
		if (*leftIt < *rightIt){
			result.push_back(*leftIt);
			leftIt++;
		} else{
			result.push_back(*rightIt);
			rightIt++;
		}
	}
	for (; leftIt != left.end() ; leftIt++) {
		result.push_back(*leftIt);
	}
	for (; rightIt != right.end() ; rightIt++) {
		result.push_back(*rightIt);
	}
	return result;
}

void PmergeMe::sortDeque(std::deque<int> &deque) {
	std::deque<int> left;
	std::deque<int> right;
	size_t middle;

	if (deque.size() < 2) return ;
	middle = deque.size() / 2;
	left = std::deque<int>(deque.begin(), deque.begin() + middle);
	right = std::deque<int>(deque.begin() + middle, deque.end());

	sortDeque(left);
	sortDeque(right);

	deque = sortInsert(left, right);
}

std::deque<int> PmergeMe::sortInsert(std::deque<int> &left, std::deque<int> &right) {
	std::deque<int> result;
	std::deque<int>::iterator leftIt = left.begin();
	std::deque<int>::iterator rightIt = right.begin();

	while (leftIt != left.end() && rightIt != right.end()){
		if (*leftIt < *rightIt){
			result.push_back(*leftIt);
			leftIt++;
		} else{
			result.push_back(*rightIt);
			rightIt++;
		}
	}
	for (; leftIt != left.end() ; leftIt++) {
		result.push_back(*leftIt);
	}
	for (; rightIt != right.end() ; rightIt++) {
		result.push_back(*rightIt);
	}
	return result;
}