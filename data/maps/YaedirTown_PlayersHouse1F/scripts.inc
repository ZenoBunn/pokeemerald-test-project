YaedirTown_PlayersHouse1F_MapScripts::
	.byte 0


YaedirTown_PlayerHouse_TestNPC::
# 4 "data/maps/YaedirTown_PlayersHouse1F/scripts.pory"
	lockall
# 5 "data/maps/YaedirTown_PlayersHouse1F/scripts.pory"
	msgbox YaedirTown_PlayerHouse_TestNPC_Text_0
# 6 "data/maps/YaedirTown_PlayersHouse1F/scripts.pory"
	msgbox YaedirTown_PlayerHouse_TestNPC_Text_1
# 7 "data/maps/YaedirTown_PlayersHouse1F/scripts.pory"
	releaseall
	return


YaedirTown_PlayerHouse_TestNPC_Text_0:
# 5 "data/maps/YaedirTown_PlayersHouse1F/scripts.pory"
	.string "Hey {PLAYER}! This is a test message.\n"
	.string "Woah!$"

YaedirTown_PlayerHouse_TestNPC_Text_1:
# 6 "data/maps/YaedirTown_PlayersHouse1F/scripts.pory"
	.string "This is another message!$"
