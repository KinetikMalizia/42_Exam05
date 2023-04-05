/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:09:18 by fmalizia          #+#    #+#             */
/*   Updated: 2023/04/05 15:09:59 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Warlock
{
	private:
			std::string	name;
			std::string	title;

			Warlock();
			Warlock(Warlock& og);
			void	operator=(const Warlock& og);
	public:
			Warlock(const std::string& name, const std::string& title);
			~Warlock();

			const	std::string& getName() const;
			const	std::string& getTitle() const;

			void	setTitle(const std::string& original);
			void	introduce() const;
};