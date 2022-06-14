#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <string.h>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		void	set_index(int index);
		int		index(void);
		void	add(int index);
		void	display_all(void);
		void	display_list(void);
		bool	isEmpty(void);
	
	private:
		int		_index;
		bool	_isEmpty;
		char	_firstName[512];
		char	_lastName[512];
		char	_nickname[512];
		char	_phoneNumber[11];
		char	_darkestSecret[2048];
};
#endif
