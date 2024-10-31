/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:04:31 by codespace         #+#    #+#             */
/*   Updated: 2024/10/31 23:04:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string   _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string const name);
        ClapTrap(const ClapTrap &other); //Copy constructor
        ClapTrap &operator=(const ClapTrap &other); //Copy assignment operator
        ~ClapTrap();

        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
        void    setHitPoints(int amount);
        void    setEnergyPoints(int amount);
        void    setAttackDamage(int amount);

        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    showInfo(); 
};

#endif