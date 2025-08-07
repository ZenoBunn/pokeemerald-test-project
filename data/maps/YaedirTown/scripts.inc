YaedirTown_MapScripts::
	.byte 0


YaedirTown_PlayerHouseSign::
# 4 "data/maps/YaedirTown/scripts.pory"
	lockall
# 5 "data/maps/YaedirTown/scripts.pory"
	msgbox YaedirTown_PlayerHouseSign_Text_0
# 6 "data/maps/YaedirTown/scripts.pory"
	releaseall
	return


YaedirTown_RivalHouseSign::
# 9 "data/maps/YaedirTown/scripts.pory"
	lockall
# 10 "data/maps/YaedirTown/scripts.pory"
	msgbox YaedirTown_RivalHouseSign_Text_0
# 11 "data/maps/YaedirTown/scripts.pory"
	releaseall
	return


YaedirTown_DockSign::
# 14 "data/maps/YaedirTown/scripts.pory"
	lockall
# 15 "data/maps/YaedirTown/scripts.pory"
	msgbox YaedirTown_DockSign_Text_0
# 16 "data/maps/YaedirTown/scripts.pory"
	releaseall
	return


YaedirTown_PlayerHouseSign_Text_0:
# 5 "data/maps/YaedirTown/scripts.pory"
	.string "It's {PLAYER}'s house.$"

YaedirTown_RivalHouseSign_Text_0:
# 10 "data/maps/YaedirTown/scripts.pory"
	.string "It's Bugger's house.$"

YaedirTown_DockSign_Text_0:
# 15 "data/maps/YaedirTown/scripts.pory"
	.string "Remember to wash your hands!\n"
	.string "asdasdasdasdaadasdasdad$"
