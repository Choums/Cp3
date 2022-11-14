/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:31:27 by chaidel           #+#    #+#             */
/*   Updated: 2022/11/14 18:41:02 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	perso1;
	ClapTrap	perso2("Sad", 20, 10, 5);
	ClapTrap	perso3(perso2);
	ClapTrap	perso4 = perso3;

	std::cout << std::endl << std::endl;
	std::cout << "--- 3\n" << perso3 <<std::endl;
	perso4.takeDamage(25);
	std::cout << "\n--- 4\n" << perso4 << std::endl;
	perso4.attack(perso1.getName());
	perso2.attack(perso1.getName());
	perso1.takeDamage(perso2.getDmg());
	perso1.beRepaired(10);
	return (0);
}