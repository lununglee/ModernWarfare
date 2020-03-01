#ifndef _WEAPON_H_
#define _WEAPON_H_

#include <string>
#include <iostream>
#include <iomanip>

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
	// Constructors
	Weapon();
	Weapon(std::string NameToSet);
	Weapon(S_WeaponStat WeaponStatToSet);
	Weapon(std::string NameToSet, S_WeaponStat WeaponStatToSet);

	// Mover
	Weapon(Weapon &&Rhs);

	// Copier
	Weapon(const Weapon &Rhs);

	// Destructor
	~Weapon();

	// Basic getters
	std::string			GetName() const;
	S_WeaponStat		GetStats() const;
	double				GetRPM() const;
	int					GetAmmoCount() const;
	E_AmmoCaliber		GetAmmoCaliber() const;
	E_FireType			GetFireType() const;
	S_RangeDropOff		GetRangeDropOff() const;
	double				GetDamage() const;
	double				GetBulletVelocity() const;
	double				GetHorizontalRecoil() const;
	double				GetVerticalRecoil() const;
	double				GetHorizontalRecoilVariation() const;
	double				GetVerticalRecoilVariation() const;
	double				GetHipfireSpread() const;

	// Basic setters
	void				SetName(std::string NameToSet);
	void				SetStats(S_WeaponStat StatsToSet);
	void				SetRPM(double RPMToSet);
	void				SetAmmoCount(int AmmoCountToSet);
	void				SetAmmoCaliber(E_AmmoCaliber AmmoCaliberToSet);
	void				SetFireType(E_FireType FireTypeToSet);
	void				SetRangeDropOff(S_RangeDropOff RangeDropOffToSet);
	void				SetDamage(double DamageToSet);
	void				SetBulletVelocity(double BulletVelocityToSet);
	void				SetHorizontalRecoil(double HorizontalRecoilToSet);
	void				SetVerticalRecoil(double VerticalRecoilToSet);
	void				SetHorizontalRecoilVariation(double HorizontalRecoilVariationToSet);
	void				SetVerticalRecoilVariation(double VerticalRecoilVariationToSet);
	void				SetHipfireSpread(double HipfireSpreadToSet);

	// Overloeaders
	Weapon				&operator=(S_WeaponStat Rhs);	// Use setters instead of overloading operator?
	Weapon				&operator=(const Weapon &Rhs);
	Weapon				&operator=(Weapon &&Rhs);
	friend std::ostream	&operator<<(std::ostream &OS, const Weapon &Rhs);
};

#endif
