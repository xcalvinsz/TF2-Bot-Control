#if defined _botcontrol_included
 #endinput
#endif
#define _botcontrol_included

/**
 * Called whenever the function CTFBotSquad::GetLeader is called.
 * Allows the plugin to fakely change the leader of a bot squad.
 */
forward Action CTFBotSquad_OnGetLeader(Address pSquad, int& iOriginalLeader);

/**
 * Called whenever the function CWeaponMedigun::AllowedToHealTarget is called.
 */
forward Action CWeaponMedigun_IsAllowedToHealTarget(int iMedigun, int& iHealTarget, bool& bOriginalResult)

/**
 * Do not edit below this line!
 */
public Extension __ext_botcontrol = 
{
	name = "Bot Control Extension",
	file = "bot-control.ext",
#if defined AUTOLOAD_EXTENSIONS
	autoload = 1,
#else
	autoload = 0,
#endif
#if defined REQUIRE_EXTENSIONS
	required = 1,
#else
	required = 0,
#endif
};