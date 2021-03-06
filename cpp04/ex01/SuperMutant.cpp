/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:47 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:48 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(SuperMutant const &a)
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    *this = a;
}
SuperMutant &SuperMutant::operator=(SuperMutant const &a)
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return const_cast<SuperMutant&>(a);
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}
SuperMutant::SuperMutant()
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    this->hp = 170;
    this->type = "Super Mutant";
}

void SuperMutant::takeDamage(int)
{
    if (!(this->hp - 25 / 3 <= 0))
    {
        this->hp -= 25 / 3;
    }
    else 
        this->hp = 0;
}