#include <ModernWarfare/Weapon.h>

/*********************************
*          Constructors          *
*********************************/

Weapon::Weapon()
:	Weapon {"Default", {}}
{ }

Weapon::Weapon(std::string NameToSet)
:	Weapon {NameToSet, {}}
{ }

Weapon::Weapon(std::string NameToSet, S_WeaponStat WeaponStatToSet)
:	Name {NameToSet},
	WeaponStat {WeaponStatToSet}
{ }

/*********************************
*           Destructor           *
*********************************/

Weapon::~Weapon() = default;

/*********************************
*             Mover              *
*********************************/

// Weapon::Weapon(Weapon &&Rhs)
// : Weapon {Rhs.Name, Rhs.WeaponStat}
// {
// 	Rhs.Name = nullptr;
// 	Rhs.WeaponStat = nullptr;
// }

/*********************************
*             Copier             *
*********************************/

// Weapon::Weapon(const Weapon &Rhs)
// :	Weapon {Rhs.Name, Rhs.WeaponStat}
// { }

/*********************************
*            Getters             *
*********************************/



/*********************************
*            Setters             *
*********************************/



/*********************************
*          Overloaders           *
*********************************/