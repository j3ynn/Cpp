/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:02:56 by jbellucc          #+#    #+#             */
/*   Updated: 2025/12/17 14:11:51 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
//da includere tutte le librerie che ti serviranno negli altri file

class Contact
{
//attributi
	private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darksecret;

//metodi
	public:
	Contact();
	~Contact();
	//setter imposta un valore privato
	void setfirst(std::string firstname);
	void setlast(std::string lastname);
	void setnick(std::string nickname);
	void setphone(std::string phonenumber);
	void setdark(std::string darksecret);
	//getter ottiene il valore privato(const garantisce che la funzione non modifica la classe)
	std::string getfirst() const;
	std::string getlast() const;
	std::string getnick() const;
	std::string getphone() const;
	std::string getdark() const;
	//-bool isempty() const;
};

#endif
