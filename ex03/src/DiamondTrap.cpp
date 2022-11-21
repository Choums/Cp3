/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:35:42 by root              #+#    #+#             */
/*   Updated: 2022/11/21 19:20:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string &name) : FragTrap(100, 30), ScavTrap(50)
{
	ClapTrap::_name = name + "_clap_name";
	this->name = name;
	// std::cout << "[ A new Diamond challenger has appeared : " << this->_name << " ]" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& cpy)
{
	*this = cpy;
}

DiamondTrap::~DiamondTrap()
{}

void	DiamondTrap::whoAmI()
{
	
}