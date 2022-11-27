/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:09:05 by root              #+#    #+#             */
/*   Updated: 2022/11/27 15:57:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Fool", 100, 100, 30)
{
	std::cout << "[ A new Frag challenger has appeared : " << this->_name << " ! ]" << std::endl;
}

FragTrap::FragTrap(std::string name, int hit, int energy, int dmg) : ClapTrap(name, hit, energy, dmg)
{
	std::cout << "[ A new Frag challenger has appeared : " << this->_name << " ! ]" << std::endl;
}

FragTrap::FragTrap(FragTrap const& cpy)
{
	this->_name = cpy.getName();
	this->_hit = cpy.getHit();
	this->_energy = cpy.getEnergy();
	this->_dmg = cpy.getDmg();
}

FragTrap::~FragTrap()
{
	std::cout << "[ Frag " << this->_name << "'s body disappeared ! ]" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "<FragTrap> " << this->_name << " is looking for a mate to high five !" <<  std::endl;
}