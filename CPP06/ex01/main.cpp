#include "Data.hpp"
#include <stdint.h>

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main(void)
{
	Data	*data;
	data = new Data[2];

	data->n = 21;
	(data + 1)->n = 42;
	std::cout << "SizeOf Data: " << sizeof(Data) << std::endl;
	std::cout << "Value: " << data->n << " Home address: " << &data->n << std::endl;

	std::cout << "\n\033[31mSerialize data:\033[0m" << std::endl;
	uintptr_t	raw = serialize(data);
	std::cout << "SizeOf uintptr_t: " << sizeof(raw) << std::endl;
	std::cout << "Value serialize: " << raw << " Serialized address: " << &raw << std::endl;
	Data	*nn = deserialize(raw);
	std::cout << "Value: " << nn->n << " Deserialized address: " << &nn->n << std::endl;

	std::cout << "\n\033[31mEdit serialize raw:\033[0m" << std::endl;
	raw = serialize(data);
	raw = raw + sizeof(Data);
	std::cout << "SizeOf uintptr_t: " << sizeof(raw) << std::endl;
	std::cout << "Value serialize: " << raw << " Serialized address: " << &raw << std::endl;
	nn = deserialize(raw);
	std::cout << "Value: " << nn->n << " Deserialized address: " << &nn->n << std::endl;

	delete []data;
}