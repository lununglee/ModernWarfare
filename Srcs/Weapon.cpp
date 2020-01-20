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

Weapon::Weapon(Weapon &&Rhs)
: Weapon {Rhs.Name, Rhs.WeaponStat}
{
	Rhs.Name = "";
	Rhs.WeaponStat = {};
}

/*********************************
*             Copier             *
*********************************/

Weapon::Weapon(const Weapon &Rhs)
:	Weapon {Rhs.Name, Rhs.WeaponStat}
{ }

/*********************************
*            Getters             *
*********************************/

std::string		Weapon::GetName() { return Name; }
double			Weapon::GetRPM() { return WeaponStat.RPM; }
int				Weapon::GetAmmoCount() { return WeaponStat.AmmoCount; }
E_AmmoCaliber	Weapon::GetAmmoCaliber() { return WeaponStat.AmmoCaliber; }
E_FireType		Weapon::GetFireType() { return WeaponStat.FireType; }
S_RangeDropOff	Weapon::GetRangeDropOff() { return WeaponStat.RangeDropOff; }
double			Weapon::GetDamage() { return WeaponStat.Damage; }
double			Weapon::GetBulletVelocity() { return WeaponStat.BulletVelocity; }
double			Weapon::GetHorizontalRecoil() { return WeaponStat.HorizontalRecoil; }
double			Weapon::GetVerticalRecoil() { return WeaponStat.VerticalRecoil; }
double			Weapon::GetHorizontalRecoilVariation() { return WeaponStat.HorizontalRecoilVariation; }
double			Weapon::GetVerticalRecoilVariation() { return WeaponStat.VerticalRecoilVariation; }
double			Weapon::GetHipfireSpread() { return WeaponStat.HipfireSpread; }

/*********************************
*            Setters             *
*********************************/

void			Weapon::SetName(std::string NameToSet) { Name = NameToSet; }
void			Weapon::SetRPM(double RPMToSet) { WeaponStat.RPM = RPMToSet; }
void			Weapon::SetAmmoCount(int AmmoCountToSet) { WeaponStat.AmmoCount = AmmoCountToSet; }
void			Weapon::SetAmmoCaliber(E_AmmoCaliber AmmoCaliberToSet) { WeaponStat.AmmoCaliber = AmmoCaliberToSet; }
void			Weapon::SetFireType(E_FireType FireTypeToSet) { WeaponStat.FireType = FireTypeToSet; }
void			Weapon::SetRangeDropOff(S_RangeDropOff RangeDropOffToSet) { WeaponStat.RangeDropOff = RangeDropOffToSet; }
void			Weapon::SetDamage(double DamageToSet) { WeaponStat.Damage = DamageToSet; }
void			Weapon::SetBulletVelocity(double BulletVelocityToSet) { WeaponStat.BulletVelocity = BulletVelocityToSet; }
void			Weapon::SetHorizontalRecoil(double HorizontalRecoilToSet) { WeaponStat.HorizontalRecoil = HorizontalRecoilToSet; }
void			Weapon::SetVerticalRecoil(double VerticalRecoilToSet) { WeaponStat.VerticalRecoil = VerticalRecoilToSet; }
void			Weapon::SetHorizontalRecoilVariation(double HorizontalRecoilVariationToSet) { WeaponStat.HorizontalRecoilVariation = HorizontalRecoilVariationToSet; }
void			Weapon::SetVerticalRecoilVariation(double VerticalRecoilVariationToSet) { WeaponStat.VerticalRecoilVariation = VerticalRecoilVariationToSet; }
void			Weapon::SetHipfireSpread(double HipfireSpreadToSet) { WeaponStat.HipfireSpread = HipfireSpreadToSet; }

/*********************************
*          Overloaders           *
*********************************/

