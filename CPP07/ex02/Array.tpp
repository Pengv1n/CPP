
template <class T>
Array<T>::Array() : _size(0) {
	this->data = new T[this->_size];
	std::cout << "Default construction" << std::endl;
}

template <class T>
Array<T>::Array(unsigned int size) : _size(size) {
	this->data = new T[this->_size];
	std::cout << "Construction" << std::endl;
}

template <class T>
Array<T>::Array(const Array<T> &copy) : _size(0) {
	this->data = NULL;
	*this = copy;
	std::cout << "Construction copy" << std::endl;
}

template <class T>
Array<T> &Array<T>::operator=(const Array<T> &a) {
	if (this->data != NULL)
		delete [] this->data;
	if (a.size() != 0)
	{
		this->_size = a.size();
		this->data = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->data[i] = a.data[i];
	}
	std::cout << "Opertator=" << std::endl;
	return (*this);
}

template <class T>
T &Array<T>::operator[](unsigned int idx) {
	if (idx >= this->_size || this->data == NULL) {
		throw Array<T>::InvalidIndex();
	}
	return (this->data[idx]);
}

template <class T>
Array<T>::~Array() {
	if (this->data != NULL)
		delete []this->data;
	std::cout << "Destructor" << std::endl;
}

template <class T>
unsigned int Array<T>::size() const {
	return this->_size;
}

template <class T>
const char *Array<T>::InvalidIndex::what() const throw() {
	return "Error: Invalide index";
}