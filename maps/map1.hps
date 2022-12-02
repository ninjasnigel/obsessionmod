void OnStart()
{
	SetEntityPlayerInteractCallback("barrel01_6", "BARRELS", true); 
	SetEntityPlayerInteractCallback("nyckel1", "ActivateMonster", true); 
	SetEntityPlayerInteractCallback("mat", "ActivateEntity", true); 
	AddEntityCollideCallback("Player", "ScriptArea_1", "Scare1", true, 1); 
	AddEntityCollideCallback("Player", "ScriptArea_2", "Scare2", true, 1);
	SetEntityPlayerInteractCallback("nyckel2", "Scare3", true); 
	SetEntityPlayerInteractCallback("barrel01_8", "BARRELS", true); 
	SetEntityPlayerInteractCallback("barrel01_9", "BARRELS", true);
	SetEntityPlayerInteractCallback("barrel01_10", "BARRELS", true); 
	SetEntityPlayerInteractCallback("barrel01_5", "BARRELS", true); 
	SetEntityPlayerInteractCallback("barrel01_4", "BARRELS", true); 
	SetEntityPlayerInteractCallback("hollow_needle_2", "pickup", true); 
	SetEntityPlayerInteractCallback("nyckel3", "Scare4", true); 
	SetEntityPlayerInteractCallback("saksak", "sakgrej", true); 
	SetEntityPlayerInteractCallback("barrel01_7", "BARRELS", true); 
	SetEntityPlayerInteractCallback("barrel01_2", "BARRELS", true); 
}

////////////////////////////
// Run when entering map
void OnEnter()
{
	AddUseItemCallback("", "nyckel1", "mansion_2", "KeyOnDoor", true);
	AddUseItemCallback("", "nyckel2", "deskdoor1", "KeyOnDoor2", true);
	AddUseItemCallback("", "hollow_needle_2", "kitchendoor", "KeyOnDoor3", true);
	AddUseItemCallback("", "nyckel3", "mansion_1", "KeyOnDoor4", true);
	AddUseItemCallback("", "saksak", "upper1", "KeyOnDoor5", true);
}

void KeyOnDoor(string &in asItem, string &in asEntity)
{
	SetSwingDoorLocked("mansion_2", false, true); PlaySoundAtEntity("", "unlock_door", "mansion_2", 1, false); RemoveItem("nyckel1"); 
}

void KeyOnDoor2(string &in asItem, string &in asEntity)
{
	SetSwingDoorLocked("deskdoor1", false, true); PlaySoundAtEntity("", "unlock_door", "deskdoor1", 1, false); RemoveItem("mininyckel"); 
}

void KeyOnDoor3(string &in asItem, string &in asEntity)
{
	SetSwingDoorLocked("kitchendoor", false, true);
	PlaySoundAtEntity("", "unlock_door", "kitchendoor", 1, false);
	RemoveItem("hollow_needle_2"); 
}

void KeyOnDoor4(string &in asItem, string &in asEntity)
{
	SetSwingDoorLocked("mansion_1", false, true);
	PlaySoundAtEntity("", "unlock_door", "mansion_1", 1, false);
	RemoveItem("nyckel3"); 
}

void KeyOnDoor5(string &in asItem, string &in asEntity)
{
	SetLevelDoorLocked("upper1", false); 
	PlaySoundAtEntity("", "puzzle_acid.snt", "upper1", 1, false); 
	RemoveItem("saksak"); 
}


////////////////////////////
// Run when leaving map
void OnLeave()
{

}

void ActivateMonster(string &in item)
{
	SetEntityActive("bro1", true);
	AddEnemyPatrolNode("bro1", "PathNodeArea_1", 0, "Idle");
	AddEnemyPatrolNode("bro1", "PathNodeArea_2", 0, "Idle");
}

void ActivateEntity(string &in item)
{
	SetEntityActive("man", true); 
	PlaySoundAtEntity("", "21_screams.snt", "Player", 0, false); 
}

void Scare1(string &in asParent, string &in asChild, int alState)
{
	SetEntityActive("lampa1", true); 
	SetEntityActive("lampa2", true); 
	SetEntityActive("Scare1", true); 
	PlaySoundAtEntity("", "21_screams.snt", "Player", 0, false); 
	SetPlayerSanity(10.0f); 
	AddPropImpulse("Scare1", 50, 0, 0, "world"); 
}

void Scare2(string &in asParent, string &in asChild, int alState)
{
	SetEntityActive("Scare2", true); 
	PlaySoundAtEntity("", "21_screams.snt", "Player", 0, false); 
	AddPropImpulse("Scare2", 0, 0, -25, "world"); 
}

void Scare3(string &in item)
{
	SetEntityActive("spider1", true); 
	PlaySoundAtEntity("", "21_screams.snt", "Player", 0, false); 
}

void pickup(string &in item)
{
	SetEntityActive("light", false);
}

void scare4(string &in item) 
{
	SetEntityActive("head", true); 
	PlaySoundAtEntity("", "21_screams.snt", "Player", 0, false); 
}

void sakgrej(string &in item)
{
	SetEntityActive("barrel01_1", true); 
	SetEntityActive("barrel01_2", true); 
	SetEntityActive("barrel01_3", true); 
	SetEntityActive("barrel01_4", true); 
	SetEntityActive("barrel01_5", true); 
	SetEntityActive("barrel01_6", true); 
	SetEntityActive("barrel01_7", true); 
	SetEntityActive("barrel01_8", true); 
	SetEntityActive("barrel01_9", true); 
	SetEntityActive("barrel01_10", true); 
	SetEntityActive("barrel01_11", true); 
	SetEntityActive("barrel01_12", true); 
	SetEntityActive("barrel01_13", true); 
}

void BARRELS(string &in item)
{
	AddPropImpulse("barrel01_7", 0, 0, -50, "world"); 
	AddPropImpulse("barrel01_8", 0, 0, -50, "world"); 
	AddPropImpulse("barrel01_9", 0, 0, -50, "world"); 
	AddPropImpulse("barrel01_10", 0, 0, -50, "world"); 
	AddPropImpulse("barrel01_11", 0, 0, -50, "world"); 
	AddPropImpulse("barrel01_12", 0, 0, -50, "world"); 
	AddPropImpulse("barrel01_13", 0, 0, -50, "world"); 
	AddPropImpulse("barrel01_6", 0, 0, -50, "world");
	AddPropImpulse("barrel01_4", 0, 0, -50, "world"); 
	AddPropImpulse("barrel01_3", 0, 0, -50, "world"); 
	AddPropImpulse("barrel01_2", 0, 0, -50, "world"); 
	AddPropImpulse("barrel01_1", 0, 0, -50, "world"); 
	PlaySoundAtEntity("", "23_strap2.snt", "Player", 0, false); 
}
