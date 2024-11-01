/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:03:51 by codespace         #+#    #+#             */
/*   Updated: 2024/11/01 23:36:26 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

int	main(void)
{
    std::cout << std::endl << GREEN << "----- Constructor calls -----" << RESET << std::endl;
    DiamondTrap a1("A");
    DiamondTrap b1("B");
    DiamondTrap c;
    DiamondTrap a2;
    DiamondTrap b2(b1);
    a2 = a1;
    FragTrap f("fragtrap");
    ScavTrap s("scavtrap");
    
    std::cout << std::endl << GREEN << "----- Showing general object's information -----" << RESET << std::endl;
    f.showInfo();
    s.showInfo();
    a1.showInfo();
    b1.showInfo();
    c.showInfo();
    a2.showInfo();
    b2.showInfo();

    std::cout << std::endl << GREEN << "----- Base class member functions -----" << RESET << std::endl;
    a1.attack("A_Enemy");
    b1.attack("B_Enemy");
    c.attack("Unnamed_Enemy");
    a2.attack("A_Enemy");
    b2.attack("B_Enemy");
    a1.beRepaired(1);
    b1.beRepaired(1);
    c.beRepaired(1);
    a2.beRepaired(1);
    b2.beRepaired(1);
    a2.takeDamage(100);
    b2.takeDamage(100);
    
    std::cout << std::endl << GREEN << "----- Derived classes member functions -----" << RESET << std::endl;
    a2.guardGate();
    a2.highFivesGuys();
    a2.whoAmI();
    b2.guardGate();
    b2.highFivesGuys();
    b2.whoAmI();

    std::cout << std::endl << GREEN << "----- Showing general object's information -----" << RESET << std::endl;
    a1.showInfo();
    b1.showInfo();
    c.showInfo();
    a2.showInfo();
    b2.showInfo();
    std::cout << std::endl << GREEN << "----- Destructor calls -----" << RESET << std::endl;

    return 0;	
}