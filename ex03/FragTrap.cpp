/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:04:20 by codespace         #+#    #+#             */
/*   Updated: 2024/11/01 23:17:56 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->setHitPoints(100);
    if (this->_energyPoints != 50)
        this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap " << this->getName() << " created" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
    this->setHitPoints(100);
    if (this->_energyPoints != 50)
        this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap " << this->getName() << " created" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->getName() << " destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " asks for a high five!" << std::endl;
}