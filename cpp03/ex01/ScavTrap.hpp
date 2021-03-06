/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:22:36 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:22:37 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class ScavTrap
{
    private:
        int hit_points;
        int max_hit_points;
        int energy_points;
        int max_energy_points;
        int level;
        std::string name;
        int melee_attack_damage;
        int ranged_attack_damage;
        int armor_damage_reduction;
        static std::string challenges[5];
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &frag);
        ScavTrap();
        ~ScavTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    challengeNewcomer(std::string const & target);
};