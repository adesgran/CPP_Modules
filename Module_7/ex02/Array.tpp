template< typename T >
Array<T>( void )
{
	this->_array = new T[];
}
		Array<T>( unsigned int n );
		Array<T>( Array<T> const &array );
		Array<T>	&operator=(Array<T> const &array);

		T	&operator[](int i);
		
		unsigned int	size( void ) const;
