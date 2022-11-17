/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:31:27 by chaidel           #+#    #+#             */
/*   Updated: 2022/11/17 20:07:04 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ClapTrap	perso;
	ScavTrap	perso2("Fool");
	
	std::cout << "\n---\n" << perso << std::endl << "---\n" << perso2 << std::endl;

	perso.attack(perso2.getName());
	perso2.takeDamage(perso.getDmg());
	perso2.attack(perso.getName());
	perso.takeDamage(perso2.getDmg());
	perso2.guardGate();
	std::cout << "\n---\n" << perso << std::endl << "---\n" << perso2 << std::endl;

	return (0);
}