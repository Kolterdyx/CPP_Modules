
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
public:
	Cat(void);
	Cat(const Cat& src);
	~Cat(void);

	Cat & operator=(const Cat& rhs);

	void makeSound(void) const;
};

#endif // CAT_HPP