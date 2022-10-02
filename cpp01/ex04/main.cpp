//
// Created by kolterdyx on 2/10/22.
//

#include <iostream>
#include <fstream>

std::string replace(std::string text, __attribute__((unused)) std::string s1, __attribute__((unused)) std::string s2)
{
	std::string output = "";
	for (long unsigned int i=0; i < text.length(); i++)
	{
		if (!text.substr(i, s1.length()).compare(s1))
		{
			output += s2;
			i += s1.length() -1 ;
		} else {
			output += text.substr(i, 1);
		}
	}

	return output;
}

int main(__attribute__((unused)) int argc, char **argv)
{
	if (argc != 4)
		return 0;

	std::ifstream infile;
	infile.open(argv[1]);
	std::string s1 = (std::string)argv[2];
	std::string s2 = (std::string)argv[3];

	std::string line;
	std::string text;
	if (infile.is_open())
	{
		while(std::getline(infile, line))
		{
			text += line + "\n";
		}
		infile.close();
	} else std::cout << "Unable to open: " << argv[1] << std::endl;

	text = replace(text, s1, s2);

	std::ofstream offile;
	offile.open((((std::string)argv[1]) + ".replace").c_str());
	if (offile.is_open())
	{
		offile << text;
		offile.close();
	} else std::cout << "Unable to open: " << (std::string)argv[1] + ".replace" << std::endl;

}
