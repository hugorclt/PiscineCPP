#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

~Zombie::Zombie(void)
{
	std::cout << "Destroy " + this.name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this.name + ": BraiiiiiiinnnzzzZ" << std::endl
}