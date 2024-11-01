/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:08:02 by codespace         #+#    #+#             */
/*   Updated: 2024/11/01 20:47:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string  _name;

    public:
        DiamondTrap();
        DiamondTrap(std::string const name);
        DiamondTrap(const DiamondTrap &other); //Copy constructor
        DiamondTrap    &operator=(const DiamondTrap &other); //Copy assignment operator
        ~DiamondTrap();

        void    attack(const std::string &target);
        void    whoAmI();
};

#endif