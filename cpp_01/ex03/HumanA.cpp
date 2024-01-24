#include "HumanA.hpp"

HumanA::HumanA(std::string	name, Weapon& weaponType): _name(name), _weapon(weaponType){
	return ;
}

void	HumanA::attack(){
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(){
	return ;
}
