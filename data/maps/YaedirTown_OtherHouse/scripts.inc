YaedirTown_OtherHouse_MapScripts::
	.byte 0


YaedirTown_OtherHouse_TestNPC::
# 4 "data/maps/YaedirTown_OtherHouse/scripts.pory"
	lockall
# 5 "data/maps/YaedirTown_OtherHouse/scripts.pory"
	msgbox YaedirTown_OtherHouse_TestNPC_Text_0
# 6 "data/maps/YaedirTown_OtherHouse/scripts.pory"
	msgbox YaedirTown_OtherHouse_TestNPC_Text_1
# 7 "data/maps/YaedirTown_OtherHouse/scripts.pory"
	releaseall
	return


YaedirTown_OtherHouse_TestNPC_Text_0:
# 5 "data/maps/YaedirTown_OtherHouse/scripts.pory"
	.string "Hey {PLAYER}! This is another crazy\n"
	.string "test message. Woah!$"

YaedirTown_OtherHouse_TestNPC_Text_1:
# 6 "data/maps/YaedirTown_OtherHouse/scripts.pory"
	.string "This is another message from house No.3!$"
