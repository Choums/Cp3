/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:34:29 by chaidel           #+#    #+#             */
/*   Updated: 2022/11/15 18:24:45 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Knight",100, 50, 20)
{
	std::cout << "[ A new challenger has appeared : " << this->_name << " ]" << std::endl;
}

ScavTrap::~ScavTrap()
{
	this->~ClapTrap();
}