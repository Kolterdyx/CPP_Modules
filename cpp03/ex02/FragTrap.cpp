

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "[FragTrap] Default constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[FragTrap] Name constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "[FragTrap] Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	std::cout << "[FragTrap] Assignment operator called" << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void	FragTrap::attack(const std::string & target)
{
	if (!this->hit_points)
	{
		std::cout << "FragTrap " << this->name << " is dead! It can't attack!" << std::endl;
		return ;
	} else if (!this->energy_points)
	{
		std::cout << "FragTrap " << this->name << " is out of energy! It can't attack!" << std::endl;
		return ;
	}
	this->energy_points -= 1;
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " gives a high five!" << std::endl;
}

