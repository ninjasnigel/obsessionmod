void OnStart()
{
	AddEntityCollideCallback("Player", "ScriptArea_2", "ActivateMonster", true, 1);
	AddEntityCollideCallback("Player", "ScriptArea_3", "Sak", true, 1); 
	AddEntityCollideCallback("Player", "ScriptArea_4", "Beginning", true, 1); 
	AddEntityCollideCallback("Player", "ScriptArea_5", "Sak2", true, 1); 
	PlaySoundAtEntity("", "start.snt", "player", 1, false); 
	
	/////////////
	///INTRO SAK
	AddTimer ("Speech", 3, "pratgrej");
	
}

void OnEnter()
{

}

void OnLeave()
{

}

void pratgrej(string &in asTimer)
{
	AddEffectVoice("start.ogg", "", "Player", "start", false, "", 0, 0);
}

void ActivateMonster(string &in asParent, string &in asChild, int alState)
{
	PlaySoundAtEntity("", "21_screams.snt", "player", 1, false); 
	SetEntityActive("scarybro1", true); 
	AddEnemyPatrolNode("scarybro1", "PathNodeArea_1", 0, "Idle"); 
	AddEnemyPatrolNode("scarybro1", "PathNodeArea_2", 0, "Idle"); 
	AddEnemyPatrolNode("scarybro1", "PathNodeArea_3", 0, "Idle"); 
	AddEnemyPatrolNode("scarybro1", "PathNodeArea_4", 0, "Idle"); 
	SetEntityActive("torch_floor_1", false);
	SetEntityActive("torch_floor_2", false);
	SetEntityActive("torch_floor_3", false);
	SetEntityActive("torch_floor_3", false);
	SetEntityActive("torch_floor_4", false);
	SetEntityActive("torch_floor_5", false);
	SetEntityActive("torch_floor_6", false);
	SetEntityActive("torch_floor_7", false);
	SetEntityActive("torch_floor_8", false);
	SetEntityActive("torch_floor_9", false);
	SetEntityActive("torch_floor_10", false);
	SetEntityActive("torch_floor_11", false);
	SetEntityActive("torch_floor_12", false);
	SetEntityActive("torch_floor_13", false);
	SetEntityActive("torch_floor_14", false);
	SetEntityActive("torch_floor_15", false);
	SetEntityActive("torch_floor_16", false);
	SetEntityActive("torch_floor_17", false);
	SetEntityActive("torch_floor_18", false);
	SetEntityActive("torch_floor_19", false);
	SetEntityActive("torch_floor_20", false);
	SetEntityActive("torch_floor_21", false);
	SetEntityActive("torch_floor_22", false);
	SetEntityActive("torch_floor_23", false);
	SetEntityActive("torch_floor_24", false);
	SetEntityActive("torch_floor_25", false);
	SetEntityActive("lampa", true);
	SetEntityActive("ScriptArea_3", true);
}

void Sak(string &in asParent, string &in asChild, int alState)
{
	SetEntityActive("torch_static01_1", false);
	SetEntityActive("torch_static01_2", false);
	SetEntityActive("torch_static01_3", false);
	SetEntityActive("torch_static01_4", false);
	SetEntityActive("torch_static01_5", false); 
	SetEntityActive("stairwelder_torch_2", true); 
	SetEntityActive("stairwelder_torch_1", true); 
}

void Beginning(string &in asParent, string &in asChild, int alState)
{
	PlaySoundAtEntity("", "start.snt", "player", 1, false); 
}

void Sak2(string &in asParent, string &in asChild, int alState)
{
	SetEntityActive("ern_1", true);
	SetEntityActive("candle_floor_1", true);
	SetEntityActive("candle_floor_2", true);
	SetEntityActive("candle_floor_3", true);
	SetEntityActive("candle_floor_4", true);
	SetEntityActive("candle_floor_5", true);
	SetEntityActive("candle_floor_6", true);
	SetEntityActive("candle_floor_7", true);
	SetEntityActive("candle_floor_8", true);
	SetEntityActive("candle_floor_9", true);
	SetEntityActive("candle_floor_10", true);
	SetEntityActive("candle_floor_11", true);
	SetEntityActive("candle_floor_12", true);
	SetEntityActive("candle_floor_13", true);
	SetEntityActive("candle_floor_14", true);
	SetEntityActive("candle_floor_15", true);
	SetEntityActive("candle_floor_16", true);
	SetEntityActive("candle_floor_17", true);
	SetEntityActive("candle_floor_18", true);
	SetEntityActive("candle_floor_19", true);
	SetEntityActive("candle_floor_20", true);
	SetEntityActive("candle_floor_21", true);
	PlaySoundAtEntity("", "21_screams.snt", "Player", 0, false);
	AddPropImpulse("ern_1", -9, 0, 3, "world");
}