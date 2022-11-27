/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:34:27 by chaidel           #+#    #+#             */
/*   Updated: 2022/11/27 16:23:56 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
			/*	Constructors/Destructor */
		ScavTrap();
		ScavTrap(std::string name, int hit=100, int energy=50, int dmg=20);
		ScavTrap(ScavTrap const& cpy);
		~ScavTrap();
			/*	Methods */
		void	attack(const std::string& target);
		void	guardGate();
	protected:
};

#endif