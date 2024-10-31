/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:44:51 by codespace         #+#    #+#             */
/*   Updated: 2024/10/31 01:05:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_attackDamage = other.getAttackDamage();
    return *this;
}

std::string   ClapTrap::getName() const
{
    return this->_name;
}

int ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const
{
    return this->_attackDamage;
}

void    ClapTrap::setHitPoints(int amount)
{
    this->_hitPoints = amount;
}

void    ClapTrap::setEnergyPoints(int amount)
{
    this->_energyPoints = amount;
}

void    ClapTrap::setAttackDamage(int amount)
{
    this->_attackDamage = amount;
}

void    ClapTrap::attack(const std::string& target)
{
    if (!this->_energyPoints || !this->_hitPoints)
    {
        std::cout << this->_name << " Can't attack " << target << ", is dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "; 
	std::cout << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= (int)amount)
    {
        std::cout << this->_name << " is dead!" << std::endl;
        this->_hitPoints = 0;
        return ;
    }
    std::cout << this->_name << " took " << amount << " points of damage..." << std::endl;
    this->_hitPoints -= amount;   
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->_energyPoints || !this->_hitPoints)
    {
        std::cout << this->_name << " Can't be repaired, is dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " repaired itself and got " << amount; 
	std::cout << " hit points back" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints--;
}

void    ClapTrap::showInfo()
{
    std::cout << this->_name << " has " << this->_hitPoints << " hitPoints, ";
    std::cout << this->_energyPoints << " energyPoints and " << this->_attackDamage;
    std::cout << " attackDamage" << std::endl;
}