#include <ModernWarfare/Header.h>
#include <ModernWarfare/Weapon.h>

void	PrintWeapon(Weapon &WeaponToPrint)
{
	std::cout << std::setw(30) << "Weapon Name: " << WeaponToPrint.Name << std::endl;
	std::cout << std::setw(30) << "Ammo Count: " << WeaponToPrint.WeaponStat.AmmoCount << std::endl;
	std::cout << std::setw(30) << "Ammo Caliber: " << WeaponToPrint.WeaponStat.AmmoCaliber << std::endl;
	std::cout << std::setw(30) << "Fire Mode: " << WeaponToPrint.WeaponStat.FireType << std::endl;
	std::cout << std::setw(30) << "Range Fall Off Begin: " << WeaponToPrint.WeaponStat.RangeDropOff.FallOffBegin << std::endl;
	std::cout << std::setw(30) << "Range Fall Off End: " << WeaponToPrint.WeaponStat.RangeDropOff.FallOffEnd << std::endl;
	std::cout << std::setw(30) << "Weapon Damage: " << WeaponToPrint.WeaponStat.Damage << std::endl;
	std::cout << std::setw(30) << "Bullet Velocity: " << WeaponToPrint.WeaponStat.BulletVelocity << std::endl;
	std::cout << std::setw(30) << "Horizontal Recoil: " << WeaponToPrint.WeaponStat.HorizontalRecoil << std::endl;
	std::cout << std::setw(30) << "Vertical Recoil: " << WeaponToPrint.WeaponStat.VerticalRecoil << std::endl;
	std::cout << std::setw(30) << "Horizontal Recoil Variation: " << WeaponToPrint.WeaponStat.HorizontalRecoilVariation << std::endl;
	std::cout << std::setw(30) << "Vertical Recoil Variation: " << WeaponToPrint.WeaponStat.VerticalRecoilVariation << std::endl;
	std::cout << std::setw(30) << "Hipfire Spread: " << WeaponToPrint.WeaponStat.HipfireSpread << std::endl;
}

int		main(void)
{
	S_WeaponStat Stats
	{
		0.0,
		0,
		FiveFiveSix_NATO,
		Automatic,
		{
			25.0,
			35.0
		},
		28.0,
		900.0,
		0.25,
		0.25,
		0.15,
		0.15,
		0.35
	};

	std::cout << "Loading Modern Warfare..." << std::endl;
	Weapon Kilo("Kilo", Stats);
	PrintWeapon(Kilo);
	return (0);
}
