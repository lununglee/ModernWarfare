#include <ModernWarfare/Header.h>
#include <ModernWarfare/Weapon.h>
#include <ModernWarfare/AssaultRifle.h>

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

	Weapon *Kilo = new AssaultRifle;
	Kilo->SetStats(Stats);
	std::cout << *Kilo << std::endl;

	return (0);
}
