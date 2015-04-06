#include "MultidimensionalFor.h"

#include <vector>
#include <iostream>

int main(void)
{
	std::vector<int> from(3);
	from[0] = 3;
	from[1] = 0;
	from[2] = 0;

	std::vector<int> to(3);
	to[0] = 4;
	to[1] = 4;
	to[2] = 4;

	MultidimensionalFor it(from, to);

	while(it.hasNext())
	{
		it.next();

		std::cout << it[0] << "; " << it[1] << "; " << it[2] << std::endl;
	}

	return 0;
}
