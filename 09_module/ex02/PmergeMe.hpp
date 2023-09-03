//
// Created by Nadiia Maliarenko on 12.08.23.
//

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>

class PmergeMe {
public:
	PmergeMe();
	PmergeMe(PmergeMe &p);
	PmergeMe &operator=(PmergeMe &p);
	~PmergeMe();

	void addInput(int i);
	void printSequence(void);

	void sortVec(std::vector<int> &vec);
	void sortDeque(std::deque<int> &deque);

	void sort();
	std::vector<int> sortInsert(std::vector<int> &left, std::vector<int> &right);
	std::deque<int> sortInsert(std::deque<int> &left, std::deque<int> &right);

private:
	std::vector<int> _vector;
	std::deque<int> _deque;
};


#endif //PMERGEME_HPP
