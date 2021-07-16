#include "iter.hpp"

int main()
{

	int a[] = {42, -42, 0, 4242, -0, +2424};
	::iter<int>(a, 6, ft_print);

	return (0);
}