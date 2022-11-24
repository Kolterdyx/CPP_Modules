
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "Assignment operator called" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string & target)
{
	if (!this->hit_points)
	{
		std::cout << "ClapTrap " << this->name << " is dead! It can't attack!" << std::endl;
		return ;
	} else if (!this->energy_points)
	{
		std::cout << "ClapTrap " << this->name << " is out of energy! It can't attack!" << std::endl;
		return ;
	}
	this->energy_points -= 1;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hit_points)
	{
		std::cout << "ClapTrap " << this->name << " is dead! It can't repair itself!" << std::endl;
		return ;
	} else if (!this->energy_points)
	{
		std::cout << "ClapTrap " << this->name << " is out of energy! It can't repair itself!" << std::endl;
		return ;
	}
	this->hit_points += amount;
	this->energy_points -= 1;
	std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
}
