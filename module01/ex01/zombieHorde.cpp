#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0 )
		return (NULL);
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
//int i = 0		indice che parte dal primo zombie
//i < N
//i++		dopo ogni giro i aumenta di uno e quindi passi allo zombie successivo

/* horde[i].set_name(name);

Qui:

horde[i] → Zombie in posizione i

. perché NON è un puntatore, è un oggetto

chiami set_name per assegnargli il nome*/
