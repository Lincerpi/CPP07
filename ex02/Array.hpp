#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>

template<class T>
class Array
{		
		T* array;
		unsigned int len;

	public:
		Array(): array(NULL), len(0) {};
		~Array() { delete (array); };
		Array(unsigned int n): len(n) 
		{
			array = new T[len];
			for (unsigned int i = 0; i < len; i++)
				array[i] = 0;
		};
		Array(const Array& copy)
		{
			if (this != &copy)
			{
				len = copy.len;
				array = new T[len];
				for (unsigned int i = 0; i < len; i++)
					array[i] = copy.array[i];
			}
		};
		Array& operator=(const Array& op)
		{
			if (this != &op)
			{
				if (array)
					delete array;
				len = op.len;
				array = new T[len];
				for (unsigned int i = 0; i < len; i++)
					array[i] = op.array[i];
			}
			return (*this);
		};
		T& operator[](unsigned int i)
		{
			if (i >= len)
				throw Exception();
			return (array[i]);
		};
		unsigned int size() { return (len); };
		class Exception: public std::exception
		{	virtual const char* what() const throw() { return ("Exception!"); } }; 
};

#endif