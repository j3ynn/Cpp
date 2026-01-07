#include "Zombie.hpp"

int main()
{
	int n = 2;
	Zombie* horde = zombieHorde(n, "checco glione");

	for (int i = 0 ; i < n; ++i)
		horde[i].announce();

	delete[] horde;
	return (0);
}
