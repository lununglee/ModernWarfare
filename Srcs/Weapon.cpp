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

Weapon::Weapon(S_WeaponStat WeaponStatToSet)
:	Name {"Default"},
	WeaponStat {WeaponStatToSet}
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

std::string		Weapon::GetName() const { return Name; }
S_WeaponStat	Weapon::GetStats() const { return WeaponStat; }
double			Weapon::GetRPM() const { return WeaponStat.RPM; }
int				Weapon::GetAmmoCount() const { return WeaponStat.AmmoCount; }
E_AmmoCaliber	Weapon::GetAmmoCaliber() const { return WeaponStat.AmmoCaliber; }
E_FireType		Weapon::GetFireType() const { return WeaponStat.FireType; }
S_RangeDropOff	Weapon::GetRangeDropOff() const { return WeaponStat.RangeDropOff; }
double			Weapon::GetDamage() const { return WeaponStat.Damage; }
double			Weapon::GetBulletVelocity() const { return WeaponStat.BulletVelocity; }
double			Weapon::GetHorizontalRecoil() const { return WeaponStat.HorizontalRecoil; }
double			Weapon::GetVerticalRecoil() const { return WeaponStat.VerticalRecoil; }
double			Weapon::GetHorizontalRecoilVariation() const { return WeaponStat.HorizontalRecoilVariation; }
double			Weapon::GetVerticalRecoilVariation() const { return WeaponStat.VerticalRecoilVariation; }
double			Weapon::GetHipfireSpread() const { return WeaponStat.HipfireSpread; }

/*********************************
*            Setters             *
*********************************/

void			Weapon::SetName(std::string NameToSet) { Name = NameToSet; }
void			Weapon::SetStats(S_WeaponStat StatsToSet) { WeaponStat = StatsToSet; }
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

Weapon			&Weapon::operator=(S_WeaponStat Rhs)
{
	this->WeaponStat = Rhs;
	this->Name = "Overloaded assignment";
	return *this;
}

Weapon			&Weapon::operator=(const Weapon &Rhs)	// Overloading Copy Assignment
{
	if (this == &Rhs)
		return *this;
	else
	{
		this->Name = Rhs.Name;
		this->WeaponStat = Rhs.WeaponStat;
		return *this;
	}
}

Weapon			&Weapon::operator=(Weapon &&Rhs)		// Overloading Move Assignment
{
	if (this == &Rhs)
		return *this;
	else
	{
		this->Name = Rhs.Name;
		this->WeaponStat = Rhs.WeaponStat;
		Rhs.Name = {};
		Rhs.WeaponStat = {};
		return *this;
	}
}

std::ostream	&operator<<(std::ostream &OS, const Weapon &Rhs)
{
	OS << std::setw(30) << "Weapon Name: " << Rhs.GetName() << std::endl;
	OS << std::setw(30) << "RPM: " << Rhs.GetRPM() << " rounds per minute" << std::endl;
	OS << std::setw(30) << "Ammo Count: " << Rhs.GetAmmoCount() << " bullets" << std::endl;
	OS << std::setw(30) << "Ammo Caliber: " << Rhs.GetAmmoCaliber() << std::endl;
	OS << std::setw(30) << "Fire Mode: " << Rhs.GetFireType() << std::endl;
	OS << std::fixed << std::setprecision(2) << std::setw(30) << "Range Fall Off Begin: " << Rhs.GetRangeDropOff().FallOffBegin << " meters" << std::endl;
	OS << std::fixed << std::setprecision(2) << std::setw(30) << "Range Fall Off End: " << Rhs.GetRangeDropOff().FallOffEnd << " meters" << std::endl;
	OS << std::resetiosflags(std::ios_base::showpoint);
	OS << std::setw(30) << "Weapon Damage: " << Rhs.GetDamage() << std::endl;
	OS << std::setw(30) << "Bullet Velocity: " << Rhs.GetBulletVelocity() << " meters per second" << std::endl;
	OS << std::setw(30) << "Horizontal Recoil: " << Rhs.GetHorizontalRecoil() << std::endl;
	OS << std::setw(30) << "Vertical Recoil: " << Rhs.GetVerticalRecoil() << std::endl;
	OS << std::setw(30) << "Horizontal Recoil Variation: " << Rhs.GetHorizontalRecoilVariation() << std::endl;
	OS << std::setw(30) << "Vertical Recoil Variation: " << Rhs.GetVerticalRecoilVariation() << std::endl;
	OS << std::setw(30) << "Hipfire Spread: " << Rhs.GetHipfireSpread();
	return OS;
}
