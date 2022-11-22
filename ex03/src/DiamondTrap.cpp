/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:35:42 by root              #+#    #+#             */
/*   Updated: 2022/11/22 17:53:05 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string &name) : FragTrap(100, 30), ScavTrap(50)
{
	this->name = name;
	FragTrap::_name = name + "_clap_name";

	std::cout << this->FragTrap::_hit << std::endl;
	// std::cout << "[ A new Diamond challenger has appeared : " << this->_name << " ]" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& cpy)
{
	*this = cpy;
}

DiamondTrap::~DiamondTrap()
{}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	
}