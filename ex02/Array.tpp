/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:44:07 by aallou-v          #+#    #+#             */
/*   Updated: 2025/03/17 17:59:12 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void): data(NULL), range(0)
{}

template <typename T>
Array<T>::Array(size_t range): data(new T[range]), range(range)
{}

template <typename T>
Array<T>::Array(Array const &array): data(new T[array.range]), range(array.range)
{
    for (size_t i = 0; i < array.range; i++)
    {
        this->data[i] = array.data[i];
    }
}

template <typename T>
Array<T>::~Array(void)
{
    delete[] this->data;
}

template <typename T>
size_t  Array<T>::size(void) const
{
    return (this->range);
}

template <typename T>
Array<T>    &Array<T>::operator=(Array const &array)
{
    delete[] data;
    this->data = new T[array.range];
    this->range = array.range;
    for (size_t i = 0; i < array.range; i++)
    {
        this->data[i] = array.data[i];
    }
}

template <typename T>
T			&Array<T>::operator[](size_t index)
{
	if (this->range <= index)
		throw (std::out_of_range("Out of range"));
	return (this->data[index]);
}

template <typename T>
T const		&Array<T>::operator[](size_t index) const
{
	if (this->range <= index)
		throw (std::out_of_range("Out of range"));
	return (this->data[index]);
}
