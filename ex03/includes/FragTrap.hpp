/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:09:13 by root              #+#    #+#             */
/*   Updated: 2022/11/21 18:48:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "./ClapTrap.hpp"
# include "./ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name, int hit=100, int energy=100, int dmg=30);
		FragTrap(FragTrap const& cpy);
		~FragTrap();
			/*	Methods */
		void	highFivesGuys(void);
	protected:
		// Inherited constructor for Diamond
		FragTrap(int hit, int dmg);
};

#endif