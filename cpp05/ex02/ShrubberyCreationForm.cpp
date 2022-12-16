//
// Created by Ciro Garcia belmonte on 12/15/22.
//

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : target("default") {
	std::cout << "\033[1;37mShrubberyCreationForm default constructor called\033[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "\033[1;37mShrubberyCreationForm destructor called\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other) {
	std::cout << "\033[1;37mShrubberyCreationForm copy constructor called\033[0m" << std::endl;
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	std::cout << "\033[1;37mShrubberyCreationForm assignment operator called\033[0m" << std::endl;
	if (this != &other) {
		Form::operator=(other);
		this->target = other.target;
	}
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target) {}

std::string const &ShrubberyCreationForm::getTarget() const {
	return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	std::ofstream file;
	file.open(this->target + "_shrubbery");
	if (file.is_open()) {
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXkkkkKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkxxx0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkxxx0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkxxx0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0OOKWMMMNXXX0xxxx0WMMMMMMMMMMMWXXXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMO;..cKMMWKxxxxxxxx0WMMMMMMMMMMMKkxxONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0occoO00OxdoodxxxxOXXNNWMMMWNXXK0OOKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWO:''';:::lxxxxxxxxOXMMWKkxkKWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNXKKx;...';;;codddddddx0NNNKOOOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMO:,,'........,::::::::cdkkkKWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNNNk,...........,;:::::::cdkkkKWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWOc::,............,;:::coddx0NNNKOOOXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWk,''.............,;:::ldxxkXWMW0xxxKWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN000o'..',,;;;;;;;::::ldxxxOOOOkxxxkOOOKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMWMMWk,..';::::::::::::ldxxxxxxxxxxxxxxxONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNxlllllll:'..';:::::::coooodxxxxxxxxxxxxxxxxONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKc...........';:::::::lxxxxxxxxxxxxxxxxxxxxxOXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOddd:....',,,;:::clllllllloxxxxxxxxxxxxdolldOKKKKKKKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWx'..';:::::::oxxxo::::ldxxxxxxxxxxxo:::cdxxxxxxkKMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0xkxc'..';:::::::cooollllloxxxxoooooooollllodxxxO00KNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKc.......';:::::::::::ldxxxxxxxdl:::::::lxxxxxxxkXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0kkkkkkOKWMMN0Okd;.......',,,;;:::::::coooodxxxxollllllloxxxxxxxk0XXXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKc.......lXMM0:...............';::::::::::::ldxxxxxxxxxxxxxxxxxxxxxxxkKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXo;;;'...cOKKk;........'''''''';::::ccccccccldxxxxxxxxxxxxxxxxdddddxxk0NNNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNNNKc...',,,'........';;;;;;;;::::lddddddddxxxxxxxxxxxxxxxxxdl::coxxxkkkk0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNl................';;;;::::::::ldddxxxxxxddddddddxxxxxxxxdlc:codddxxxxONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNl....................,;::::::::cccoxxxxoccccccccoxxxxxxxxdddolcccoxxxONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo,,,'................';;;;;;;;::::lddxdoc:::::::oxxxxxxxxxxxdl::coxxxONMMMWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKKKd,.......,;;;'....'''''''',::::ccccloddoc:::oxxxxxxxxxxxxdddddxxxONMMN0OO0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWO,......';:::,............,::::::::ldxxdl:::oxxxxxxxxxxxxxxxxxxxxONWWNOxxkXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWOool:'...,,,,'''''...',,,,,,,,;:::cooooollll::::cllloxxxxxxxxollldxxxkO000KXXXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNl.......';::;'.......';:::::::::::lxxxxo::::::::::::ldxxxxxxdl:::oxxxxxxxONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNl........',,'....',,,;;:::::::::::cllllc::::::::cooollllodxxdl:::oxxxxxxxkO0KKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNl................,;:::::::::::::::::::::::::::::oxxxo:::cdxxdc:::oxxxxxxxxxxxkXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOddo;........',,'....',,,,;::;,,,,;:::::::::::::cllodxxxo:::cdxxxolllllllodxxk0KKXNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKc...........';::;'.......';::;....,::::::::::::coxxxxxxxo:::cdxxxxxxdl:::cdxxONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNxllc,.......';::;,''''''',;::;,''';:::;,,,,;:::coxxxxxxxolclldxxxxxxxolllloookXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWXl.......';::::::::::::::::::::::::,....';::coxxxxxxxxxxxxxxxxxxxxxxxxoc::oKMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWK00k:.......',;;;;;;;;:::;;;;;::::::::,'''',;:::ldoodxxxxxxxxxxxxdooddxxxdlccd0XXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXl'''.................,;::,...';::::::::;::::::::::::oxxxxxxxxxxxdl::coxxxxxxxxxxkOXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXc.................''',;::,...',;;;;;;;;:::::::::ccccoxxxxxxxxxxxdlcccoddddxxxxdddx0NNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXc................,;;;::::,............,;::::::::odddxxxxxxxxxxxxxxdddl:::ldxxdl::cdkkkKWMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNN0c................,;;;;;;;,............,;;;;;::::oddxxxxxxxxxxxxxxxxxdl:::ldxxdc::coxxx0WMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMKo::;'...,;;;;;;;,.....'''''''....',;;;;;;;,'''',;:::ccccoxxxxxxxxxxxxxxxxdddddxxxxdddolccckNMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMWWWW0;.......,:::::::,'...............';:::::::,....';:::::::oxxxxxxxxxxxxxxxxxxxxxxxxxxxxdl:::xNWMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMWOlcc:'........''''''''.................'''';:::;;;;;;::::::::ccccoxxxxxxxxxxxxxxxxxxxxxxxxxdoooxO0OKWMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMWd'.........................................,:::::::::::::::::::::ldxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0NMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMWd'..........................................''',:::::::::::::::::ccllllllllllldxxxxxxxxxxxk0XXXXXXXNWMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMWd'.............................................,;:::::::::::::::::::::::::::::oxxxxxxxxxxxkXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMW0xxd:........',,,,,,,,,,,'........',,,'............',,,,;::::::::clllc::::::::cllldxxxxxxxxxxxx0KKKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMNl...........';:::::::::::;'.......,;::,.................';:::::::oxxxl:::::::coxxxxxxxxxxxxxxxxxxxx0WMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMWOoooooooc'...',,,;:::::::;'.......,;::;,'''.............',,,,;:::oxxxdlllc:::coxxxxxxxxxxxxxxxxxxxxOKKKKKXXXWMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMM0:.......,:::::::;'.......,;::::::;..................,:::oxxxxxxxdc::coxxxxxxxxxxxxxxxxxxxxxxxxxxxxONMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMWXOOkd,.......',,,;:::;'.......',,,,,,,,.....''''.........,:::looodxxxdc:::looooooodxxxxxxxxdooodxxxxxxxONMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMWd'...............';::;'....................,::;,.........,:::::::lxxxdc:::::::::::cdxxxxxxdl:::ldxxxxxxONMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMWk:;;,'...........',;;,.....................,:::,''''''''';:::::::ldddoc:::::::::::codddxxxdlcccldddxkOO0NMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMWNNNO;.....................................,::::;;;;;;;;;:::::::::::::::::::::::::::::cdxxxddddoc::dXWWWMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMNXXXk;.....................................,;;;;;;;;;::::::::;;;;;;;;;:::::::::cccccccldxxxddddolllxKNNNWMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMWk:;;,........,;;;,..................................,;::::::;,'......';:::::::lddddddddxxxdlc:cxKXX0dllxXMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMWWNNNNNXo'...........,;;;,..................................';;;;:::;,.......';::::::codddxxxxxxdddl:::xNWW0l::oKMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMNkoolc:::;;;;,....,;;;''''.........,;;;'......................'''';::;,...';;;;::::lddolcccldxxdlcccodddxOOOxc::oKMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMXd::;'...,:::;'...;::;'...........';:::,..........................,::;,...,;:::::::oxxdl:::cdxxdc::coxxxxxxxoc::oKWMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMXl''',,,,,''',,,,,,'''.............'''',,,,'......................''''....'''',;:::clllc::::cllloooodxxxxxxxdooodO000XWMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMXc...,:::,...';::;'....................,:::,..................................';:::::::::::::::cdxxxxxxxxxxxxxxxxxxxxKWWMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMXc...',,''....',,'.....................,:::,..................................';:::::::coooooooodxxxxxxxxxxxxxxxdolllx00KXWMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMKc.....................................,;::,..................................';:::::::oxxxxxxxxxxxxxxxxxxxxxxxxdc:::lxxx0WMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMW0xddddddo,....................',,,'............',,,'........',,,,,,,,'....',,,'........',,,;:::clllodxxdollodxxxxxxxxxxxdollldxxxO0KKXWMMMMMMM" << std::endl;
		file << "MMMMMMMWd'............................,:::,.........................,::::::::,....,::;'............,:::::::cdxxdc::coxxxxxxxxxxxxxxxxxxxxxxxxONMMMMMMM" << std::endl;
		file << "MMMMMMMWd'........................'''',,,,'.........................',,,;::::,....',,,,'''.........',,;;:::cooolc:::looodxxxddoodxxxxxxxxxxxx0NMMMMMMM" << std::endl;
		file << "MMMMMMMWd'.......................';::;'.................................,;:::,........,::;,............,::::::::::::::::ldxxoc::cdxxxxxxxxxxx0NMMMMMMM" << std::endl;
		file << "MMMWX00Ol.....................'''';::;'.................................',;;;,''''....';;;'.........''',;;;;;;;;::::::::coddl:::cdxxxxxxxdddokKXXNWMMM" << std::endl;
		file << "MMMNo'''.....................';::::::;'......................................';;;;'................,:;;,.......';:::::::::::::::cdxxxxxxxoc::ldxkkXWMM" << std::endl;
		file << "XKKOc........................',;;;;;;,'......................................',;;,'................,;;;'....'''';:::::::::::::::coddddxxxdooodkOOOXWMM" << std::endl;
		file << ":,,'.......................................................................................................';;;;::::::::::::::::::::clxxx0NNNWWWWWWMMM" << std::endl;
		file << ";'''.............''''......................................................................................';::::;;;;;;;:::::::::::::ldxxONWWWMMMMMMMM" << std::endl;
		file << "K00Oc...........,d00Oc....................................................................',;;,............';::;,''''''',;::::::::::::cccloookNMMMMMMM" << std::endl;
		file << "MMMNo'.'......'':0MMNl.........''...........''''''........................................,;::;'...........';::;'.......';:::::::::::::::::::dXWWWWWWW" << std::endl;
		file << "MMMWX0OOc...ckO00NMMNo.......;xOOx;.......:kO00OOOx;.....................',,'.........',;,;:::;;;;,'........''''.........''''''',;:::::::::::coddddddd" << std::endl;
		file << "MMMMMMMWd'..oNMMMMMMXl.......cKMMXc.......lXMMMMMMKc.....................,,,,'........':::::::::::;'............................';::::::::::::::::::::" << std::endl;
		file << "MMMMMMMWXOkOKWMMNkllc,...ckkk0NMMW0OOkkkkOKWMMMMMMW0OkkOkOOkkkko'....'''',,,,,,,,,,,,,'..'lO0000000OOOkc.......,dOOOOOOOkkkOOkOkxl:::::::oO00000000000" << std::endl;
		file << "MMMMMMMMMMMMMMMMXc......'xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0,...',,,,,,,,;::::::::'...oWMMMMMMMMMMNo.......:0MMMMMMMMMMMMMMMXo:::::::xNMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMXc..'cdddKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0,.......',,,,;;;;;:::clooo0WMMMMMMMMMMW0dddddddkXMMMMMMMMMMMMMMMN0kkxl,,,dNMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMXc..,kMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0,........,,,,,,,,;:::cOMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWd'..oNMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMNkoodKMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0,.........'''',,,;:::cdOOOXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0dooOWMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0,.............,,,;::::;,,;xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0,.............,,,;;:::;,,;xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0,.............,,,,,,,,,,,;xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0,.............',,,,,,,;;;;xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0,....,,,..........',,,;::ckWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0,....,,,...........,,,;::ckWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0,.....................';;;xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNNNk,......................,,;xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0c,;'.........'','.............dWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk'............,,,,'............oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0oll;..............................;oddkNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWd...................................,,,lKMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNkool;......................................:0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMK:..........................................,0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNkooooooo:........;ooooooooooooooooo,.......'okkkkkkkXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk'.......xWMMMMMMMMMMMMMMMNo........',,,,,,:OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk'.......dWMMMMMMMMMMMMMMMNo........',,,,,,:OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		file.close();
	}
}
