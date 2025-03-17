/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:44:07 by aallou-v          #+#    #+#             */
/*   Updated: 2025/03/17 17:40:46 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
    private:
        T       *data;
        size_t  range;
    public:
                    Array();
                    Array(size_t size);
                    Array(Array const &other);
                    ~Array();
        size_t      size() const;
        Array       &operator=(Array const &other);
        T           &operator[](size_t index);
        T const      &operator[](size_t index) const;
};

