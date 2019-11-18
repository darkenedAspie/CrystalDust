VioletCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VioletCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

VioletCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_VIOLET_CITY
	return


VioletCity_Earl::
	lockall
	applymovement 1, VioletCity_Movement_EarlSpin
	waitmovement 0
	faceplayer
	msgbox VioletCity_Earl_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq VioletCity_Earl_1
	msgbox VioletCity_Earl_Text_2
	closemessage
	playbgm MUS_FOLLOWME, 0
	switch VAR_FACING
	case DIR_SOUTH, VioletCity_Earl_6
	case DIR_NORTH, VioletCity_Earl_7
	case DIR_WEST, VioletCity_Earl_8
	case DIR_EAST, VioletCity_Earl_9
VioletCity_Earl_4:
	applymovement 1, VioletCity_Movement_EarlSpin
	waitmovement 0
	fadedefaultbgm
	msgbox VioletCity_Earl_Text_3
	closemessage
	applymovement 1, VioletCity_Movement_EarlSpin
	waitmovement 0
	applymovement 1, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	opendoor 37, 19
	waitdooranim
	applymovement 1, VioletCity_Movement_EarlIntoDoor
	waitmovement 0
	removeobject 1
	closedoor 37, 19
	waitdooranim
	clearflag FLAG_HIDE_VIOLET_CITY_ACADEMY_EARL
	releaseall
	return

VioletCity_Earl_1:
	msgbox VioletCity_Earl_Text_1
	releaseall
	return

VioletCity_Earl_6:
	applymovement 1, VioletCity_Movement_EarlToAcademy
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_PlayerToAcademySouth
	waitmovement 0
	goto VioletCity_Earl_4

VioletCity_Earl_7:
	applymovement 1, VioletCity_Movement_EarlToAcademy
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_PlayerToAcademyNorth
	waitmovement 0
	goto VioletCity_Earl_4

VioletCity_Earl_8:
	applymovement 1, VioletCity_Movement_EarlToAcademy
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_PlayerToAcademyWest
	waitmovement 0
	goto VioletCity_Earl_4

VioletCity_Earl_9:
	applymovement 1, VioletCity_Movement_EarlToAcademy
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_PlayerToAcademyEast
	waitmovement 0
	goto VioletCity_Earl_4


VioletCity_Movement_EarlSpin:
	face_down
	delay_1
	face_left
	delay_1
	face_up
	delay_1
	face_right
	delay_1
	face_down
	delay_1
	face_left
	delay_1
	face_up
	delay_1
	face_right
	delay_1
	face_down
	delay_1
	face_left
	delay_1
	face_up
	delay_1
	face_right
	delay_1
	face_down
	step_end

VioletCity_Movement_EarlToAcademy:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	face_down
	delay_1
	face_left
	delay_1
	face_up
	delay_1
	face_right
	delay_1
	face_down
	delay_1
	face_left
	delay_1
	face_up
	delay_1
	face_right
	delay_1
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	delay_1
	face_left
	delay_1
	face_up
	delay_1
	face_right
	delay_1
	face_down
	delay_1
	face_left
	delay_1
	face_up
	delay_1
	face_right
	delay_1
	walk_fast_down
	face_down
	delay_1
	face_left
	delay_1
	face_up
	delay_1
	face_right
	delay_1
	face_down
	delay_1
	face_left
	delay_1
	face_up
	delay_1
	face_right
	delay_1
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	delay_1
	face_left
	delay_1
	face_up
	delay_1
	face_right
	delay_1
	face_down
	delay_1
	face_left
	delay_1
	face_up
	delay_1
	face_right
	delay_1
	walk_fast_up
	walk_fast_up
	step_end

VioletCity_Movement_PlayerToAcademySouth:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_16
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	delay_16
	walk_fast_right
	face_down
	delay_16
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	delay_16
	walk_fast_right
	walk_fast_up
	step_end

VioletCity_Movement_PlayerToAcademyNorth:
	walk_fast_left
	walk_fast_right
	walk_fast_down
	delay_16
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	delay_16
	walk_fast_right
	face_down
	delay_16
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	delay_16
	walk_fast_right
	walk_fast_up
	step_end

VioletCity_Movement_PlayerToAcademyWest:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	delay_16
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	delay_16
	walk_fast_right
	face_down
	delay_16
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	delay_16
	walk_fast_right
	walk_fast_up
	step_end

VioletCity_Movement_PlayerToAcademyEast:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	delay_16
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	delay_16
	walk_fast_right
	face_down
	delay_16
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	delay_16
	walk_fast_right
	walk_fast_up
	step_end

VioletCity_Movement_EarlIntoDoor:
	walk_up
	set_invisible
	step_end

VioletCity_GhostGirl::
	msgbox VioletCity_GhostGirl_Text_0, MSGBOX_NPC
	return


VioletCity_PrimeTimeGuy::
	msgbox VioletCity_PrimeTimeGuy_Text_0, MSGBOX_NPC
	return


VioletCity_Gramps::
	msgbox VioletCity_Gramps_Text_0, MSGBOX_NPC
	return


VioletCity_TreeBoy::
	msgbox VioletCity_TreeBoy_Text_0, MSGBOX_NPC
	return


VioletCity_TownSloganSign::
	msgbox VioletCity_TownSloganSign_Text_0, MSGBOX_SIGN
	return


VioletCity_GymSign::
	msgbox VioletCity_GymSign_Text_0, MSGBOX_SIGN
	return


VioletCity_SproutTowerSign::
	msgbox VioletCity_SproutTowerSign_Text_0, MSGBOX_SIGN
	return


VioletCity_EarlsAcademySign::
	msgbox VioletCity_EarlsAcademySign_Text_0, MSGBOX_SIGN
	return


VioletCity_EventScript_1DC390:: @ 81DC390
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	applymovement 5, VioletCity_Movement_1DC41B
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_1DC406
	waitmovement 0
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 5
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	applymovement 5, VioletCity_Movement_1DC42D
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_1DC418
	waitmovement 0
	setflag FLAG_HIDE_VIOLET_CITY_WALLYS_UNCLE
	hideobjectat EVENT_OBJ_ID_PLAYER, MAP_VIOLET_CITY
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	fadedefaultbgm
	clearflag FLAG_SPECIAL_FLAG_0x4001
	warp MAP_VIOLET_CITY_WALLYS_HOUSE, 255, 2, 4
	waitstate
	releaseall
	end

VioletCity_EventScript_1DC3E6:: @ 81DC3E6
	lock
	faceplayer
	msgbox VioletCity_Text_1DC985, MSGBOX_DEFAULT
	closemessage
	applymovement 3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VioletCity_EventScript_1DC3FD:: @ 81DC3FD
	msgbox VioletCity_Text_1DC837, MSGBOX_NPC
	end

VioletCity_Movement_1DC406: @ 81DC406
	delay_8
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

VioletCity_Movement_1DC418: @ 81DC418
	walk_up
	walk_up
	step_end

VioletCity_Movement_1DC41B: @ 81DC41B
	delay_8
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

VioletCity_Movement_1DC42D: @ 81DC42D
	walk_up
	set_invisible
	step_end

VioletCity_Movement_1DC430: @ 81DC430
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_in_place_fastest_right
	step_end

VioletCity_Movement_1DC451: @ 81DC451
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_right
	step_end

VioletCity_EventScript_1DC476:: @ 81DC476
	msgbox VioletCity_Text_1DCAAA, MSGBOX_SIGN
	end

VioletCity_EventScript_1DC47F:: @ 81DC47F
	msgbox VioletCity_Text_1DCAF1, MSGBOX_SIGN
	end

VioletCity_EventScript_1DC488:: @ 81DC488
	msgbox VioletCity_Text_1DCA30, MSGBOX_NPC
	end

VioletCity_EventScript_1DC491:: @ 81DC491
	msgbox VioletCity_Text_1DCB23, MSGBOX_SIGN
	end

VioletCity_EventScript_1DC49A:: @ 81DC49A
	lockall
	setvar VAR_0x8008, 0
	goto VioletCity_EventScript_1DC4CA
	end

VioletCity_EventScript_1DC4A6:: @ 81DC4A6
	lockall
	setvar VAR_0x8008, 1
	goto VioletCity_EventScript_1DC4CA
	end

VioletCity_EventScript_1DC4B2:: @ 81DC4B2
	lockall
	setvar VAR_0x8008, 2
	goto VioletCity_EventScript_1DC4CA
	end

VioletCity_EventScript_1DC4BE:: @ 81DC4BE
	lockall
	setvar VAR_0x8008, 3
	goto VioletCity_EventScript_1DC4CA
	end

VioletCity_EventScript_1DC4CA:: @ 81DC4CA
	applymovement 8, Common_Movement_FacePlayer
	waitmovement 0
	playbgm MUS_FOLLOWME, 0
	playse SE_PIN
	applymovement 8, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 8, Common_Movement_Delay48
	waitmovement 0
	compare VAR_0x8008, 0
	call_if_eq VioletCity_EventScript_1DC57F
	compare VAR_0x8008, 1
	call_if_eq VioletCity_EventScript_1DC594
	compare VAR_0x8008, 2
	call_if_eq VioletCity_EventScript_1DC59F
	compare VAR_0x8008, 3
	call_if_eq VioletCity_EventScript_1DC5B4
	msgbox VioletCity_Text_1DC881, MSGBOX_DEFAULT
	closemessage
	compare VAR_0x8008, 0
	call_if_eq VioletCity_EventScript_1DC5C9
	compare VAR_0x8008, 1
	call_if_eq VioletCity_EventScript_1DC5DB
	compare VAR_0x8008, 2
	call_if_eq VioletCity_EventScript_1DC5ED
	compare VAR_0x8008, 3
	call_if_eq VioletCity_EventScript_1DC5FF
	msgbox VioletCity_Text_1DC91B, MSGBOX_DEFAULT
	applymovement 8, Common_Movement_WalkInPlaceFastestRight
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
	waitmovement 0
	msgbox VioletCity_Text_1DC93E, MSGBOX_DEFAULT
	closemessage
	applymovement 8, VioletCity_Movement_1DC658
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

VioletCity_EventScript_1DC57F:: @ 81DC57F
	applymovement 8, VioletCity_Movement_1DC615
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	return

VioletCity_EventScript_1DC594:: @ 81DC594
	applymovement 8, VioletCity_Movement_1DC61A
	waitmovement 0
	return

VioletCity_EventScript_1DC59F:: @ 81DC59F
	applymovement 8, VioletCity_Movement_1DC61D
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	return

VioletCity_EventScript_1DC5B4:: @ 81DC5B4
	applymovement 8, VioletCity_Movement_1DC622
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	return

VioletCity_EventScript_1DC5C9:: @ 81DC5C9
	applymovement 8, VioletCity_Movement_1DC628
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_1DC665
	waitmovement 0
	return

VioletCity_EventScript_1DC5DB:: @ 81DC5DB
	applymovement 8, VioletCity_Movement_1DC633
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_1DC66F
	waitmovement 0
	return

VioletCity_EventScript_1DC5ED:: @ 81DC5ED
	applymovement 8, VioletCity_Movement_1DC641
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_1DC67C
	waitmovement 0
	return

VioletCity_EventScript_1DC5FF:: @ 81DC5FF
	applymovement 8, VioletCity_Movement_1DC64C
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_1DC686
	waitmovement 0
	return

VioletCity_Movement_1DC611:: @ 81DC611
	delay_16
	delay_16
	delay_16
	step_end

VioletCity_Movement_1DC615: @ 81DC615
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end

VioletCity_Movement_1DC61A: @ 81DC61A
	walk_right
	walk_right
	step_end

VioletCity_Movement_1DC61D: @ 81DC61D
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end

VioletCity_Movement_1DC622: @ 81DC622
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end

VioletCity_Movement_1DC628: @ 81DC628
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_fastest_up
	step_end

VioletCity_Movement_1DC633: @ 81DC633
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_fastest_up
	step_end

VioletCity_Movement_1DC641: @ 81DC641
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_fastest_up
	step_end

VioletCity_Movement_1DC64C: @ 81DC64C
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_fastest_up
	step_end

VioletCity_Movement_1DC658: @ 81DC658
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

VioletCity_Movement_1DC665: @ 81DC665
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

VioletCity_Movement_1DC66F: @ 81DC66F
	delay_16
	delay_16
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

VioletCity_Movement_1DC67C: @ 81DC67C
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

VioletCity_Movement_1DC686: @ 81DC686
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

VioletCity_EventScript_1DC691:: @ 81DC691
	lockall
	addobject 9
	setvar VAR_0x8008, 0
	setobjectxy 9, 13, 10
	goto VioletCity_EventScript_1DC6E9
	end

VioletCity_EventScript_1DC6A7:: @ 81DC6A7
	lockall
	addobject 9
	setvar VAR_0x8008, 1
	setobjectxy 9, 13, 11
	goto VioletCity_EventScript_1DC6E9
	end

VioletCity_EventScript_1DC6BD:: @ 81DC6BD
	lockall
	addobject 9
	setvar VAR_0x8008, 2
	setobjectxy 9, 13, 12
	goto VioletCity_EventScript_1DC6E9
	end

VioletCity_EventScript_1DC6D3:: @ 81DC6D3
	lockall
	addobject 9
	setvar VAR_0x8008, 3
	setobjectxy 9, 13, 13
	goto VioletCity_EventScript_1DC6E9
	end

VioletCity_EventScript_1DC6E9:: @ 81DC6E9
	applymovement 9, VioletCity_Movement_1DC7D6
	waitmovement 0
	playse SE_PIN
	applymovement 9, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 9, Common_Movement_Delay48
	waitmovement 0
	applymovement 9, VioletCity_Movement_1DC7DB
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
	waitmovement 0
	setvar VAR_SCOTT_STATE, 1
	msgbox VioletCity_Text_1DCB31, MSGBOX_DEFAULT
	closemessage
	applymovement 9, Common_Movement_WalkInPlaceFastestRight
	waitmovement 0
	delay 30
	msgbox VioletCity_Text_1DCB82, MSGBOX_DEFAULT
	closemessage
	applymovement 9, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	delay 30
	msgbox VioletCity_Text_1DCC09, MSGBOX_DEFAULT
	closemessage
	compare VAR_0x8008, 0
	call_if_eq VioletCity_EventScript_1DC78E
	compare VAR_0x8008, 1
	call_if_eq VioletCity_EventScript_1DC7A0
	compare VAR_0x8008, 2
	call_if_eq VioletCity_EventScript_1DC7B2
	compare VAR_0x8008, 3
	call_if_eq VioletCity_EventScript_1DC7C4
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
	removeobject 9
	releaseall
	end

VioletCity_EventScript_1DC78E:: @ 81DC78E
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_1DC7EE
	applymovement 9, VioletCity_Movement_1DC7E0
	waitmovement 0
	return

VioletCity_EventScript_1DC7A0:: @ 81DC7A0
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_1DC802
	applymovement 9, VioletCity_Movement_1DC7F5
	waitmovement 0
	return

VioletCity_EventScript_1DC7B2:: @ 81DC7B2
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_1DC815
	applymovement 9, VioletCity_Movement_1DC808
	waitmovement 0
	return

VioletCity_EventScript_1DC7C4:: @ 81DC7C4
	applymovement EVENT_OBJ_ID_PLAYER, VioletCity_Movement_1DC828
	applymovement 9, VioletCity_Movement_1DC81B
	waitmovement 0
	return

VioletCity_Movement_1DC7D6: @ 81DC7D6
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

VioletCity_Movement_1DC7DB: @ 81DC7DB
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

VioletCity_Movement_1DC7E0: @ 81DC7E0
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

VioletCity_Movement_1DC7EE: @ 81DC7EE
	delay_16
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

VioletCity_Movement_1DC7F5: @ 81DC7F5
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

VioletCity_Movement_1DC802: @ 81DC802
	delay_16
	walk_in_place_fastest_down
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

VioletCity_Movement_1DC808: @ 81DC808
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

VioletCity_Movement_1DC815: @ 81DC815
	delay_16
	walk_in_place_fastest_down
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

VioletCity_Movement_1DC81B: @ 81DC81B
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

VioletCity_Movement_1DC828: @ 81DC828
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

VioletCity_EventScript_1DC82E:: @ 81DC82E
	msgbox VioletCity_Text_1DC881, MSGBOX_NPC
	end

VioletCity_Text_1DC837: @ 81DC837
	.string "Where has our WALLY gone?\p"
	.string "We have to leave for VERDANTURF TOWN\n"
	.string "very soon…$"

VioletCity_Text_1DC881: @ 81DC881
	.string "Hiya! Are you maybe…\n"
	.string "A rookie TRAINER?\p"
	.string "Do you know what POKéMON TRAINERS\n"
	.string "do when they reach a new town?\p"
	.string "They first check what kind of GYM\n"
	.string "is in the town.$"

VioletCity_Text_1DC91B: @ 81DC91B
	.string "See? This is PETALBURG CITY's GYM.$"

VioletCity_Text_1DC93E: @ 81DC93E
	.string "This is the GYM's sign. Look for it\n"
	.string "whenever you're looking for a GYM.$"

VioletCity_Text_1DC985: @ 81DC985
	.string "My face is reflected in the water.\p"
	.string "It's a shining grin full of hope…\p"
	.string "Or it could be a look of somber silence\n"
	.string "struggling with fear…\p"
	.string "What do you see reflected in your face?$"

VioletCity_Text_1DCA30: @ 81DCA30
	.string "Let's say you have six POKéMON.\n"
	.string "If you catch another one…\p"
	.string "It is automatically sent to a STORAGE\n"
	.string "BOX over a PC connection.$"

VioletCity_Text_1DCAAA: @ 81DCAAA
	.string "PETALBURG CITY POKéMON GYM\n"
	.string "LEADER: NORMAN\l"
	.string "“A man in pursuit of power!”$"

VioletCity_Text_1DCAF1: @ 81DCAF1
	.string "PETALBURG CITY\n"
	.string "“Where people mingle with nature.”$"

VioletCity_Text_1DCB23: @ 81DCB23
	.string "WALLY'S HOUSE$"

VioletCity_Text_1DCB31: @ 81DCB31
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a POKéMON TRAINER?$"

VioletCity_Text_1DCB82: @ 81DCB82
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie TRAINER,\n"
	.string "or maybe you're just an ordinary kid.$"

VioletCity_Text_1DCC09: @ 81DCC09
	.string "I'm roaming the land in search of\n"
	.string "talented TRAINERS.\p"
	.string "I'm sorry to have taken your time.$"

VioletCity_Earl_Text_0:
	.string "Hello!\n"
	.string "You are TRAINER?\p"
	.string "Battle GYM LEADER, win you did?$"

VioletCity_Earl_Text_1:
	.string "Ooh, la la!\n"
	.string "Very indeed nice!$"

VioletCity_Earl_Text_2:
	.string "Is that so? Then study shall you!\n"
	.string "Follow me!$"

VioletCity_Earl_Text_3:
	.string "Here, teacher I am.\n"
	.string "Good it is you study here!$"

VioletCity_GhostGirl_Text_0:
	.string "Ghosts are rumored to appear in\n"
	.string "SPROUT TOWER.\p"
	.string "They said NORMAL-type POKéMON moves\n"
	.string "had no effect on ghosts.$"

VioletCity_PrimeTimeGuy_Text_0:
	.string "Hey, you're a POKéMON TRAINER?\p"
	.string "If you beat the GYM LEADER here,\n"
	.string "you'll be ready for prime time!$"

VioletCity_Gramps_Text_0:
	.string "FALKNER, from the VIOLET POKéMON\n"
	.string "GYM, is a fine TRAINER!\p"
	.string "He inherited his father's GYM and\n"
	.string "has done a great job with it.$"

VioletCity_TreeBoy_Text_0:
	.string "I saw a wiggly tree up ahead!\p"
	.string "If you touch it, it squirms and\n"
	.string "dances! Cool!$"

VioletCity_TownSloganSign_Text_0:
	.string "VIOLET CITY\n"
	.string "The City of Nostalgic Scents$"

VioletCity_GymSign_Text_0:
	.string "VIOLET CITY POKéMON GYM\n"
	.string "LEADER: FALKNER\l"
	.string "The Elegant FLYING POKéMON Master$"

VioletCity_SproutTowerSign_Text_0:
	.string "SPROUT TOWER\n"
	.string "Experience the Way of POKéMON$"

VioletCity_EarlsAcademySign_Text_0:
	.string "EARL'S POKéMON ACADEMY$"