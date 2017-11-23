#include "Asteroid.hpp"
#include <iostream>
// STATIC ########################################################

// ###############################################################

// CANONICAL #####################################################

Asteroid::Asteroid ( unsigned int posX, unsigned int posY ) : AEntity()
{
	this->_posX = posX;
	this->_posY = posY;
	this->_sizeX = 11;
	this->_sizeY = 6;
	this->_value = 3;
	this->_life = 3;
	return ;
}

Asteroid::Asteroid ( Asteroid const & src )
{
	*this = src;
	return ;
}

Asteroid &				Asteroid::operator=( Asteroid const & rhs )
{
	if (this != &rhs)
	{
		this->_life = rhs.getLife();
		this->_armor = rhs.getArmor();
		this->_speed = rhs.getSpeed();
		this->_posX = rhs.getPosX();
		this->_posY = rhs.getPosY();
	}
	return (*this);
}

Asteroid::~Asteroid ( void )
{
	return ;
}

// ###############################################################

// CONSTRUCTOR POLYMORPHISM ######################################

// ###############################################################

// OVERLOAD OPERATOR #############################################

// ###############################################################

// PUBLIC METHOD #################################################

std::string					Asteroid::display( void )
{
	static std::string src[9] = {"   _..._\n .:::::::.\n:::::::::::\n:::::::::::\n`:::::::::'\n  `':::''", "   _..._\n .::::. `.\n:::::::.  :\n::::::::  :\n`::::::' .'\n  `'::'-'", "   _..._\n .::::  `.\n::::::    :\n::::::    :\n`:::::   .'\n  `'::.-'", "   _..._\n .::'   `.\n:::       :\n:::       :\n`::.     .'\n  `':..-'", "   _..._\n .'     `.\n:         :\n:         :\n`.       .'\n  `-...-'", "   _..._\n .'   `::.\n:       :::\n:       :::\n`.     .::'\n  `-..:''", "   _..._\n .'  ::::.\n:    ::::::\n:    ::::::\n`.   :::::'\n  `-.::''", "   _..._\n .' .::::.\n:  ::::::::\n:  ::::::::\n`. '::::::'\n  `-.::''", "   _..._\n .:::::::.\n:::::::::::\n:::::::::::\n`:::::::::'\n  `':::''"};
	static int i = -1;

	++i;
	if (i >= 9)
		i = 0;
	return (src[i]);
}

// ###############################################################

// GETTER METHOD #################################################

unsigned int				Asteroid::getValue(void) const
{
	return (this->_value);
}

// ###############################################################

// SETTER METHOD #################################################

// ###############################################################

// PRIVATE METHOD ################################################

// ###############################################################

// EXTERNAL ######################################################

// ###############################################################
