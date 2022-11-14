/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:32:00 by chaidel           #+#    #+#             */
/*   Updated: 2022/11/14 17:54:51 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

	/*	Constructors/Destructor */
ClapTrap::ClapTrap() : _name("Fearless Black Knight"), _hit(10), _energy(10), _dmg(0)
{
	std::cout << "A new challenger has appeared : " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hit, int energy, int dmg) : _name(name), _hit(hit), _energy(energy), _dmg(dmg)
{
	std::cout << "A new challenger has appeared : " << this->_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& obj)
{
	this->_name = obj.getName();
	this->_hit = obj.getHit();
	this->_energy = obj.getEnergy();
	this->_dmg = obj.getDmg();
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " body disappeared !" << std::endl;
}

	/*	Methods */
void	ClapTrap::attack(const std::string& target)
{
	if (!this->isAlive()) return ;
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_dmg << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->isAlive()) return ;
	this->_hit -= amount;
	if (!this->isAlive()) std::cout << "ClapTrap " << this->_name << " has perished !" << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->isAlive()) return ;
	this->_hit += amount;
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << "healed himself of " << amount << ", ";
	std:: cout << this->_name << " has now " << this->_hit << "hit points !" << std::endl;
}

bool	ClapTrap::isAlive() const
{
	return ((this->_hit > 0) ? true : false);
}

	/*	Assignement Operator overload */
ClapTrap&	ClapTrap::operator=(ClapTrap const& obj)
{
	std::cout << this->_name << " got " << obj.getName() << " equipments and skills !" << std::endl;
	this->_name = obj.getName();
	this->_hit = obj.getHit();
	this->_energy = obj.getEnergy();
	this->_dmg = obj.getDmg();
	return (*this);
}

	/*	Accessors */
std::string	ClapTrap::getName() const
{
	return (this->_name);
}

int	ClapTrap::getHit() const
{
	std::cout << this->_name << " has " << this->_hit << " left" << std::endl;
	return (this->_hit);
}

int	ClapTrap::getEnergy() const
{
	std::cout << this->_name << " has " << this->_energy << " left" << std::endl;
	return (this->_energy);
}

int	ClapTrap::getDmg() const
{
	std::cout << this->_name << " makes " << this->_dmg << " damage" << std::endl;
	return (this->_dmg);
}

	/*	Flux Operator overload */
std::ostream&	operator<<(std::ostream& flux, ClapTrap const& perso)
{
	flux << perso.getName();
	return (flux);
}
