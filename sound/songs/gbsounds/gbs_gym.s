	.include "MPlayDef.s"
	.include "GBCEngineDefs.s"

	.equ	gbs_gym_grp, voicegroup000
	.equ	gbs_gym_pri, 0
	.equ	gbs_gym_rev, 0
	.equ	gbs_gym_mvl, 127
	.equ	gbs_gym_key, 0
	.equ	gbs_gym_tbs, 1
	.equ	gbs_gym_exg, 0
	.equ	gbs_gym_cmp, 1


	.section .rodata
	.align 1

gbs_gym_track_0:
	.byte	KEYSH , gbs_gym_key+0
	.byte	TEMPO , GBP_TEMPO_BPM*gbs_gym_tbs/2
	.byte	GBP , 0x00
	.byte GBP_TEMPO
	.byte NONOTE0
	.byte GBP_Gs12
	.byte GBP_MVOL
	.byte GBP_Fs7
	.byte GBP_PAN
	.byte NONOTE15
	.byte GBP_MOD
	.byte GBP_C2
	.byte GBP_Cs4
	.byte GBP_DUTYC
	.byte NONOTE1
	.byte GBP_FRDEL
	.byte NONOTE12
	.byte GBP_As7
gbs_gym_track_0_goto_0:
	.byte OCT3
	.byte GBP_Fs1
	.byte OCT1
	.byte GBP_A0
	.byte GBP_A0
	.byte GBP_A0
	.byte NONOTE2
	.byte OCT3
	.byte GBP_E1
	.byte OCT1
	.byte GBP_G0
	.byte GBP_G0
	.byte GBP_G0
	.byte NONOTE2
	.byte OCT3
	.byte GBP_D1
	.byte OCT1
	.byte GBP_D0
	.byte GBP_D0
	.byte GBP_D0
	.byte NONOTE0
	.byte OCT2
	.byte GBP_D0
	.byte GBP_D0
	.byte GBP_B0
	.byte GBP_G0
	.byte GBP_D0
	.byte GBP_B0
	.byte OCT3
	.byte GBP_Cs0
	.byte OCT2
	.byte GBP_A0
	.byte GBP_E0
	.byte OCT3
	.byte GBP_E0
	.byte OCT2
	.byte GBP_A11
	.byte GBP_Fs1
	.byte GBP_A1
	.byte GBP_G0
	.byte NONOTE1
	.byte GBP_E0
	.byte GBP_E1
	.byte GBP_C1
	.byte OCT3
	.byte GBP_C1
	.byte OCT2
	.byte GBP_B1
	.byte GBP_A1
	.byte GBP_G1
	.byte GBP_Fs7
	.byte GBP_A3
	.byte GBP_Fs1
	.byte GBP_A1
	.byte GBP_E0
	.byte NONOTE0
	.byte GBP_E0
	.byte GBP_Fs0
	.byte GBP_G3
	.byte OCT3
	.byte GBP_C1
	.byte OCT2
	.byte GBP_B1
	.byte GBP_A1
	.byte OCT3
	.byte GBP_C1
	.byte GBP_D5
	.byte OCT2
	.byte GBP_A1
	.byte GBP_Fs1
	.byte GBP_E1
	.byte GBP_G1
	.byte GBP_A1
	.byte GBP_B0
	.byte NONOTE1
	.byte GBP_G0
	.byte GBP_G3
	.byte OCT3
	.byte GBP_E0
	.byte NONOTE1
	.byte GBP_C0
	.byte GBP_C1
	.byte OCT2
	.byte GBP_B0
	.byte GBP_As0
	.byte GBP_A11
	.byte GBP_Fs1
	.byte GBP_A1
	.byte OCT3
	.byte GBP_C1
	.byte OCT2
	.byte GBP_G0
	.byte OCT3
	.byte GBP_C0
	.byte GBP_E1
	.byte GBP_C1
	.byte GBP_E1
	.byte GBP_C0
	.byte GBP_E0
	.byte GBP_G3
	.byte GBP_D5
	.byte OCT2
	.byte GBP_A0
	.byte NONOTE2
	.byte GBP_A0
	.byte NONOTE0
	.byte GBP_A0
	.byte OCT3
	.byte GBP_Fs2
	.byte GBP_G3
	.byte GBP_Fs3
	.byte GBP_E3
	.byte GBP_C3
	.byte GBP_D0
	.byte NONOTE0
	.byte GBP_D0
	.byte GBP_E0
	.byte NONOTE1
	.byte OCT2
	.byte GBP_B3
	.byte GBP_Fs1
	.byte GBP_D1
	.byte GBP_Fs1
	.byte GBP_As0
	.byte GBP_A0
	.byte GBP_G0
	.byte GBP_F0
	.byte OCT3
	.byte GBP_D3
	.byte GBP_C0
	.byte OCT2
	.byte GBP_As0
	.byte GBP_A0
	.byte GBP_G0
	.byte OCT3
	.byte GBP_E3
	.byte GBP_Fs5
	.byte OCT2
	.byte GBP_A0
	.byte NONOTE2
	.byte GBP_A0
	.byte NONOTE0
	.byte GBP_A0
	.byte OCT3
	.byte GBP_Fs2
	.byte GBP_A3
	.byte GBP_G3
	.byte GBP_Fs3
	.byte GBP_E3
	.byte GBP_D0
	.byte OCT2
	.byte GBP_B0
	.byte GBP_Fs0
	.byte OCT3
	.byte GBP_E0
	.byte GBP_Fs3
	.byte GBP_E0
	.byte GBP_C0
	.byte OCT2
	.byte GBP_G0
	.byte OCT3
	.byte GBP_Fs0
	.byte GBP_G3
	.byte GBP_A0
	.byte GBP_G0
	.byte GBP_Fs0
	.byte GBP_E0
	.byte GBP_A3
	.byte OCT4
	.byte GBP_D3
	.byte OCT3
	.byte GBP_A0
	.byte GBP_G0
	.byte GBP_Fs0
	.byte GBP_E0
	.byte GBP_JUMPC
	.byte NONOTE0
	.int gbs_gym_track_0_goto_0

gbs_gym_track_1_call_0:
	.byte OCT2
	.byte GBP_D2
	.byte OCT1
	.byte GBP_D2
	.byte GBP_D1
	.byte GBP_D0
	.byte GBP_D0
	.byte GBP_D1
	.byte OCT2
	.byte GBP_D1
	.byte OCT1
	.byte GBP_A1
	.byte OCT2
	.byte GBP_C2
	.byte OCT1
	.byte GBP_C2
	.byte GBP_C1
	.byte GBP_C0
	.byte GBP_C0
	.byte GBP_C1
	.byte OCT2
	.byte GBP_E1
	.byte GBP_C0
	.byte GBP_Cs0
	.byte GBP_D2
	.byte OCT1
	.byte GBP_D2
	.byte GBP_D1
	.byte GBP_D0
	.byte GBP_D0
	.byte GBP_D1
	.byte OCT2
	.byte GBP_D1
	.byte OCT1
	.byte GBP_A1
	.byte OCT2
	.byte GBP_C2
	.byte OCT1
	.byte GBP_C2
	.byte GBP_C1
	.byte GBP_C0
	.byte GBP_C0
	.byte GBP_C1
	.byte GBP_RET

gbs_gym_track_1_call_1:
	.byte OCT1
	.byte GBP_D3
	.byte GBP_D1
	.byte OCT0
	.byte GBP_A0
	.byte GBP_A0
	.byte GBP_A0
	.byte OCT1
	.byte GBP_D0
	.byte OCT0
	.byte GBP_A1
	.byte OCT1
	.byte GBP_A1
	.byte GBP_D1
	.byte GBP_C3
	.byte GBP_C1
	.byte OCT0
	.byte GBP_G0
	.byte GBP_G0
	.byte GBP_G0
	.byte OCT1
	.byte GBP_C0
	.byte OCT0
	.byte GBP_G1
	.byte OCT1
	.byte GBP_G1
	.byte GBP_C1
	.byte OCT0
	.byte GBP_B1
	.byte NONOTE1
	.byte GBP_B1
	.byte GBP_Fs0
	.byte GBP_Fs0
	.byte GBP_RET

gbs_gym_track_1:
	.byte	KEYSH , gbs_gym_key+0
	.byte	GBP , 0x01
	.byte GBP_DUTYC
	.byte NONOTE1
	.byte GBP_PAN
	.byte 0xF0
gbs_gym_track_1_goto_0:
	.byte GBP_FRDEL
	.byte NONOTE12
	.byte GBP_B3
	.byte OCT1
	.byte GBP_D1
	.byte OCT0
	.byte GBP_D0
	.byte GBP_D0
	.byte GBP_D1
	.byte GBP_A0
	.byte OCT1
	.byte GBP_Fs0
	.byte GBP_C1
	.byte OCT0
	.byte GBP_C0
	.byte GBP_C0
	.byte GBP_C1
	.byte OCT1
	.byte GBP_G0
	.byte GBP_E0
	.byte OCT0
	.byte GBP_G1
	.byte OCT0
	.byte GBP_G0
	.byte GBP_G0
	.byte GBP_G1
	.byte OCT0
	.byte GBP_G0
	.byte GBP_G0
	.byte GBP_A3
	.byte OCT1
	.byte GBP_A1
	.byte OCT2
	.byte GBP_C0
	.byte GBP_Cs0
	.byte GBP_CALL
	.int gbs_gym_track_1_call_0
	.byte OCT2
	.byte GBP_E1
	.byte GBP_C0
	.byte GBP_Cs0
	.byte GBP_CALL
	.int gbs_gym_track_1_call_0
	.byte OCT2
	.byte GBP_C0
	.byte GBP_E0
	.byte GBP_G0
	.byte OCT3
	.byte GBP_C0
	.byte GBP_STYLE
	.byte OCT5
	.byte GBP_CALL
	.int gbs_gym_track_1_call_1
	.byte OCT0
	.byte GBP_Fs0
	.byte GBP_B0
	.byte GBP_Fs1
	.byte OCT1
	.byte GBP_Fs1
	.byte OCT0
	.byte GBP_B1
	.byte GBP_As3
	.byte GBP_As1
	.byte GBP_F0
	.byte GBP_F0
	.byte GBP_G0
	.byte OCT1
	.byte GBP_C0
	.byte OCT0
	.byte GBP_G1
	.byte OCT1
	.byte GBP_G1
	.byte GBP_E1
	.byte GBP_CALL
	.int gbs_gym_track_1_call_1
	.byte OCT0
	.byte GBP_G0
	.byte OCT1
	.byte GBP_C0
	.byte OCT0
	.byte GBP_G1
	.byte OCT1
	.byte GBP_E1
	.byte GBP_C1
	.byte GBP_D3
	.byte GBP_D1
	.byte OCT0
	.byte GBP_A0
	.byte GBP_A0
	.byte GBP_A0
	.byte OCT1
	.byte GBP_D0
	.byte OCT0
	.byte GBP_A1
	.byte OCT1
	.byte GBP_Fs1
	.byte GBP_D1
	.byte GBP_JUMPC
	.byte NONOTE0
	.int gbs_gym_track_1_goto_0
	.byte OCT2
	.byte GBP_D2
	.byte OCT1
	.byte GBP_D2
	.byte GBP_D1
	.byte GBP_D0
	.byte GBP_D0
	.byte GBP_D1
	.byte OCT2
	.byte GBP_D1
	.byte OCT1
	.byte GBP_A1
	.byte OCT2
	.byte GBP_C2
	.byte OCT1
	.byte GBP_C2
	.byte GBP_C1
	.byte GBP_C0
	.byte GBP_C0
	.byte GBP_C1
	.byte OCT2
	.byte GBP_E1
	.byte GBP_C0
	.byte GBP_Cs0
	.byte GBP_D2
	.byte OCT1
	.byte GBP_D2
	.byte GBP_D1
	.byte GBP_D0
	.byte GBP_D0
	.byte GBP_D1
	.byte OCT2
	.byte GBP_D1
	.byte OCT1
	.byte GBP_A1
	.byte OCT2
	.byte GBP_C2
	.byte OCT1
	.byte GBP_C2
	.byte GBP_C1
	.byte GBP_C0
	.byte GBP_C0
	.byte GBP_C1
	.byte GBP_RET

gbs_gym_track_2_call_0:
	.byte OCT4
	.byte GBP_A5
	.byte OCT5
	.byte GBP_D5
	.byte OCT4
	.byte GBP_A3
	.byte OCT5
	.byte GBP_C3
	.byte OCT4
	.byte GBP_B3
	.byte GBP_A3
	.byte GBP_G3
	.byte GBP_Fs0
	.byte NONOTE0
	.byte GBP_Fs0
	.byte GBP_G0
	.byte GBP_A3
	.byte GBP_RET

gbs_gym_track_2:
	.byte	KEYSH , gbs_gym_key+0
	.byte	GBP , 0x02
	.byte GBP_MOD
	.byte GBP_C4
	.byte GBP_Cs3
	.byte GBP_PAN
	.byte GBP_RET
gbs_gym_track_2_goto_0:
	.byte GBP_FRDEL
	.byte NONOTE12
	.byte GBP_C4
	.byte OCT5
	.byte GBP_D1
	.byte OCT3
	.byte GBP_D0
	.byte GBP_D0
	.byte GBP_D0
	.byte NONOTE0
	.byte OCT4
	.byte GBP_A0
	.byte OCT5
	.byte GBP_D0
	.byte GBP_C1
	.byte OCT3
	.byte GBP_C0
	.byte GBP_C0
	.byte GBP_C0
	.byte NONOTE0
	.byte OCT4
	.byte GBP_A0
	.byte OCT5
	.byte GBP_C0
	.byte OCT4
	.byte GBP_B1
	.byte OCT2
	.byte GBP_G0
	.byte GBP_G0
	.byte GBP_G0
	.byte NONOTE0
	.byte OCT4
	.byte GBP_B0
	.byte GBP_B0
	.byte GBP_B3
	.byte OCT5
	.byte GBP_Cs3
	.byte OCT4
	.byte GBP_D11
	.byte OCT3
	.byte GBP_A1
	.byte OCT4
	.byte GBP_D1
	.byte GBP_E0
	.byte NONOTE1
	.byte GBP_C0
	.byte GBP_C3
	.byte GBP_G3
	.byte GBP_E3
	.byte GBP_D11
	.byte OCT3
	.byte GBP_A1
	.byte OCT4
	.byte GBP_D1
	.byte GBP_C0
	.byte NONOTE0
	.byte GBP_C0
	.byte GBP_D0
	.byte GBP_E7
	.byte NONOTE3
	.byte GBP_Fs11
	.byte GBP_E1
	.byte GBP_Fs1
	.byte GBP_G0
	.byte NONOTE1
	.byte GBP_E0
	.byte GBP_E3
	.byte OCT5
	.byte GBP_C0
	.byte NONOTE1
	.byte OCT4
	.byte GBP_G0
	.byte GBP_G3
	.byte GBP_Fs11
	.byte GBP_E1
	.byte GBP_Fs1
	.byte GBP_G1
	.byte GBP_E0
	.byte GBP_G0
	.byte OCT5
	.byte GBP_C7
	.byte OCT4
	.byte GBP_B3
	.byte GBP_STYLE
	.byte GBP_C3
	.byte GBP_CALL
	.int gbs_gym_track_2_call_0
	.byte NONOTE1
	.byte GBP_A1
	.byte OCT5
	.byte GBP_D1
	.byte OCT4
	.byte GBP_A1
	.byte OCT5
	.byte GBP_C3
	.byte OCT4
	.byte GBP_As3
	.byte GBP_A3
	.byte GBP_G3
	.byte GBP_CALL
	.int gbs_gym_track_2_call_0
	.byte GBP_A0
	.byte NONOTE0
	.byte GBP_A0
	.byte GBP_B0
	.byte OCT5
	.byte GBP_C3
	.byte GBP_D0
	.byte NONOTE0
	.byte GBP_D0
	.byte GBP_E0
	.byte GBP_Fs7
	.byte GBP_E3
	.byte GBP_JUMPC
	.byte NONOTE0
	.int gbs_gym_track_2_goto_0
	.byte OCT4
	.byte GBP_A5
	.byte OCT5
	.byte GBP_D5
	.byte OCT4
	.byte GBP_A3
	.byte OCT5
	.byte GBP_C3
	.byte OCT4
	.byte GBP_B3
	.byte GBP_A3
	.byte GBP_G3
	.byte GBP_Fs0
	.byte NONOTE0
	.byte GBP_Fs0
	.byte GBP_G0
	.byte GBP_A3
	.byte GBP_RET

gbs_gym_track_3:
	.byte	KEYSH , gbs_gym_key+0
	.byte	GBP , 0x03
	.byte GBP_NSET
	.byte NONOTE4
gbs_gym_track_3_goto_2:
	.byte GBP_FRDEL
	.byte NONOTE12
	.byte GBP_D1
	.byte GBP_Cs0
	.byte GBP_Cs0
	.byte GBP_B3
	.byte GBP_D1
	.byte GBP_Cs0
	.byte GBP_Cs0
	.byte GBP_B3
	.byte GBP_D1
	.byte GBP_Cs0
	.byte GBP_Cs0
	.byte GBP_D1
	.byte GBP_Cs0
	.byte GBP_Cs0
	.byte GBP_As0
	.byte GBP_Ds0
	.byte GBP_Ds0
	.byte GBP_Ds0
	.byte GBP_Cs0
	.byte GBP_Cs0
	.byte GBP_D0
	.byte GBP_D0
	.byte GBP_FRDEL
	.byte NONOTE6
gbs_gym_track_3_goto_0:
	.byte GBP_D5
	.byte GBP_D5
	.byte GBP_D3
	.byte GBP_D1
	.byte GBP_D1
	.byte GBP_D3
	.byte GBP_Cs0
	.byte GBP_Cs0
	.byte GBP_Cs0
	.byte GBP_Cs0
	.byte GBP_Cs0
	.byte GBP_Cs0
	.byte GBP_Cs0
	.byte GBP_Cs0
	.byte GBP_D5
	.byte GBP_D5
	.byte GBP_D3
	.byte GBP_D1
	.byte GBP_D1
	.byte GBP_D3
	.byte GBP_B7
	.byte GBP_JUMPC
	.byte NONOTE4
	.int gbs_gym_track_3_goto_0
gbs_gym_track_3_goto_1:
	.byte GBP_Ds3
	.byte GBP_Fs3
	.byte GBP_D3
	.byte GBP_Ds1
	.byte GBP_D1
	.byte GBP_Ds1
	.byte GBP_D1
	.byte GBP_Ds3
	.byte GBP_D3
	.byte GBP_Fs3
	.byte GBP_JUMPC
	.byte NONOTE8
	.int gbs_gym_track_3_goto_1
	.byte GBP_JUMPC
	.byte NONOTE0
	.int gbs_gym_track_3_goto_2



	.align 4
	.global gbs_gym_Header
gbs_gym_Header:
	.byte 0x04	@ NumTrks
	.byte 0x00	@ NumBlks
	.byte gbs_gym_pri @ Priority
	.byte gbs_gym_rev @ Reverb

	.int gbs_gym_grp

	.int gbs_gym_track_0
	.int gbs_gym_track_1
	.int gbs_gym_track_2
	.int gbs_gym_track_3