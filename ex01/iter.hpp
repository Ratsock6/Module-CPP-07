/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:44:07 by aallou-v          #+#    #+#             */
/*   Updated: 2025/03/04 15:06:19 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void    swap(T &t1, T &t2)
{
    T   tmp;
    
    tmp = t2;
    t2 = t1;
    t1 = tmp;
}

template <typename T>
T    min(T &t1, T &t2)
{
    if (t1 > t2)
        return (t2);
    return (t1);
}

template <typename T>
T    max(T &t1, T &t2)
{
    if (t1 > t2)
        return (t1);
    return (t2);
}
