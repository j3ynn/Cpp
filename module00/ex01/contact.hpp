#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darksecret;

	public:
	Contact();
	~Contact();
	void setfirst(std::string firstname);
	void setlast(std::string lastname);
	void setnick(std::string nickname);
	void setphone(std::string phonenumber);
	void setdark(std::string darksecret);
	std::string getfirst() const;
	std::string getlast() const;
	std::string getnick() const;
	std::string getphone() const;
	std::string getdark() const;
};

#endif
