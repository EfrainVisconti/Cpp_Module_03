/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:49:40 by codespace         #+#    #+#             */
/*   Updated: 2024/10/31 22:13:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string const name);
        FragTrap(const FragTrap &other); //Copy constructor
        FragTrap    &operator=(const FragTrap &other); //Copy assignment operator
        ~FragTrap();

        void    highFivesGuys();
};

#endif