/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:03:51 by codespace         #+#    #+#             */
/*   Updated: 2024/10/31 23:03:56 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

int	main(void)
{
    std::cout << std::endl << GREEN << "----- Constructor calls -----" << RESET << std::endl;
    ClapTrap claptrap("Evaluator");
    ScavTrap scavtrap("Student");
    FragTrap fragtrap;
    FragTrap fragtrap1("RandomGuy");
    FragTrap fragtrap2(fragtrap1);
    fragtrap = fragtrap1;
    
    std::cout << std::endl << GREEN << "----- ClapTrap, ScavTrap and FragTrap testing -----" << RESET << std::endl;
    claptrap.showInfo();
    scavtrap.showInfo();
    fragtrap.showInfo();
    claptrap.attack(fragtrap2.getName());
    scavtrap.attack(claptrap.getName());
    fragtrap.attack(scavtrap.getName());
    claptrap.takeDamage(scavtrap.getAttackDamage());
    scavtrap.takeDamage(claptrap.getAttackDamage());
    fragtrap.takeDamage(fragtrap2.getAttackDamage());
    scavtrap.guardGate();
    fragtrap.highFivesGuys();
    claptrap.showInfo();
    scavtrap.showInfo();
    fragtrap.showInfo();
    std::cout << std::endl << GREEN << "----- Destructor calls -----" << RESET << std::endl;

    return 0;	
}