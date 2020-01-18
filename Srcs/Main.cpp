#include <ModernWarfare/Header.h>
#include <ModernWarfare/Weapon.h>

void	PrintWeapon(Weapon &WeaponToPrint)
{
	std::cout << std::setw(30) << "Weapon Name: " << WeaponToPrint.GetName() << std::endl;
	std::cout << std::setw(30) << "RPM: " << WeaponToPrint.GetRPM() << " rounds per minute" << std::endl;
	std::cout << std::setw(30) << "Ammo Count: " << WeaponToPrint.GetAmmoCount() << " bullets" << std::endl;
	std::cout << std::setw(30) << "Ammo Caliber: " << WeaponToPrint.GetAmmoCaliber() << std::endl;
	std::cout << std::setw(30) << "Fire Mode: " << WeaponToPrint.GetFireType() << std::endl;
	std::cout << std::fixed << std::setprecision(2) << std::setw(30) << "Range Fall Off Begin: " << WeaponToPrint.GetRangeDropOff().FallOffBegin << " meters" << std::endl;
	std::cout << std::fixed << std::setprecision(2) << std::setw(30) << "Range Fall Off End: " << WeaponToPrint.GetRangeDropOff().FallOffEnd << " meters" << std::endl;
	std::cout << std::resetiosflags(std::ios_base::showpoint);
	std::cout << std::setw(30) << "Weapon Damage: " << WeaponToPrint.GetDamage() << std::endl;
	std::cout << std::setw(30) << "Bullet Velocity: " << WeaponToPrint.GetBulletVelocity() << " meters per second" << std::endl;
	std::cout << std::setw(30) << "Horizontal Recoil: " << WeaponToPrint.GetHorizontalRecoil() << std::endl;
	std::cout << std::setw(30) << "Vertical Recoil: " << WeaponToPrint.GetVerticalRecoil() << std::endl;
	std::cout << std::setw(30) << "Horizontal Recoil Variation: " << WeaponToPrint.GetHorizontalRecoilVariation() << std::endl;
	std::cout << std::setw(30) << "Vertical Recoil Variation: " << WeaponToPrint.GetVerticalRecoilVariation() << std::endl;
	std::cout << std::setw(30) << "Hipfire Spread: " << WeaponToPrint.GetHipfireSpread() << std::endl;
}

int		main(void)
{
	S_WeaponStat Stats
	{
		750.0,
		30,
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
