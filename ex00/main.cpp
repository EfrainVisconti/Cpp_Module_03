/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:44:13 by codespace         #+#    #+#             */
/*   Updated: 2024/10/31 01:37:52 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

int	main(void)
{
    unsigned int test1 = 6;
    unsigned int test2 = 8;

    std::cout << std::endl << GREEN << "----- Constructor calls -----" << RESET << std::endl;
    ClapTrap claptrap1("Student");
    ClapTrap claptrap2("Evaluator");
    
    std::cout << std::endl << GREEN << "----- ClapTrap fight -----" << RESET << std::endl;
    claptrap1.showInfo();
    claptrap2.showInfo();
    for (unsigned int i = 0; i < test1; i++)
        claptrap1.attack(claptrap2.getName());
    claptrap2.takeDamage(test1);
    claptrap1.showInfo();
    claptrap2.showInfo();
    for (unsigned int i = 0; i < test2; i++)
        claptrap2.attack(claptrap1.getName());
    claptrap1.takeDamage(test2);
    claptrap1.beRepaired(test2);
    claptrap1.showInfo();
    claptrap2.showInfo();
    std::cout << claptrap2.getName() << " got attacked by other ClapTrap..." << std::endl;
    claptrap2.takeDamage(test1);
    std::cout << std::endl << GREEN << "----- Destructor calls -----" << RESET << std::endl;

    return 0;	
}