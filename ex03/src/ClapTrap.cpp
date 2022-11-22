/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:32:00 by chaidel           #+#    #+#             */
/*   Updated: 2022/11/22 16:46:34 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

	/*	Constructors/Destructor */
ClapTrap::ClapTrap() : _name("Fearless Black Knight"), _hit(10), _energy(10), _dmg(0)
{
	std::cout << "[ A new Clap challenger has appeared : " << this->_name << " ]" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hit, int energy, int dmg) : _name(name), _hit(hit), _energy(energy), _dmg(dmg)
{
	std::cout << "[ A new Clap challenger has appeared : " << this->_name << " ]" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& cpy)
{
	this->_name = cpy.getName();
	this->_hit = cpy.getHit();
	this->_energy = cpy.getEnergy();
	this->_dmg = cpy.getDmg();
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ Clap " << this->_name << "'s body disappeared ! ]" << std::endl;
}

	/*	Methods */
void	ClapTrap::attack(const std::string& target)
{
	if (!this->isAlive()) {std::cout << "[ The deads cannot move ! ]" << std::endl; return ;}
	this->_energy--;
	std::cout << "<ClapTrap> " << this->_name << " attacks " << target << " causing " << this->_dmg << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
	if (!this->isAlive()) return ;
	this->_hit -= amount;
	if (!this->isAlive()) std::cout << "<ClapTrap> " << this->_name << " has perished !" << std::endl; 
	else std::cout << "<ClapTrap> " << this->_name << " lost " << amount << " hit points, " << this->_name << " has now " << this->_hit << " hit points left !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->isAlive()) return ;
	this->_hit += amount;
	this->_energy--;
	std::cout << "<ClapTrap> " << this->_name << " healed himself of " << amount << ", ";
	std:: cout << this->_name << " has now " << this->_hit << " hit points !" << std::endl;
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
	// std::cout << this->_name << " has " << this->_hit << " left" << std::endl;
	return (this->_hit);
}

int	ClapTrap::getEnergy() const
{
	// std::cout << this->_name << " has " << this->_energy << " left" << std::endl;
	return (this->_energy);
}

int	ClapTrap::getDmg() const
{
	// std::cout << this->_name << " makes " << this->_dmg << " damage" << std::endl;
	return (this->_dmg);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHit(int hit)
{
	this->_hit = hit;
}

void	ClapTrap::setEnergy(int energy)
{
	this->_energy = energy;
}

void	ClapTrap::setDmg(int dmg)
{
	this->_dmg = dmg;
}

void	ClapTrap::show_state(std::ostream& flux) const
{
	flux << "Name: " << this->getName() << std::endl;
	flux << "Hit points: " << this->getHit() << std::endl;
	flux << "Energy: " << this->getEnergy() << std::endl;
	flux << "Damage: " << this->getDmg() << std::endl;
}
	/*	Flux Operator overload */
std::ostream&	operator<<(std::ostream& flux, ClapTrap const& perso)
{
	perso.show_state(flux);
	return (flux);
}
