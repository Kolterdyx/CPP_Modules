
#include "Data.hpp"
#include "Serializer.hpp"
#include <stdint.h>

int main()
{

	Data *data = new Data();

	data->setN(42);
	data->setStr("Hello World!");

	std::cout << "data: " << *data << std::endl;

	uintptr_t raw = Serializer::serialize(data);

	std::cout << "raw: " << raw << std::endl;

	Data *data2 = Serializer::deserialize(raw);

	std::cout << "data2: " << *data2 << std::endl;

	std::cout << "data == deserialize(serialize(data)): " << (data == Serializer::deserialize(Serializer::serialize(data)) ? "true" : "false") << std::endl;

	delete data;
}
