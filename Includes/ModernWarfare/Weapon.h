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
	private:
	std::string		Name {""};
	S_WeaponStat	WeaponStat {};

	public:
	// ructors
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
	std::string		GetName();
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
	double			GetHipfireSpread();
	
	// Setters
	void			SetName(std::string NameToSet);
	void			SetRPM(double RPMToSet);
	void			SetAmmoCount(int AmmoCountToSet);
	void			SetAmmoCaliber(E_AmmoCaliber AmmoCaliberToSet);
	void			SetFireType(E_FireType FireTypeToSet);
	void			SetRangeDropOff(S_RangeDropOff RangeDropOffToSet);
	void			SetDamage(double DamageToSet);
	void			SetBulletVelocity(double BulletVelocityToSet);
	void			SetHorizontalRecoil(double HorizontalRecoilToSet);
	void			SetVerticalRecoil(double VerticalRecoilToSet);
	void			SetHorizontalRecoilVariation(double HorizontalRecoilVariationToSet);
	void			SetVerticalRecoilVariation(double VerticalRecoilVariationToSet);
	void			SetHipfireSpread(double HipfireSpreadToSet);

	// Overloeaders
};

#endif