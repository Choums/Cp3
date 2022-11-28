/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:35:42 by root              #+#    #+#             */
/*   Updated: 2022/11/28 12:54:51 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Carbon_clap_name"), FragTrap(), ScavTrap()
{
	this->name = "Carbon";
	FragTrap::_hit = 100;
	ScavTrap::_energy = 50;
	FragTrap::_dmg = 30;
	std::cout << "[ A new Diamond challenger has appeared : " << this->name << " ]" << std::endl;
}

DiamondTrap::DiamondTrap(std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	this->name = name;
	FragTrap::_hit = 100;
	ScavTrap::_energy = 50;
	FragTrap::_dmg = 30;
	std::cout << "[ A new Diamond challenger has appeared : " << this->name << " ]" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& cpy)
{
	this->_name = cpy.getName();
	this->_hit = cpy.getHit();
	this->_energy = cpy.getEnergy();
	this->_dmg = cpy.getDmg();
	std::cout << "[ A new Diamond challenger has copied : " << this->_name << " skills and equipments ]" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[ Diamond " << this->name << "'s body disappeared ! ]" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "<Diamond> Object name is " << this->name << " !" << std::endl;
	std::cout << "<Diamond> Sub-Object clap name is " << this->_name << " !" << std::endl;
}