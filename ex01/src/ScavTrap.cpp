/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:34:29 by chaidel           #+#    #+#             */
/*   Updated: 2022/11/28 12:47:40 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Knight",100, 50, 20)
{
	std::cout << "[ A new Scav challenger has appeared : " << this->_name << " ! ]" << std::endl;
}

ScavTrap::ScavTrap(std::string name, int hit, int energy, int dmg) : ClapTrap(name, hit, energy, dmg)
{
	std::cout << "[ A new Scav challenger has appeared : " << this->_name << " ! ]" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& cpy)
{
	this->_name = cpy.getName();
	this->_hit = cpy.getHit();
	this->_energy = cpy.getEnergy();
	this->_dmg = cpy.getDmg();
	std::cout << "[ A new Scav challenger has copied : " << this->_name << " skills and equipments ]" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ Scav " << this->_name << "'s body disappeared ! ]" << std::endl;
}

/*	Methods */
void	ScavTrap::attack(const std::string& target)
{
	if (!this->isAlive()) {std::cout << "[ The deads cannot move ! ]" << std::endl; return ;}
	this->_energy--;
	std::cout << "<ScavTrap> " << this->_name << " attacks " << target << " causing " << this->_dmg << " points of damage !" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "<ScavTrap> " << this->_name << " entered into Gate Keeper mode !" <<  std::endl;
}