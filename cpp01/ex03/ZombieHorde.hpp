/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:01 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:02 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "Zombie.hpp"
class ZombieHorde
{
    private:
        size_t N;
        Zombie *horde;
        static const std::string names[20];
        std::string type;
    public:
        ZombieHorde(size_t N);
        ZombieHorde();
        ~ZombieHorde();
        // void    create(size_t N);
        // void randomChump(Zombie *user);
        // void    announce();
        void    setZombieType(std::string type);
};