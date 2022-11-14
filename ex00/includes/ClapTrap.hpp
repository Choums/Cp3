/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:20:44 by chaidel           #+#    #+#             */
/*   Updated: 2022/11/14 18:36:59 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap;

class ClapTrap {
	public:
			/*	Constructors/Destructor */
		ClapTrap();
		ClapTrap(std::string name, int hit=10, int energy=10, int dmg=0);
		ClapTrap(ClapTrap const& obj); /* Cpy */
		~ClapTrap();

			/*	Methods */
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		bool	isAlive() const;
			/*	Assignement Operator overload */
		ClapTrap&	operator=(ClapTrap const& obj);

			/*	Accessors */
		std::string	getName() const;
		int			getHit() const;
		int			getEnergy() const;
		int			getDmg() const;
		void		show_state(std::ostream& flux) const;
	private:
		std::string		_name;
		int	_hit; /* Points de vie */
		int	_energy;
		int	_dmg;
};

	/*	Flux Operator overload */
std::ostream&	operator<<(std::ostream& flux, ClapTrap const& perso);

#endif