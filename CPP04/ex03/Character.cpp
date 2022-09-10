//
// Created by aregenia on 02.09.22.
//

#include "Character.hpp"

Character::Character(const Character &copy) : character_name(copy.character_name),
equipped_slots(copy.equipped_slots)
{
	for (int i = 0; i < equipped_slots; ++i)
		inventory[i] = copy.inventory[i];
}

Character::Character(const std::string &name) : character_name(name),
equipped_slots(0)
{}

Character::~Character()
{
	for (int i = 0; i < INVENTORY_SIZE; ++i)
		delete inventory[i];
}

Character &Character::operator=(const Character &a) {
	character_name = a.character_name;
	equipped_slots = a.equipped_slots;
	for (int i = 0; i < equipped_slots; ++i)
		inventory[i] = a.inventory[i];
	return *this;
}

const std::string &Character::getName() const {
	return character_name;
}

void Character::equip(AMateria *m) {
	if (equipped_slots < INVENTORY_SIZE)
		inventory[equipped_slots++] = m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < equipped_slots)
	{
		--equipped_slots;
		for (int i = idx; i < equipped_slots; ++i)
			inventory[i] = inventory[i + 1];
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < equipped_slots)
	{
		inventory[idx]->use(target);
	}
}