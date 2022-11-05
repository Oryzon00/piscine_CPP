#include "serialize.hpp"

int	main(void)
{
	Data	objet;

	std::cout << "ptr origine:\t\t\t" << &objet << std::endl;
	std::cout << "ptr serialize-deserialize:\t" << deserialize(serialize(&objet)) << std::endl;
	return (0);
}
