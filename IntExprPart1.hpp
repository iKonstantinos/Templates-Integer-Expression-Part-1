/*
 * IntExprPart1.hpp
 *
 *  Created on: 10 May 2014
 *      Author: KonstantinosChalkias
 */

#ifndef INTEXPRPART1_HPP_
#define INTEXPRPART1_HPP_

#include <iostream>
#include <stdexcept>

struct X
{
	static inline int eval(int x) {
            return x;
	};
};

template<int V>
struct LIT
{
	static inline int eval(int x) {
		return (int)V;
	};
};


template<class A, class B>
struct ADDITION
{
	static inline int eval(int x) {
		return A::eval(x) + B::eval(x);
	};
};

template<class A, class B>
struct SUBSTRACTION
{
	static inline int eval(int x) {
		return A::eval(x) - B::eval(x);
	};
};

template <class A, class B>
struct MULTIPLICATION
{
    static inline int eval(int x) {
		return A::eval(x)* B::eval(x);
	};
};

template<class A, class B>
struct DIVISION
{
	static inline int eval(int x) {
		if (B::eval(x)>0 || B::eval(x)<0)
		{
		return A::eval(x) / B::eval(x);
		}
		else{
			throw std::overflow_error("Divide by zero exception");
			    //return A::eval(x) / B::eval(x);
			printf("Lathos");
		}
	};
};



#endif /* INTEXPRPART1_HPP_ */
