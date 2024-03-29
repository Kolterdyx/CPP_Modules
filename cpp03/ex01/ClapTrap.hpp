

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
// Had to make these protected to allow ScavTrap to access them
protected:
	std::string		name;
	int	hit_points;
	int	energy_points;
	int	attack_damage;


public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& copy);

	void	attack(std::string const& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif // CLAPTRAP_HPP
