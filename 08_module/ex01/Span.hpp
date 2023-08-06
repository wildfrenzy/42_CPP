//
// Created by Nadiia Maliarenko on 06.08.23.
//

#ifndef SPAN_HPP
#define SPAN_HPP

class Span {
public:
	Span();
	Span(unsigned int N);
	Span(Span const &s);
	Span &operator=(Span const &s);
	~Span();

	void addNumber(int num);
	void addNumber(unsigned int start, unsigned int end);

	unsigned int longestSpan(void);
	unsigned int shortestSpan(void);

private:
	unsigned int _N;
	unsigned int _len;
	int *_arr;
};


#endif //SPAN_HPP
