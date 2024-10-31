/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:26:49 by codespace         #+#    #+#             */
/*   Updated: 2024/10/31 21:33:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

int	main(void)
{
    int aux = 5;

    std::cout << std::endl << GREEN << "----- Constructor calls -----" << RESET << std::endl;
    ClapTrap claptrap("Evaluator");
    ScavTrap scavtrap("Student");
    
    std::cout << std::endl << GREEN << "----- ClapTrap and ScavTrap fight -----" << RESET << std::endl;
    claptrap.showInfo();
    scavtrap.showInfo();
    claptrap.beRepaired(100);
    for (int i = 0; i < aux; i++)
        scavtrap.attack(claptrap.getName());
    claptrap.takeDamage(scavtrap.getAttackDamage() * aux);
    std::cout << std::endl;
    claptrap.showInfo();
    scavtrap.showInfo();
    for (int i = 0; i < aux; i++)
        claptrap.attack(scavtrap.getName());
    scavtrap.takeDamage(claptrap.getAttackDamage() * aux);
    std::cout << claptrap.getName() << " didn't cause damage to " << scavtrap.getName();
    std::cout << " with those weak attacks!" << std::endl << std::endl;
    claptrap.showInfo();
    scavtrap.showInfo();
    scavtrap.attack(claptrap.getName());
    claptrap.takeDamage(scavtrap.getAttackDamage());
    claptrap.attack(scavtrap.getName());
    scavtrap.guardGate();
    std::cout << std::endl << GREEN << "----- Destructor calls -----" << RESET << std::endl;

    return 0;	
}