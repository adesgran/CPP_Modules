#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <Contact.hpp>

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add_contact(void);
		void	display_contact(int index);

	private:
		Contact _contacts[8];
		int		_nextContact;
};

#endif
