#ifndef _WEAPON_H_
#define _WEAPON_H_

#include <string>

enum	E_FireType
{
	Bolt,
	SemiAutomatic,
	Burst,
	Automatic
};

enum	E_AmmoCaliber
{
	FortyFive_ACP,
	Nine_Millimeter,
	Ten_Millimeter,
	FiveFiveSix_NATO,
	SeveSixTwo_NATO,
	FourFiveEight_SOCOM,
	Fifty_BMG
};

struct	S_RangeDropOff
{
	double			FallOffBegin {};
	double			FallOffEnd {};
};

struct	S_WeaponStat
{
	double			RPM {};
	int				AmmoCount {};
	E_AmmoCaliber	AmmoCaliber {};
	E_FireType		FireType {};
	S_RangeDropOff	RangeDropOff {};
	double			Damage {};
	double			BulletVelocity {};
	double			HorizontalRecoil {};
	double			VerticalRecoil {};
	double			HorizontalRecoilVariation {};
	double			VerticalRecoilVariation {};
	double			HipfireSpread {};
};

class	Weapon
{
	public:
	std::string		Name {""};
	S_WeaponStat	WeaponStat {};

	public:
	// Constructors
	Weapon();
	Weapon(std::string NameToSet);
	Weapon(std::string NameToSet, S_WeaponStat WeaponStatToSet);
	
	// Mover
	Weapon(Weapon &&Rhs);

	// Copier
	Weapon(const Weapon &Rhs);

	// Destructor
	~Weapon();

	// Getters
	double			GetRPM();
	int				GetAmmoCount();
	E_AmmoCaliber	GetAmmoCaliber();
	E_FireType		GetFireType();
	S_RangeDropOff	GetRangeDropOff();
	double			GetDamage();
	double			GetBulletVelocity();
	double			GetHorizontalRecoil();
	double			GetVerticalRecoil();
	double			GetHorizontalRecoilVariation();
	double			GetVerticalRecoilVariation();
	
	// Setters
	void			SetRPM(double RPMToSet) const;
	void			SetAmmoCount(int AmmoCountToSet) const;
	void			SetAmmoCaliber(E_AmmoCaliber AmmoCaliberToSet) const;
	void			SetFireType(E_FireType FireTypeToSet) const;
	void			SetRangeDropOff(S_RangeDropOff RangeDropOffToSet) const;
	void			SetDamage(double DamageToSet) const;
	void			SetBulletVelocity(double BulletVelocityToSet) const;
	void			SetHorizontalRecoil(double HorizontalRecoilToSet) const;
	void			SetVerticalRecoil(double VerticalRecoilToSet) const;
	void			SetHorizontalRecoilVariation(double HorizontalRecoilVariationToSet) const;
	void			SetVerticalRecoilVariation(double VerticalRecoilVariationToSet) const;

	// Overloeaders
};

#endif