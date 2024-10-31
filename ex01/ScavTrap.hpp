/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:25:55 by codespace         #+#    #+#             */
/*   Updated: 2024/10/31 19:28:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string const name);
        ScavTrap(const ScavTrap &other); //Copy constructor
        ScavTrap    &operator=(const ScavTrap &other); //Copy assignment operator
        ~ScavTrap();

        void    attack(const std::string &target);
        void    guardGate();
};

#endif