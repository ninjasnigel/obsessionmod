void OnStart()
{
	AddEntityCollideCallback("Player", "ScriptArea_1", "tp1", true, 1); 
	AddEntityCollideCallback("Player", "ScriptArea_3", "scare0", true, 1); 
	AddEntityCollideCallback("Player", "ScriptArea_2", "scare1", true, 1); 
	AddEntityCollideCallback("Player", "ScriptArea_4", "tp2", true, 1); 
	AddEntityCollideCallback("Player", "ScriptArea_5", "scare2", true, 1); 
	AddTimer ("Speech", 3, "creepyshit");
}

void OnEnter()
{

}

void OnLeave()
{

}

void creepyshit(string &in asTimer)
{
	AddEffectVoice("creepy.ogg", "", "Player", "creepy", false, "", 0, 0);
}

void tp1(string &in asParent, string &in asChild, int alState)
{
	TeleportPlayer("tele0"); 
	PlaySoundAtEntity("", "21_screams.snt", "Player", 0, false); 
}

void scare0(string &in asParent, string &in asChild, int alState)
{
	PlaySoundAtEntity("", "21_screams.snt", "Player", 0, false); 
	SetEntityActive("grunt_body_part2_1", true); 
	AddPropImpulse("grunt_body_part2_1", 0, 0, 20, "world");
}

void scare1(string &in asParent, string &in asChild, int alState)
{
	PlaySoundAtEntity("", "21_screams.snt", "Player", 0, false); 
	SetEntityActive("pig_corpse_1", true); 
	AddPropImpulse("pig_corpse_1", 0, 0, 20, "world");
}

void tp2(string &in asParent, string &in asChild, int alState)
{
	TeleportPlayer("tele1"); 
	PlaySoundAtEntity("", "21_screams.snt", "Player", 0, false);
}

void scare2(string &in asParent, string &in asChild, int alState)
{
	SetEntityActive("hundhuvve", true); 
	AddPropImpulse("hundhuvve", 0, 0, 3, "world");
	AddEffectVoice("hund.ogg", "", "Player", "hund", false, "", 0, 0);
}