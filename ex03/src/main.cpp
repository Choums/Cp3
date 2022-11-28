/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:31:27 by chaidel           #+#    #+#             */
/*   Updated: 2022/11/28 12:59:39 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	walt("Walt", 50, 10, 15);
	ClapTrap	claper;
	FragTrap	frager;
	ScavTrap	saul("Saul");
	std::string	name = ("Diam's");
	DiamondTrap	diamer(name);

	diamer.attack(walt.getName());
	walt.takeDamage(diamer.getDmg());
	frager.highFivesGuys();
	saul.guardGate();
	walt.attack(diamer.getName());
	diamer.takeDamage(walt.getDmg());;
	walt.beRepaired(20);
	diamer.whoAmI();

	DiamondTrap	cloner(diamer);

	std::cout << std::endl << walt << std::endl;
	std::cout << saul << std::endl;
	std::cout << diamer << std::endl;
	std::cout << cloner << std::endl;
	return (0);
}