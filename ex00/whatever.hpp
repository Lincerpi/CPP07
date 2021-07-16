#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string>
#include <iostream>

template<class T>
void swap(T& a, T& b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template<class T>
T min(T first, T second)
{
	return (first > second ? second : first);
}

template<class T>
T max(T first, T second)
{
	return (first > second ? first : second);
}

#endif