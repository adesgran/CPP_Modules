template< typename T >
Array<T>::Array( void )
{
	this->_array = new T[0];
	this->_size = 0;
}

template< typename T >
Array<T>::Array( unsigned int n )
{
	this->_array = new T[n];
	this->_size = n;
}

template< typename T >
Array<T>::Array( Array<T> const &array )
{
	this->_size = array.size();
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = array[i];
}

template< typename T >
Array<T>::~Array( void )
{
	delete[] (this->_array);
}

template< typename T >
Array<T>	&Array<T>::operator=(Array<T> const &array)
{
	this->_size = array.size();
	delete[] (this->_array);
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = array[i];
	return (*this);
}

template< typename T >
T	&Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_size)
		throw Array<T>::InvalidIndexException();
	return (this->_array[i]);
}

template< typename T >
unsigned int	Array<T>::size( void ) const
{
	return (this->_size);
}

template< typename T >
const char	*Array<T>::InvalidIndexException::what( void ) const throw()
{
	return ("Invalid Index");
}
