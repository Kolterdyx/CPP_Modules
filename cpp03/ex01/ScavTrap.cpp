
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()
{
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "[ScavTrap] Name constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
	: ClapTrap(copy)
{
	std::cout << "[ScavTrap] Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "[ScavTrap] Assignment operator called" << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " has entered Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->hit_points)
	{
		std::cout << "ScavTrap " << this->name << " is dead! It can't attack!" << std::endl;
		return ;
	}
	else if (!this->energy_points)
	{
		std::cout << "ScavTrap " << this->name << " is out of energy! It can't attack!" << std::endl;
		return ;
	}
	this->energy_points -= 1;
	std::cout << "ScavTrap " << this->name << " attacks " << target
		<< ", causing " << this->attack_damage << " points of damage!" << std::endl;
}
