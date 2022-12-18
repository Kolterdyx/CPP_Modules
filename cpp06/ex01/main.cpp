
#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{

	Data *data = new Data();

	data->setN(42);
	data->setStr("Hello World!");

	std::cout << "data: " << *data << std::endl;

	uintptr_t raw = serialize(data);

	std::cout << "raw: " << raw << std::endl;

	Data *data2 = deserialize(raw);

	std::cout << "data2: " << *data2 << std::endl;

	std::cout << "data == deserialize(serialize(data)): " << (data == deserialize(serialize(data)) ? "true" : "false") << std::endl;

	delete data;

	return 0;
}