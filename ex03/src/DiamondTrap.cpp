/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:35:42 by root              #+#    #+#             */
/*   Updated: 2022/11/27 16:33:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string &name)
{
	ClapTrap::_name = name + "_clap_name";
	this->name = name;
	this->_hit = FragTrap::_hit;
	this->_energy = ScavTrap::_energy;
	this->_dmg = FragTrap::_dmg;
	std::cout << this->FragTrap::_hit << std::endl;
	std::cout << "[ A new Diamond challenger has appeared : " << this->name << " ]" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& cpy)
{
	*this = cpy;
	std::cout << "[ A new Clap challenger has copied : " << this->_name << " skills and equipments ]" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[ Scav " << this->name << "'s body disappeared ! ]" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	
}