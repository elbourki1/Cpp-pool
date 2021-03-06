/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:27 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:28 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"


Enemy::Enemy(int hp, std::string const & type)
{
    this->hp = hp;
    this->type = type;
}
Enemy::Enemy()
{
    this->hp = 50;
    this->type = "mokahla";
}
Enemy::~Enemy()
{

}
Enemy::Enemy(const Enemy &a)
{
    *this = a;
}
Enemy &Enemy::operator=(const Enemy &a)
{
    return const_cast<Enemy&>(a);
}


std::string Enemy::getType() const
{
    return this->type;
}
int Enemy::getHP() const
{
    return this->hp;
}
void Enemy::takeDamage(int d)
{
    int i = 0;

    if (d < 0)
        return;
    else if (d > this->hp)
        i = this->hp;
    else 
        i = d;
    this->hp -= i;
    if (this->hp < 0)
        this->hp = 0;
}

std::ostream& operator<< (std::ostream& out, Enemy const &_Character)
{
    std::cout << "type is " << _Character.getType() << "and hp is "  << _Character.getHP() << std::endl;
    return out;
}