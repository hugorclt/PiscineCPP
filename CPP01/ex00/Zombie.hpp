#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

Class Zombie{
	public :

	void	announce(void);
	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);

	private :
	std::string name;
};

#endif 