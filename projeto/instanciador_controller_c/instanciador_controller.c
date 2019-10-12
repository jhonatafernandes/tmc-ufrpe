/* --- Generated the 12/10/2019 at 12:21 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c instanciador_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "instanciador_controller.h"

void Instanciador_controller__instanciador_controller_instanciador_c_vent_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_v_301, int instanciador_v_300, int instanciador_v_299,
  int instanciador_pnr_6, int instanciador_ck_10_1, int instanciador_pnr_5,
  int instanciador_ck_12_1, int instanciador_pnr_4, int instanciador_ck_14_1,
  int instanciador_pnr_3, int instanciador_ck_16_1, int instanciador_pnr_2,
  int instanciador_ck_18_1, int instanciador_pnr_1, int instanciador_ck_20_1,
  int instanciador_pnr, int p_instanciador_c_vent, int p_instanciador_cv,
  int p_instanciador_cx, int p_instanciador_c4, int p_instanciador_c3,
  int p_instanciador_c2, int p_instanciador_c1, int p_instanciador_c_lampExt,
  int p_instanciador_c4_lamp, int p_instanciador_c3_lamp,
  int p_instanciador_c2_lamp, int p_instanciador_c1_lamp,
  int instanciador_cv, int instanciador_cx, int instanciador_c4,
  int instanciador_c3, int instanciador_c2, int instanciador_c1,
  int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c_vent_out* _out) {
  
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  v_71 = !(instanciador_ck_18_1);
  sub_18 = (v_71&&false);
  v_74 = (instanciador_lx&&sub_18);
  if (instanciador_lx) {
    v_72 = false;
  } else {
    v_72 = sub_18;
  };
  if (instanciador_c_lampExt) {
    v_73 = false;
  } else {
    v_73 = v_72;
  };
  sub_19 = false;
  if (instanciador_c_lampExt) {
    v_75 = v_74;
  } else {
    v_75 = sub_19;
  };
  if (instanciador_cx) {
    sub_17 = v_73;
  } else {
    sub_17 = v_75;
  };
  sub_16 = sub_17;
  v_68 = !(instanciador_lx);
  sub_21 = (instanciador_ck_18_1||false);
  v_69 = (v_68||sub_21);
  if (instanciador_lx) {
    v_66 = false;
  } else {
    v_66 = sub_21;
  };
  if (instanciador_c_lampExt) {
    v_67 = false;
  } else {
    v_67 = v_66;
  };
  sub_22 = true;
  if (instanciador_c_lampExt) {
    v_70 = v_69;
  } else {
    v_70 = sub_22;
  };
  if (instanciador_cx) {
    sub_20 = v_67;
  } else {
    sub_20 = v_70;
  };
  if (instanciador_lv) {
    v_76 = sub_17;
  } else {
    v_76 = sub_20;
  };
  if (instanciador_ck_20_1) {
    v_77 = v_76;
  } else {
    v_77 = sub_16;
  };
  if (instanciador_lv) {
    sub_24 = sub_20;
  } else {
    sub_24 = false;
  };
  if (instanciador_ck_20_1) {
    sub_23 = false;
  } else {
    sub_23 = sub_24;
  };
  if (instanciador_cv) {
    sub_15 = v_77;
  } else {
    sub_15 = sub_23;
  };
  if (instanciador_ck_16_1) {
    sub_14 = sub_15;
  } else {
    sub_14 = false;
  };
  if (instanciador_c4_lamp) {
    v_80 = sub_14;
  } else {
    v_80 = sub_15;
  };
  if (instanciador_l4) {
    v_81 = v_80;
  } else {
    v_81 = sub_15;
  };
  if (instanciador_c4_lamp) {
    v_78 = false;
  } else {
    v_78 = sub_14;
  };
  if (instanciador_l4) {
    v_79 = false;
  } else {
    v_79 = v_78;
  };
  if (instanciador_c4) {
    sub_13 = v_79;
  } else {
    sub_13 = v_81;
  };
  if (instanciador_ck_14_1) {
    sub_25 = false;
  } else {
    sub_25 = sub_13;
  };
  if (instanciador_c3_lamp) {
    v_84 = sub_25;
  } else {
    v_84 = false;
  };
  if (instanciador_l3) {
    v_85 = v_84;
  } else {
    v_85 = false;
  };
  if (instanciador_c3_lamp) {
    v_82 = sub_13;
  } else {
    v_82 = sub_25;
  };
  if (instanciador_l3) {
    v_83 = sub_13;
  } else {
    v_83 = v_82;
  };
  if (instanciador_c3) {
    sub_12 = v_83;
  } else {
    sub_12 = v_85;
  };
  if (instanciador_ck_12_1) {
    sub_26 = false;
  } else {
    sub_26 = sub_12;
  };
  if (instanciador_c2_lamp) {
    v_88 = sub_26;
  } else {
    v_88 = false;
  };
  if (instanciador_l2) {
    v_89 = v_88;
  } else {
    v_89 = false;
  };
  if (instanciador_c2_lamp) {
    v_86 = sub_12;
  } else {
    v_86 = sub_26;
  };
  if (instanciador_l2) {
    v_87 = sub_12;
  } else {
    v_87 = v_86;
  };
  if (instanciador_c2) {
    sub_11 = v_87;
  } else {
    sub_11 = v_89;
  };
  if (instanciador_ck_10_1) {
    sub_27 = false;
  } else {
    sub_27 = sub_11;
  };
  if (instanciador_c1_lamp) {
    v_92 = sub_27;
  } else {
    v_92 = false;
  };
  if (instanciador_l1) {
    v_93 = v_92;
  } else {
    v_93 = false;
  };
  if (instanciador_c1_lamp) {
    v_90 = sub_11;
  } else {
    v_90 = sub_27;
  };
  if (instanciador_l1) {
    v_91 = sub_11;
  } else {
    v_91 = v_90;
  };
  if (instanciador_c1) {
    sub_10 = v_91;
  } else {
    sub_10 = v_93;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  v_40 = !(instanciador_lx);
  sub_36 = (instanciador_ck_18_1&&false);
  if (instanciador_lx) {
    v_43 = sub_36;
  } else {
    v_43 = false;
  };
  if (instanciador_c_lampExt) {
    v_44 = v_43;
  } else {
    v_44 = false;
  };
  v_41 = (v_40&&sub_36);
  if (instanciador_c_lampExt) {
    v_42 = sub_19;
  } else {
    v_42 = v_41;
  };
  if (instanciador_cx) {
    sub_35 = v_42;
  } else {
    sub_35 = v_44;
  };
  sub_34 = sub_35;
  v_35 = !(instanciador_ck_18_1);
  sub_38 = (v_35||false);
  if (instanciador_lx) {
    v_38 = sub_38;
  } else {
    v_38 = false;
  };
  if (instanciador_c_lampExt) {
    v_39 = v_38;
  } else {
    v_39 = false;
  };
  v_36 = (instanciador_lx||sub_38);
  if (instanciador_c_lampExt) {
    v_37 = sub_22;
  } else {
    v_37 = v_36;
  };
  if (instanciador_cx) {
    sub_37 = v_37;
  } else {
    sub_37 = v_39;
  };
  if (instanciador_lv) {
    v_45 = sub_35;
  } else {
    v_45 = sub_37;
  };
  if (instanciador_ck_20_1) {
    v_46 = v_45;
  } else {
    v_46 = sub_34;
  };
  if (instanciador_lv) {
    sub_40 = sub_37;
  } else {
    sub_40 = false;
  };
  if (instanciador_ck_20_1) {
    sub_39 = false;
  } else {
    sub_39 = sub_40;
  };
  if (instanciador_cv) {
    sub_33 = v_46;
  } else {
    sub_33 = sub_39;
  };
  if (instanciador_ck_16_1) {
    sub_41 = false;
  } else {
    sub_41 = sub_33;
  };
  if (instanciador_c4_lamp) {
    v_49 = sub_41;
  } else {
    v_49 = false;
  };
  if (instanciador_l4) {
    v_50 = v_49;
  } else {
    v_50 = false;
  };
  if (instanciador_c4_lamp) {
    v_47 = sub_33;
  } else {
    v_47 = sub_41;
  };
  if (instanciador_l4) {
    v_48 = sub_33;
  } else {
    v_48 = v_47;
  };
  if (instanciador_c4) {
    sub_32 = v_48;
  } else {
    sub_32 = v_50;
  };
  if (instanciador_ck_14_1) {
    sub_42 = false;
  } else {
    sub_42 = sub_32;
  };
  if (instanciador_c3_lamp) {
    v_53 = sub_42;
  } else {
    v_53 = false;
  };
  if (instanciador_l3) {
    v_54 = v_53;
  } else {
    v_54 = false;
  };
  if (instanciador_c3_lamp) {
    v_51 = sub_32;
  } else {
    v_51 = sub_42;
  };
  if (instanciador_l3) {
    v_52 = sub_32;
  } else {
    v_52 = v_51;
  };
  if (instanciador_c3) {
    sub_31 = v_52;
  } else {
    sub_31 = v_54;
  };
  if (instanciador_ck_12_1) {
    sub_43 = false;
  } else {
    sub_43 = sub_31;
  };
  if (instanciador_c2_lamp) {
    v_57 = sub_43;
  } else {
    v_57 = false;
  };
  if (instanciador_l2) {
    v_58 = v_57;
  } else {
    v_58 = false;
  };
  if (instanciador_c2_lamp) {
    v_55 = sub_31;
  } else {
    v_55 = sub_43;
  };
  if (instanciador_l2) {
    v_56 = sub_31;
  } else {
    v_56 = v_55;
  };
  if (instanciador_c2) {
    sub_30 = v_56;
  } else {
    sub_30 = v_58;
  };
  if (instanciador_ck_10_1) {
    sub_44 = false;
  } else {
    sub_44 = sub_30;
  };
  if (instanciador_c1_lamp) {
    v_61 = sub_44;
  } else {
    v_61 = false;
  };
  if (instanciador_l1) {
    v_62 = v_61;
  } else {
    v_62 = false;
  };
  if (instanciador_c1_lamp) {
    v_59 = sub_30;
  } else {
    v_59 = sub_44;
  };
  if (instanciador_l1) {
    v_60 = sub_30;
  } else {
    v_60 = v_59;
  };
  if (instanciador_c1) {
    sub_29 = v_60;
  } else {
    sub_29 = v_62;
  };
  if (instanciador_domingo_input) {
    v_63 = sub_10;
  } else {
    v_63 = sub_29;
  };
  if (instanciador_seguranca_input) {
    v_64 = sub_9;
  } else {
    v_64 = v_63;
  };
  if (instanciador_neutro_input) {
    v_65 = sub_8;
  } else {
    v_65 = v_64;
  };
  if (instanciador_domingol_input) {
    sub_28 = sub_7;
  } else {
    sub_28 = v_65;
  };
  if (instanciador_ebd_input) {
    sub_4 = sub_5;
  } else {
    sub_4 = sub_28;
  };
  sub_48 = sub_29;
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (instanciador_sexta_input) {
    sub_45 = sub_46;
  } else {
    sub_45 = sub_6;
  };
  if (instanciador_ebd_input) {
    v_94 = sub_5;
  } else {
    v_94 = sub_45;
  };
  if (instanciador_v_299) {
    sub_3 = sub_45;
  } else {
    sub_3 = sub_4;
  };
  if (instanciador_v_301) {
    sub_2 = sub_5;
  } else {
    sub_2 = sub_3;
  };
  if (instanciador_v_300) {
    sub_1 = v_94;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_cv) {
    sub_62 = sub_20;
  } else {
    sub_62 = sub_23;
  };
  if (instanciador_ck_16_1) {
    sub_61 = sub_62;
  } else {
    sub_61 = false;
  };
  if (instanciador_c4_lamp) {
    v_21 = sub_61;
  } else {
    v_21 = sub_62;
  };
  if (instanciador_l4) {
    v_22 = v_21;
  } else {
    v_22 = sub_62;
  };
  if (instanciador_c4_lamp) {
    v_19 = false;
  } else {
    v_19 = sub_61;
  };
  if (instanciador_l4) {
    v_20 = false;
  } else {
    v_20 = v_19;
  };
  if (instanciador_c4) {
    sub_60 = v_20;
  } else {
    sub_60 = v_22;
  };
  if (instanciador_ck_14_1) {
    sub_63 = false;
  } else {
    sub_63 = sub_60;
  };
  if (instanciador_c3_lamp) {
    v_25 = sub_63;
  } else {
    v_25 = false;
  };
  if (instanciador_l3) {
    v_26 = v_25;
  } else {
    v_26 = false;
  };
  if (instanciador_c3_lamp) {
    v_23 = sub_60;
  } else {
    v_23 = sub_63;
  };
  if (instanciador_l3) {
    v_24 = sub_60;
  } else {
    v_24 = v_23;
  };
  if (instanciador_c3) {
    sub_59 = v_24;
  } else {
    sub_59 = v_26;
  };
  if (instanciador_ck_12_1) {
    sub_64 = false;
  } else {
    sub_64 = sub_59;
  };
  if (instanciador_c2_lamp) {
    v_29 = sub_64;
  } else {
    v_29 = false;
  };
  if (instanciador_l2) {
    v_30 = v_29;
  } else {
    v_30 = false;
  };
  if (instanciador_c2_lamp) {
    v_27 = sub_59;
  } else {
    v_27 = sub_64;
  };
  if (instanciador_l2) {
    v_28 = sub_59;
  } else {
    v_28 = v_27;
  };
  if (instanciador_c2) {
    sub_58 = v_28;
  } else {
    sub_58 = v_30;
  };
  if (instanciador_ck_10_1) {
    sub_65 = false;
  } else {
    sub_65 = sub_58;
  };
  if (instanciador_c1_lamp) {
    v_33 = sub_65;
  } else {
    v_33 = false;
  };
  if (instanciador_l1) {
    v_34 = v_33;
  } else {
    v_34 = false;
  };
  if (instanciador_c1_lamp) {
    v_31 = sub_58;
  } else {
    v_31 = sub_65;
  };
  if (instanciador_l1) {
    v_32 = sub_58;
  } else {
    v_32 = v_31;
  };
  if (instanciador_c1) {
    sub_57 = v_32;
  } else {
    sub_57 = v_34;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (instanciador_cv) {
    sub_71 = sub_37;
  } else {
    sub_71 = sub_39;
  };
  if (instanciador_ck_16_1) {
    sub_72 = false;
  } else {
    sub_72 = sub_71;
  };
  if (instanciador_c4_lamp) {
    v_2 = sub_72;
  } else {
    v_2 = false;
  };
  if (instanciador_l4) {
    v_3 = v_2;
  } else {
    v_3 = false;
  };
  if (instanciador_c4_lamp) {
    v = sub_71;
  } else {
    v = sub_72;
  };
  if (instanciador_l4) {
    v_1 = sub_71;
  } else {
    v_1 = v;
  };
  if (instanciador_c4) {
    sub_70 = v_1;
  } else {
    sub_70 = v_3;
  };
  if (instanciador_ck_14_1) {
    sub_73 = false;
  } else {
    sub_73 = sub_70;
  };
  if (instanciador_c3_lamp) {
    v_6 = sub_73;
  } else {
    v_6 = false;
  };
  if (instanciador_l3) {
    v_7 = v_6;
  } else {
    v_7 = false;
  };
  if (instanciador_c3_lamp) {
    v_4 = sub_70;
  } else {
    v_4 = sub_73;
  };
  if (instanciador_l3) {
    v_5 = sub_70;
  } else {
    v_5 = v_4;
  };
  if (instanciador_c3) {
    sub_69 = v_5;
  } else {
    sub_69 = v_7;
  };
  if (instanciador_ck_12_1) {
    sub_74 = false;
  } else {
    sub_74 = sub_69;
  };
  if (instanciador_c2_lamp) {
    v_10 = sub_74;
  } else {
    v_10 = false;
  };
  if (instanciador_l2) {
    v_11 = v_10;
  } else {
    v_11 = false;
  };
  if (instanciador_c2_lamp) {
    v_8 = sub_69;
  } else {
    v_8 = sub_74;
  };
  if (instanciador_l2) {
    v_9 = sub_69;
  } else {
    v_9 = v_8;
  };
  if (instanciador_c2) {
    sub_68 = v_9;
  } else {
    sub_68 = v_11;
  };
  if (instanciador_ck_10_1) {
    sub_75 = false;
  } else {
    sub_75 = sub_68;
  };
  if (instanciador_c1_lamp) {
    v_14 = sub_75;
  } else {
    v_14 = false;
  };
  if (instanciador_l1) {
    v_15 = v_14;
  } else {
    v_15 = false;
  };
  if (instanciador_c1_lamp) {
    v_12 = sub_68;
  } else {
    v_12 = sub_75;
  };
  if (instanciador_l1) {
    v_13 = sub_68;
  } else {
    v_13 = v_12;
  };
  if (instanciador_c1) {
    sub_67 = v_13;
  } else {
    sub_67 = v_15;
  };
  if (instanciador_domingo_input) {
    v_16 = sub_57;
  } else {
    v_16 = sub_67;
  };
  if (instanciador_seguranca_input) {
    v_17 = sub_56;
  } else {
    v_17 = v_16;
  };
  if (instanciador_neutro_input) {
    v_18 = sub_55;
  } else {
    v_18 = v_17;
  };
  if (instanciador_domingol_input) {
    sub_66 = sub_54;
  } else {
    sub_66 = v_18;
  };
  if (instanciador_ebd_input) {
    sub_51 = sub_52;
  } else {
    sub_51 = sub_66;
  };
  sub_79 = sub_67;
  sub_78 = sub_79;
  sub_77 = sub_78;
  if (instanciador_sexta_input) {
    sub_76 = sub_77;
  } else {
    sub_76 = sub_53;
  };
  if (instanciador_ebd_input) {
    v_95 = sub_52;
  } else {
    v_95 = sub_76;
  };
  if (instanciador_v_299) {
    sub_50 = sub_76;
  } else {
    sub_50 = sub_51;
  };
  if (instanciador_v_301) {
    sub_49 = sub_52;
  } else {
    sub_49 = sub_50;
  };
  if (instanciador_v_300) {
    v_96 = v_95;
  } else {
    v_96 = sub_49;
  };
  if (p_instanciador_c_vent) {
    sub_0 = v_96;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c_vent = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_cv_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_v_301, int instanciador_v_300, int instanciador_v_299,
  int instanciador_pnr_6, int instanciador_ck_10_1, int instanciador_pnr_5,
  int instanciador_ck_12_1, int instanciador_pnr_4, int instanciador_ck_14_1,
  int instanciador_pnr_3, int instanciador_ck_16_1, int instanciador_pnr_2,
  int instanciador_ck_18_1, int instanciador_pnr_1, int instanciador_ck_20_1,
  int instanciador_pnr, int p_instanciador_c_vent, int p_instanciador_cv,
  int p_instanciador_cx, int p_instanciador_c4, int p_instanciador_c3,
  int p_instanciador_c2, int p_instanciador_c1, int p_instanciador_c_lampExt,
  int p_instanciador_c4_lamp, int p_instanciador_c3_lamp,
  int p_instanciador_c2_lamp, int p_instanciador_c1_lamp,
  int instanciador_cx, int instanciador_c4, int instanciador_c3,
  int instanciador_c2, int instanciador_c1, int instanciador_c_lampExt,
  int instanciador_c4_lamp, int instanciador_c3_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_cv_out* _out) {
  
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  v_166 = !(instanciador_ck_18_1);
  sub_17 = (v_166&&false);
  v_169 = (instanciador_lx&&sub_17);
  if (instanciador_lx) {
    v_167 = false;
  } else {
    v_167 = sub_17;
  };
  if (instanciador_c_lampExt) {
    v_168 = false;
  } else {
    v_168 = v_167;
  };
  sub_18 = false;
  if (instanciador_c_lampExt) {
    v_170 = v_169;
  } else {
    v_170 = sub_18;
  };
  if (instanciador_cx) {
    v_171 = v_168;
  } else {
    v_171 = v_170;
  };
  v_163 = !(instanciador_lx);
  sub_20 = (instanciador_ck_18_1||false);
  v_164 = (v_163||sub_20);
  if (instanciador_lx) {
    v_161 = false;
  } else {
    v_161 = sub_20;
  };
  if (instanciador_c_lampExt) {
    v_162 = false;
  } else {
    v_162 = v_161;
  };
  sub_21 = true;
  if (instanciador_c_lampExt) {
    v_165 = v_164;
  } else {
    v_165 = sub_21;
  };
  if (instanciador_cx) {
    sub_19 = v_162;
  } else {
    sub_19 = v_165;
  };
  if (instanciador_lv) {
    sub_16 = v_171;
  } else {
    sub_16 = sub_19;
  };
  sub_22 = sub_19;
  if (instanciador_ck_20_1) {
    sub_15 = sub_22;
  } else {
    sub_15 = sub_16;
  };
  if (instanciador_ck_16_1) {
    sub_14 = sub_15;
  } else {
    sub_14 = false;
  };
  if (instanciador_c4_lamp) {
    v_174 = sub_14;
  } else {
    v_174 = sub_15;
  };
  if (instanciador_l4) {
    v_175 = v_174;
  } else {
    v_175 = sub_15;
  };
  if (instanciador_c4_lamp) {
    v_172 = false;
  } else {
    v_172 = sub_14;
  };
  if (instanciador_l4) {
    v_173 = false;
  } else {
    v_173 = v_172;
  };
  if (instanciador_c4) {
    sub_13 = v_173;
  } else {
    sub_13 = v_175;
  };
  if (instanciador_ck_14_1) {
    sub_23 = false;
  } else {
    sub_23 = sub_13;
  };
  if (instanciador_c3_lamp) {
    v_178 = sub_23;
  } else {
    v_178 = false;
  };
  if (instanciador_l3) {
    v_179 = v_178;
  } else {
    v_179 = false;
  };
  if (instanciador_c3_lamp) {
    v_176 = sub_13;
  } else {
    v_176 = sub_23;
  };
  if (instanciador_l3) {
    v_177 = sub_13;
  } else {
    v_177 = v_176;
  };
  if (instanciador_c3) {
    sub_12 = v_177;
  } else {
    sub_12 = v_179;
  };
  if (instanciador_ck_12_1) {
    sub_24 = false;
  } else {
    sub_24 = sub_12;
  };
  if (instanciador_c2_lamp) {
    v_182 = sub_24;
  } else {
    v_182 = false;
  };
  if (instanciador_l2) {
    v_183 = v_182;
  } else {
    v_183 = false;
  };
  if (instanciador_c2_lamp) {
    v_180 = sub_12;
  } else {
    v_180 = sub_24;
  };
  if (instanciador_l2) {
    v_181 = sub_12;
  } else {
    v_181 = v_180;
  };
  if (instanciador_c2) {
    sub_11 = v_181;
  } else {
    sub_11 = v_183;
  };
  if (instanciador_ck_10_1) {
    sub_25 = false;
  } else {
    sub_25 = sub_11;
  };
  if (instanciador_c1_lamp) {
    v_186 = sub_25;
  } else {
    v_186 = false;
  };
  if (instanciador_l1) {
    v_187 = v_186;
  } else {
    v_187 = false;
  };
  if (instanciador_c1_lamp) {
    v_184 = sub_11;
  } else {
    v_184 = sub_25;
  };
  if (instanciador_l1) {
    v_185 = sub_11;
  } else {
    v_185 = v_184;
  };
  if (instanciador_c1) {
    sub_10 = v_185;
  } else {
    sub_10 = v_187;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  v_136 = !(instanciador_lx);
  sub_33 = (instanciador_ck_18_1&&false);
  if (instanciador_lx) {
    v_139 = sub_33;
  } else {
    v_139 = false;
  };
  if (instanciador_c_lampExt) {
    v_140 = v_139;
  } else {
    v_140 = false;
  };
  v_137 = (v_136&&sub_33);
  if (instanciador_c_lampExt) {
    v_138 = sub_18;
  } else {
    v_138 = v_137;
  };
  if (instanciador_cx) {
    v_141 = v_138;
  } else {
    v_141 = v_140;
  };
  v_131 = !(instanciador_ck_18_1);
  sub_35 = (v_131||false);
  if (instanciador_lx) {
    v_134 = sub_35;
  } else {
    v_134 = false;
  };
  if (instanciador_c_lampExt) {
    v_135 = v_134;
  } else {
    v_135 = false;
  };
  v_132 = (instanciador_lx||sub_35);
  if (instanciador_c_lampExt) {
    v_133 = sub_21;
  } else {
    v_133 = v_132;
  };
  if (instanciador_cx) {
    sub_34 = v_133;
  } else {
    sub_34 = v_135;
  };
  if (instanciador_lv) {
    sub_32 = v_141;
  } else {
    sub_32 = sub_34;
  };
  sub_36 = sub_34;
  if (instanciador_ck_20_1) {
    sub_31 = sub_36;
  } else {
    sub_31 = sub_32;
  };
  if (instanciador_ck_16_1) {
    sub_37 = false;
  } else {
    sub_37 = sub_31;
  };
  if (instanciador_c4_lamp) {
    v_144 = sub_37;
  } else {
    v_144 = false;
  };
  if (instanciador_l4) {
    v_145 = v_144;
  } else {
    v_145 = false;
  };
  if (instanciador_c4_lamp) {
    v_142 = sub_31;
  } else {
    v_142 = sub_37;
  };
  if (instanciador_l4) {
    v_143 = sub_31;
  } else {
    v_143 = v_142;
  };
  if (instanciador_c4) {
    sub_30 = v_143;
  } else {
    sub_30 = v_145;
  };
  if (instanciador_ck_14_1) {
    sub_38 = false;
  } else {
    sub_38 = sub_30;
  };
  if (instanciador_c3_lamp) {
    v_148 = sub_38;
  } else {
    v_148 = false;
  };
  if (instanciador_l3) {
    v_149 = v_148;
  } else {
    v_149 = false;
  };
  if (instanciador_c3_lamp) {
    v_146 = sub_30;
  } else {
    v_146 = sub_38;
  };
  if (instanciador_l3) {
    v_147 = sub_30;
  } else {
    v_147 = v_146;
  };
  if (instanciador_c3) {
    sub_29 = v_147;
  } else {
    sub_29 = v_149;
  };
  if (instanciador_ck_12_1) {
    sub_39 = false;
  } else {
    sub_39 = sub_29;
  };
  if (instanciador_c2_lamp) {
    v_152 = sub_39;
  } else {
    v_152 = false;
  };
  if (instanciador_l2) {
    v_153 = v_152;
  } else {
    v_153 = false;
  };
  if (instanciador_c2_lamp) {
    v_150 = sub_29;
  } else {
    v_150 = sub_39;
  };
  if (instanciador_l2) {
    v_151 = sub_29;
  } else {
    v_151 = v_150;
  };
  if (instanciador_c2) {
    sub_28 = v_151;
  } else {
    sub_28 = v_153;
  };
  if (instanciador_ck_10_1) {
    sub_40 = false;
  } else {
    sub_40 = sub_28;
  };
  if (instanciador_c1_lamp) {
    v_156 = sub_40;
  } else {
    v_156 = false;
  };
  if (instanciador_l1) {
    v_157 = v_156;
  } else {
    v_157 = false;
  };
  if (instanciador_c1_lamp) {
    v_154 = sub_28;
  } else {
    v_154 = sub_40;
  };
  if (instanciador_l1) {
    v_155 = sub_28;
  } else {
    v_155 = v_154;
  };
  if (instanciador_c1) {
    sub_27 = v_155;
  } else {
    sub_27 = v_157;
  };
  if (instanciador_domingo_input) {
    v_158 = sub_10;
  } else {
    v_158 = sub_27;
  };
  if (instanciador_seguranca_input) {
    v_159 = sub_9;
  } else {
    v_159 = v_158;
  };
  if (instanciador_neutro_input) {
    v_160 = sub_8;
  } else {
    v_160 = v_159;
  };
  if (instanciador_domingol_input) {
    sub_26 = sub_7;
  } else {
    sub_26 = v_160;
  };
  if (instanciador_ebd_input) {
    sub_4 = sub_5;
  } else {
    sub_4 = sub_26;
  };
  sub_44 = sub_27;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (instanciador_sexta_input) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_6;
  };
  if (instanciador_ebd_input) {
    v_188 = sub_5;
  } else {
    v_188 = sub_41;
  };
  if (instanciador_v_299) {
    sub_3 = sub_41;
  } else {
    sub_3 = sub_4;
  };
  if (instanciador_v_301) {
    sub_2 = sub_5;
  } else {
    sub_2 = sub_3;
  };
  if (instanciador_v_300) {
    sub_1 = v_188;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_ck_16_1) {
    sub_57 = sub_22;
  } else {
    sub_57 = false;
  };
  if (instanciador_c4_lamp) {
    v_117 = sub_57;
  } else {
    v_117 = sub_22;
  };
  if (instanciador_l4) {
    v_118 = v_117;
  } else {
    v_118 = sub_22;
  };
  if (instanciador_c4_lamp) {
    v_115 = false;
  } else {
    v_115 = sub_57;
  };
  if (instanciador_l4) {
    v_116 = false;
  } else {
    v_116 = v_115;
  };
  if (instanciador_c4) {
    sub_56 = v_116;
  } else {
    sub_56 = v_118;
  };
  if (instanciador_ck_14_1) {
    sub_58 = false;
  } else {
    sub_58 = sub_56;
  };
  if (instanciador_c3_lamp) {
    v_121 = sub_58;
  } else {
    v_121 = false;
  };
  if (instanciador_l3) {
    v_122 = v_121;
  } else {
    v_122 = false;
  };
  if (instanciador_c3_lamp) {
    v_119 = sub_56;
  } else {
    v_119 = sub_58;
  };
  if (instanciador_l3) {
    v_120 = sub_56;
  } else {
    v_120 = v_119;
  };
  if (instanciador_c3) {
    sub_55 = v_120;
  } else {
    sub_55 = v_122;
  };
  if (instanciador_ck_12_1) {
    sub_59 = false;
  } else {
    sub_59 = sub_55;
  };
  if (instanciador_c2_lamp) {
    v_125 = sub_59;
  } else {
    v_125 = false;
  };
  if (instanciador_l2) {
    v_126 = v_125;
  } else {
    v_126 = false;
  };
  if (instanciador_c2_lamp) {
    v_123 = sub_55;
  } else {
    v_123 = sub_59;
  };
  if (instanciador_l2) {
    v_124 = sub_55;
  } else {
    v_124 = v_123;
  };
  if (instanciador_c2) {
    sub_54 = v_124;
  } else {
    sub_54 = v_126;
  };
  if (instanciador_ck_10_1) {
    sub_60 = false;
  } else {
    sub_60 = sub_54;
  };
  if (instanciador_c1_lamp) {
    v_129 = sub_60;
  } else {
    v_129 = false;
  };
  if (instanciador_l1) {
    v_130 = v_129;
  } else {
    v_130 = false;
  };
  if (instanciador_c1_lamp) {
    v_127 = sub_54;
  } else {
    v_127 = sub_60;
  };
  if (instanciador_l1) {
    v_128 = sub_54;
  } else {
    v_128 = v_127;
  };
  if (instanciador_c1) {
    sub_53 = v_128;
  } else {
    sub_53 = v_130;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (instanciador_ck_16_1) {
    sub_66 = false;
  } else {
    sub_66 = sub_36;
  };
  if (instanciador_c4_lamp) {
    v_98 = sub_66;
  } else {
    v_98 = false;
  };
  if (instanciador_l4) {
    v_99 = v_98;
  } else {
    v_99 = false;
  };
  if (instanciador_c4_lamp) {
    v = sub_36;
  } else {
    v = sub_66;
  };
  if (instanciador_l4) {
    v_97 = sub_36;
  } else {
    v_97 = v;
  };
  if (instanciador_c4) {
    sub_65 = v_97;
  } else {
    sub_65 = v_99;
  };
  if (instanciador_ck_14_1) {
    sub_67 = false;
  } else {
    sub_67 = sub_65;
  };
  if (instanciador_c3_lamp) {
    v_102 = sub_67;
  } else {
    v_102 = false;
  };
  if (instanciador_l3) {
    v_103 = v_102;
  } else {
    v_103 = false;
  };
  if (instanciador_c3_lamp) {
    v_100 = sub_65;
  } else {
    v_100 = sub_67;
  };
  if (instanciador_l3) {
    v_101 = sub_65;
  } else {
    v_101 = v_100;
  };
  if (instanciador_c3) {
    sub_64 = v_101;
  } else {
    sub_64 = v_103;
  };
  if (instanciador_ck_12_1) {
    sub_68 = false;
  } else {
    sub_68 = sub_64;
  };
  if (instanciador_c2_lamp) {
    v_106 = sub_68;
  } else {
    v_106 = false;
  };
  if (instanciador_l2) {
    v_107 = v_106;
  } else {
    v_107 = false;
  };
  if (instanciador_c2_lamp) {
    v_104 = sub_64;
  } else {
    v_104 = sub_68;
  };
  if (instanciador_l2) {
    v_105 = sub_64;
  } else {
    v_105 = v_104;
  };
  if (instanciador_c2) {
    sub_63 = v_105;
  } else {
    sub_63 = v_107;
  };
  if (instanciador_ck_10_1) {
    sub_69 = false;
  } else {
    sub_69 = sub_63;
  };
  if (instanciador_c1_lamp) {
    v_110 = sub_69;
  } else {
    v_110 = false;
  };
  if (instanciador_l1) {
    v_111 = v_110;
  } else {
    v_111 = false;
  };
  if (instanciador_c1_lamp) {
    v_108 = sub_63;
  } else {
    v_108 = sub_69;
  };
  if (instanciador_l1) {
    v_109 = sub_63;
  } else {
    v_109 = v_108;
  };
  if (instanciador_c1) {
    sub_62 = v_109;
  } else {
    sub_62 = v_111;
  };
  if (instanciador_domingo_input) {
    v_112 = sub_53;
  } else {
    v_112 = sub_62;
  };
  if (instanciador_seguranca_input) {
    v_113 = sub_52;
  } else {
    v_113 = v_112;
  };
  if (instanciador_neutro_input) {
    v_114 = sub_51;
  } else {
    v_114 = v_113;
  };
  if (instanciador_domingol_input) {
    sub_61 = sub_50;
  } else {
    sub_61 = v_114;
  };
  if (instanciador_ebd_input) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_61;
  };
  sub_73 = sub_62;
  sub_72 = sub_73;
  sub_71 = sub_72;
  if (instanciador_sexta_input) {
    sub_70 = sub_71;
  } else {
    sub_70 = sub_49;
  };
  if (instanciador_ebd_input) {
    v_189 = sub_48;
  } else {
    v_189 = sub_70;
  };
  if (instanciador_v_299) {
    sub_46 = sub_70;
  } else {
    sub_46 = sub_47;
  };
  if (instanciador_v_301) {
    sub_45 = sub_48;
  } else {
    sub_45 = sub_46;
  };
  if (instanciador_v_300) {
    v_190 = v_189;
  } else {
    v_190 = sub_45;
  };
  if (p_instanciador_cv) {
    sub_0 = v_190;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_cv = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_cx_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_v_301, int instanciador_v_300, int instanciador_v_299,
  int instanciador_pnr_6, int instanciador_ck_10_1, int instanciador_pnr_5,
  int instanciador_ck_12_1, int instanciador_pnr_4, int instanciador_ck_14_1,
  int instanciador_pnr_3, int instanciador_ck_16_1, int instanciador_pnr_2,
  int instanciador_ck_18_1, int instanciador_pnr_1, int instanciador_ck_20_1,
  int instanciador_pnr, int p_instanciador_c_vent, int p_instanciador_cv,
  int p_instanciador_cx, int p_instanciador_c4, int p_instanciador_c3,
  int p_instanciador_c2, int p_instanciador_c1, int p_instanciador_c_lampExt,
  int p_instanciador_c4_lamp, int p_instanciador_c3_lamp,
  int p_instanciador_c2_lamp, int p_instanciador_c1_lamp,
  int instanciador_c4, int instanciador_c3, int instanciador_c2,
  int instanciador_c1, int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_cx_out* _out) {
  
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  v_250 = !(instanciador_ck_18_1);
  v_251 = (v_250&&false);
  sub_17 = (instanciador_lx&&v_251);
  if (instanciador_c_lampExt) {
    sub_16 = sub_17;
  } else {
    sub_16 = false;
  };
  sub_15 = sub_16;
  if (instanciador_ck_16_1) {
    sub_14 = sub_15;
  } else {
    sub_14 = false;
  };
  if (instanciador_c4_lamp) {
    v_254 = sub_14;
  } else {
    v_254 = sub_15;
  };
  if (instanciador_l4) {
    v_255 = v_254;
  } else {
    v_255 = sub_15;
  };
  if (instanciador_c4_lamp) {
    v_252 = false;
  } else {
    v_252 = sub_14;
  };
  if (instanciador_l4) {
    v_253 = false;
  } else {
    v_253 = v_252;
  };
  if (instanciador_c4) {
    sub_13 = v_253;
  } else {
    sub_13 = v_255;
  };
  if (instanciador_ck_14_1) {
    sub_18 = false;
  } else {
    sub_18 = sub_13;
  };
  if (instanciador_c3_lamp) {
    v_258 = sub_18;
  } else {
    v_258 = false;
  };
  if (instanciador_l3) {
    v_259 = v_258;
  } else {
    v_259 = false;
  };
  if (instanciador_c3_lamp) {
    v_256 = sub_13;
  } else {
    v_256 = sub_18;
  };
  if (instanciador_l3) {
    v_257 = sub_13;
  } else {
    v_257 = v_256;
  };
  if (instanciador_c3) {
    sub_12 = v_257;
  } else {
    sub_12 = v_259;
  };
  if (instanciador_ck_12_1) {
    sub_19 = false;
  } else {
    sub_19 = sub_12;
  };
  if (instanciador_c2_lamp) {
    v_262 = sub_19;
  } else {
    v_262 = false;
  };
  if (instanciador_l2) {
    v_263 = v_262;
  } else {
    v_263 = false;
  };
  if (instanciador_c2_lamp) {
    v_260 = sub_12;
  } else {
    v_260 = sub_19;
  };
  if (instanciador_l2) {
    v_261 = sub_12;
  } else {
    v_261 = v_260;
  };
  if (instanciador_c2) {
    sub_11 = v_261;
  } else {
    sub_11 = v_263;
  };
  if (instanciador_ck_10_1) {
    sub_20 = false;
  } else {
    sub_20 = sub_11;
  };
  if (instanciador_c1_lamp) {
    v_266 = sub_20;
  } else {
    v_266 = false;
  };
  if (instanciador_l1) {
    v_267 = v_266;
  } else {
    v_267 = false;
  };
  if (instanciador_c1_lamp) {
    v_264 = sub_11;
  } else {
    v_264 = sub_20;
  };
  if (instanciador_l1) {
    v_265 = sub_11;
  } else {
    v_265 = v_264;
  };
  if (instanciador_c1) {
    sub_10 = v_265;
  } else {
    sub_10 = v_267;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  v_229 = !(instanciador_lx);
  sub_28 = instanciador_ck_18_1;
  v_230 = (v_229||sub_28);
  v_227 = !(instanciador_ck_18_1);
  v_228 = (v_227||false);
  sub_29 = (instanciador_lx||v_228);
  if (instanciador_c_lampExt) {
    sub_27 = v_230;
  } else {
    sub_27 = sub_29;
  };
  sub_26 = sub_27;
  if (instanciador_ck_16_1) {
    sub_30 = false;
  } else {
    sub_30 = sub_26;
  };
  if (instanciador_c4_lamp) {
    v_233 = sub_30;
  } else {
    v_233 = false;
  };
  if (instanciador_l4) {
    v_234 = v_233;
  } else {
    v_234 = false;
  };
  if (instanciador_c4_lamp) {
    v_231 = sub_26;
  } else {
    v_231 = sub_30;
  };
  if (instanciador_l4) {
    v_232 = sub_26;
  } else {
    v_232 = v_231;
  };
  if (instanciador_c4) {
    sub_25 = v_232;
  } else {
    sub_25 = v_234;
  };
  if (instanciador_ck_14_1) {
    sub_31 = false;
  } else {
    sub_31 = sub_25;
  };
  if (instanciador_c3_lamp) {
    v_237 = sub_31;
  } else {
    v_237 = false;
  };
  if (instanciador_l3) {
    v_238 = v_237;
  } else {
    v_238 = false;
  };
  if (instanciador_c3_lamp) {
    v_235 = sub_25;
  } else {
    v_235 = sub_31;
  };
  if (instanciador_l3) {
    v_236 = sub_25;
  } else {
    v_236 = v_235;
  };
  if (instanciador_c3) {
    sub_24 = v_236;
  } else {
    sub_24 = v_238;
  };
  if (instanciador_ck_12_1) {
    sub_32 = false;
  } else {
    sub_32 = sub_24;
  };
  if (instanciador_c2_lamp) {
    v_241 = sub_32;
  } else {
    v_241 = false;
  };
  if (instanciador_l2) {
    v_242 = v_241;
  } else {
    v_242 = false;
  };
  if (instanciador_c2_lamp) {
    v_239 = sub_24;
  } else {
    v_239 = sub_32;
  };
  if (instanciador_l2) {
    v_240 = sub_24;
  } else {
    v_240 = v_239;
  };
  if (instanciador_c2) {
    sub_23 = v_240;
  } else {
    sub_23 = v_242;
  };
  if (instanciador_ck_10_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_23;
  };
  if (instanciador_c1_lamp) {
    v_245 = sub_33;
  } else {
    v_245 = false;
  };
  if (instanciador_l1) {
    v_246 = v_245;
  } else {
    v_246 = false;
  };
  if (instanciador_c1_lamp) {
    v_243 = sub_23;
  } else {
    v_243 = sub_33;
  };
  if (instanciador_l1) {
    v_244 = sub_23;
  } else {
    v_244 = v_243;
  };
  if (instanciador_c1) {
    sub_22 = v_244;
  } else {
    sub_22 = v_246;
  };
  if (instanciador_domingo_input) {
    v_247 = sub_10;
  } else {
    v_247 = sub_22;
  };
  if (instanciador_seguranca_input) {
    v_248 = sub_9;
  } else {
    v_248 = v_247;
  };
  if (instanciador_neutro_input) {
    v_249 = sub_8;
  } else {
    v_249 = v_248;
  };
  if (instanciador_domingol_input) {
    sub_21 = sub_7;
  } else {
    sub_21 = v_249;
  };
  if (instanciador_ebd_input) {
    sub_4 = sub_5;
  } else {
    sub_4 = sub_21;
  };
  sub_37 = sub_22;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (instanciador_sexta_input) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_6;
  };
  if (instanciador_ebd_input) {
    v_268 = sub_5;
  } else {
    v_268 = sub_34;
  };
  if (instanciador_v_299) {
    sub_3 = sub_34;
  } else {
    sub_3 = sub_4;
  };
  if (instanciador_v_301) {
    sub_2 = sub_5;
  } else {
    sub_2 = sub_3;
  };
  if (instanciador_v_300) {
    sub_1 = v_268;
  } else {
    sub_1 = sub_2;
  };
  v_209 = !(instanciador_lx);
  v_210 = (v_209&&sub_28);
  if (instanciador_c_lampExt) {
    sub_52 = sub_17;
  } else {
    sub_52 = v_210;
  };
  sub_51 = sub_52;
  if (instanciador_ck_16_1) {
    sub_50 = sub_51;
  } else {
    sub_50 = false;
  };
  if (instanciador_c4_lamp) {
    v_213 = sub_50;
  } else {
    v_213 = sub_51;
  };
  if (instanciador_l4) {
    v_214 = v_213;
  } else {
    v_214 = sub_51;
  };
  if (instanciador_c4_lamp) {
    v_211 = false;
  } else {
    v_211 = sub_50;
  };
  if (instanciador_l4) {
    v_212 = false;
  } else {
    v_212 = v_211;
  };
  if (instanciador_c4) {
    sub_49 = v_212;
  } else {
    sub_49 = v_214;
  };
  if (instanciador_ck_14_1) {
    sub_53 = false;
  } else {
    sub_53 = sub_49;
  };
  if (instanciador_c3_lamp) {
    v_217 = sub_53;
  } else {
    v_217 = false;
  };
  if (instanciador_l3) {
    v_218 = v_217;
  } else {
    v_218 = false;
  };
  if (instanciador_c3_lamp) {
    v_215 = sub_49;
  } else {
    v_215 = sub_53;
  };
  if (instanciador_l3) {
    v_216 = sub_49;
  } else {
    v_216 = v_215;
  };
  if (instanciador_c3) {
    sub_48 = v_216;
  } else {
    sub_48 = v_218;
  };
  if (instanciador_ck_12_1) {
    sub_54 = false;
  } else {
    sub_54 = sub_48;
  };
  if (instanciador_c2_lamp) {
    v_221 = sub_54;
  } else {
    v_221 = false;
  };
  if (instanciador_l2) {
    v_222 = v_221;
  } else {
    v_222 = false;
  };
  if (instanciador_c2_lamp) {
    v_219 = sub_48;
  } else {
    v_219 = sub_54;
  };
  if (instanciador_l2) {
    v_220 = sub_48;
  } else {
    v_220 = v_219;
  };
  if (instanciador_c2) {
    sub_47 = v_220;
  } else {
    sub_47 = v_222;
  };
  if (instanciador_ck_10_1) {
    sub_55 = false;
  } else {
    sub_55 = sub_47;
  };
  if (instanciador_c1_lamp) {
    v_225 = sub_55;
  } else {
    v_225 = false;
  };
  if (instanciador_l1) {
    v_226 = v_225;
  } else {
    v_226 = false;
  };
  if (instanciador_c1_lamp) {
    v_223 = sub_47;
  } else {
    v_223 = sub_55;
  };
  if (instanciador_l1) {
    v_224 = sub_47;
  } else {
    v_224 = v_223;
  };
  if (instanciador_c1) {
    sub_46 = v_224;
  } else {
    sub_46 = v_226;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (instanciador_c_lampExt) {
    sub_62 = true;
  } else {
    sub_62 = sub_29;
  };
  sub_61 = sub_62;
  if (instanciador_ck_16_1) {
    sub_63 = false;
  } else {
    sub_63 = sub_61;
  };
  if (instanciador_c4_lamp) {
    v_192 = sub_63;
  } else {
    v_192 = false;
  };
  if (instanciador_l4) {
    v_193 = v_192;
  } else {
    v_193 = false;
  };
  if (instanciador_c4_lamp) {
    v = sub_61;
  } else {
    v = sub_63;
  };
  if (instanciador_l4) {
    v_191 = sub_61;
  } else {
    v_191 = v;
  };
  if (instanciador_c4) {
    sub_60 = v_191;
  } else {
    sub_60 = v_193;
  };
  if (instanciador_ck_14_1) {
    sub_64 = false;
  } else {
    sub_64 = sub_60;
  };
  if (instanciador_c3_lamp) {
    v_196 = sub_64;
  } else {
    v_196 = false;
  };
  if (instanciador_l3) {
    v_197 = v_196;
  } else {
    v_197 = false;
  };
  if (instanciador_c3_lamp) {
    v_194 = sub_60;
  } else {
    v_194 = sub_64;
  };
  if (instanciador_l3) {
    v_195 = sub_60;
  } else {
    v_195 = v_194;
  };
  if (instanciador_c3) {
    sub_59 = v_195;
  } else {
    sub_59 = v_197;
  };
  if (instanciador_ck_12_1) {
    sub_65 = false;
  } else {
    sub_65 = sub_59;
  };
  if (instanciador_c2_lamp) {
    v_200 = sub_65;
  } else {
    v_200 = false;
  };
  if (instanciador_l2) {
    v_201 = v_200;
  } else {
    v_201 = false;
  };
  if (instanciador_c2_lamp) {
    v_198 = sub_59;
  } else {
    v_198 = sub_65;
  };
  if (instanciador_l2) {
    v_199 = sub_59;
  } else {
    v_199 = v_198;
  };
  if (instanciador_c2) {
    sub_58 = v_199;
  } else {
    sub_58 = v_201;
  };
  if (instanciador_ck_10_1) {
    sub_66 = false;
  } else {
    sub_66 = sub_58;
  };
  if (instanciador_c1_lamp) {
    v_204 = sub_66;
  } else {
    v_204 = false;
  };
  if (instanciador_l1) {
    v_205 = v_204;
  } else {
    v_205 = false;
  };
  if (instanciador_c1_lamp) {
    v_202 = sub_58;
  } else {
    v_202 = sub_66;
  };
  if (instanciador_l1) {
    v_203 = sub_58;
  } else {
    v_203 = v_202;
  };
  if (instanciador_c1) {
    sub_57 = v_203;
  } else {
    sub_57 = v_205;
  };
  if (instanciador_domingo_input) {
    v_206 = sub_46;
  } else {
    v_206 = sub_57;
  };
  if (instanciador_seguranca_input) {
    v_207 = sub_45;
  } else {
    v_207 = v_206;
  };
  if (instanciador_neutro_input) {
    v_208 = sub_44;
  } else {
    v_208 = v_207;
  };
  if (instanciador_domingol_input) {
    sub_56 = sub_43;
  } else {
    sub_56 = v_208;
  };
  if (instanciador_ebd_input) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_56;
  };
  sub_70 = sub_57;
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (instanciador_sexta_input) {
    sub_67 = sub_68;
  } else {
    sub_67 = sub_42;
  };
  if (instanciador_ebd_input) {
    v_269 = sub_41;
  } else {
    v_269 = sub_67;
  };
  if (instanciador_v_299) {
    sub_39 = sub_67;
  } else {
    sub_39 = sub_40;
  };
  if (instanciador_v_301) {
    sub_38 = sub_41;
  } else {
    sub_38 = sub_39;
  };
  if (instanciador_v_300) {
    v_270 = v_269;
  } else {
    v_270 = sub_38;
  };
  if (p_instanciador_cx) {
    sub_0 = v_270;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_cx = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c4_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_v_301, int instanciador_v_300, int instanciador_v_299,
  int instanciador_pnr_6, int instanciador_ck_10_1, int instanciador_pnr_5,
  int instanciador_ck_12_1, int instanciador_pnr_4, int instanciador_ck_14_1,
  int instanciador_pnr_3, int instanciador_ck_16_1, int instanciador_pnr_2,
  int instanciador_ck_18_1, int instanciador_pnr_1, int instanciador_ck_20_1,
  int instanciador_pnr, int p_instanciador_c_vent, int p_instanciador_cv,
  int p_instanciador_cx, int p_instanciador_c4, int p_instanciador_c3,
  int p_instanciador_c2, int p_instanciador_c1, int p_instanciador_c_lampExt,
  int p_instanciador_c4_lamp, int p_instanciador_c3_lamp,
  int p_instanciador_c2_lamp, int p_instanciador_c1_lamp,
  int instanciador_c3, int instanciador_c2, int instanciador_c1,
  int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c4_out* _out) {
  
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int v_334;
  int v_333;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  v_326 = !(instanciador_ck_18_1);
  v_327 = (v_326&&false);
  v_328 = (instanciador_lx&&v_327);
  sub_17 = false;
  if (instanciador_c_lampExt) {
    sub_16 = v_328;
  } else {
    sub_16 = sub_17;
  };
  sub_15 = sub_16;
  if (instanciador_ck_16_1) {
    v_329 = sub_15;
  } else {
    v_329 = false;
  };
  if (instanciador_c4_lamp) {
    sub_14 = v_329;
  } else {
    sub_14 = sub_15;
  };
  if (instanciador_l4) {
    sub_13 = sub_14;
  } else {
    sub_13 = sub_15;
  };
  if (instanciador_ck_14_1) {
    sub_18 = false;
  } else {
    sub_18 = sub_13;
  };
  if (instanciador_c3_lamp) {
    v_332 = sub_18;
  } else {
    v_332 = false;
  };
  if (instanciador_l3) {
    v_333 = v_332;
  } else {
    v_333 = false;
  };
  if (instanciador_c3_lamp) {
    v_330 = sub_13;
  } else {
    v_330 = sub_18;
  };
  if (instanciador_l3) {
    v_331 = sub_13;
  } else {
    v_331 = v_330;
  };
  if (instanciador_c3) {
    sub_12 = v_331;
  } else {
    sub_12 = v_333;
  };
  if (instanciador_ck_12_1) {
    sub_19 = false;
  } else {
    sub_19 = sub_12;
  };
  if (instanciador_c2_lamp) {
    v_336 = sub_19;
  } else {
    v_336 = false;
  };
  if (instanciador_l2) {
    v_337 = v_336;
  } else {
    v_337 = false;
  };
  if (instanciador_c2_lamp) {
    v_334 = sub_12;
  } else {
    v_334 = sub_19;
  };
  if (instanciador_l2) {
    v_335 = sub_12;
  } else {
    v_335 = v_334;
  };
  if (instanciador_c2) {
    sub_11 = v_335;
  } else {
    sub_11 = v_337;
  };
  if (instanciador_ck_10_1) {
    sub_20 = false;
  } else {
    sub_20 = sub_11;
  };
  if (instanciador_c1_lamp) {
    v_340 = sub_20;
  } else {
    v_340 = false;
  };
  if (instanciador_l1) {
    v_341 = v_340;
  } else {
    v_341 = false;
  };
  if (instanciador_c1_lamp) {
    v_338 = sub_11;
  } else {
    v_338 = sub_20;
  };
  if (instanciador_l1) {
    v_339 = sub_11;
  } else {
    v_339 = v_338;
  };
  if (instanciador_c1) {
    sub_10 = v_339;
  } else {
    sub_10 = v_341;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  v_307 = (instanciador_ck_18_1&&false);
  v_306 = !(instanciador_lx);
  v_308 = (v_306&&v_307);
  if (instanciador_c_lampExt) {
    sub_27 = sub_17;
  } else {
    sub_27 = v_308;
  };
  sub_26 = sub_27;
  v_303 = !(instanciador_ck_18_1);
  v_304 = (v_303||false);
  v_305 = (instanciador_lx||v_304);
  sub_30 = true;
  if (instanciador_c_lampExt) {
    sub_29 = sub_30;
  } else {
    sub_29 = v_305;
  };
  sub_28 = sub_29;
  if (instanciador_ck_16_1) {
    v_309 = sub_28;
  } else {
    v_309 = sub_26;
  };
  if (instanciador_c4_lamp) {
    v_310 = v_309;
  } else {
    v_310 = sub_28;
  };
  if (instanciador_ck_16_1) {
    v_302 = false;
  } else {
    v_302 = sub_28;
  };
  if (instanciador_c4_lamp) {
    sub_31 = sub_28;
  } else {
    sub_31 = v_302;
  };
  if (instanciador_l4) {
    sub_25 = v_310;
  } else {
    sub_25 = sub_31;
  };
  if (instanciador_ck_14_1) {
    sub_32 = false;
  } else {
    sub_32 = sub_25;
  };
  if (instanciador_c3_lamp) {
    v_313 = sub_32;
  } else {
    v_313 = false;
  };
  if (instanciador_l3) {
    v_314 = v_313;
  } else {
    v_314 = false;
  };
  if (instanciador_c3_lamp) {
    v_311 = sub_25;
  } else {
    v_311 = sub_32;
  };
  if (instanciador_l3) {
    v_312 = sub_25;
  } else {
    v_312 = v_311;
  };
  if (instanciador_c3) {
    sub_24 = v_312;
  } else {
    sub_24 = v_314;
  };
  if (instanciador_ck_12_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_24;
  };
  if (instanciador_c2_lamp) {
    v_317 = sub_33;
  } else {
    v_317 = false;
  };
  if (instanciador_l2) {
    v_318 = v_317;
  } else {
    v_318 = false;
  };
  if (instanciador_c2_lamp) {
    v_315 = sub_24;
  } else {
    v_315 = sub_33;
  };
  if (instanciador_l2) {
    v_316 = sub_24;
  } else {
    v_316 = v_315;
  };
  if (instanciador_c2) {
    sub_23 = v_316;
  } else {
    sub_23 = v_318;
  };
  if (instanciador_ck_10_1) {
    sub_34 = false;
  } else {
    sub_34 = sub_23;
  };
  if (instanciador_c1_lamp) {
    v_321 = sub_34;
  } else {
    v_321 = false;
  };
  if (instanciador_l1) {
    v_322 = v_321;
  } else {
    v_322 = false;
  };
  if (instanciador_c1_lamp) {
    v_319 = sub_23;
  } else {
    v_319 = sub_34;
  };
  if (instanciador_l1) {
    v_320 = sub_23;
  } else {
    v_320 = v_319;
  };
  if (instanciador_c1) {
    sub_22 = v_320;
  } else {
    sub_22 = v_322;
  };
  if (instanciador_domingo_input) {
    v_323 = sub_10;
  } else {
    v_323 = sub_22;
  };
  if (instanciador_seguranca_input) {
    v_324 = sub_9;
  } else {
    v_324 = v_323;
  };
  if (instanciador_neutro_input) {
    v_325 = sub_8;
  } else {
    v_325 = v_324;
  };
  if (instanciador_domingol_input) {
    sub_21 = sub_7;
  } else {
    sub_21 = v_325;
  };
  if (instanciador_ebd_input) {
    sub_4 = sub_5;
  } else {
    sub_4 = sub_21;
  };
  sub_38 = sub_22;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (instanciador_sexta_input) {
    sub_35 = sub_36;
  } else {
    sub_35 = sub_6;
  };
  if (instanciador_ebd_input) {
    v_342 = sub_5;
  } else {
    v_342 = sub_35;
  };
  if (instanciador_v_299) {
    sub_3 = sub_35;
  } else {
    sub_3 = sub_4;
  };
  if (instanciador_v_301) {
    sub_2 = sub_5;
  } else {
    sub_2 = sub_3;
  };
  if (instanciador_v_300) {
    sub_1 = v_342;
  } else {
    sub_1 = sub_2;
  };
  v_286 = (instanciador_ck_18_1||false);
  v_285 = !(instanciador_lx);
  v_287 = (v_285||v_286);
  if (instanciador_c_lampExt) {
    sub_51 = v_287;
  } else {
    sub_51 = sub_30;
  };
  if (instanciador_ck_16_1) {
    v_288 = sub_51;
  } else {
    v_288 = sub_15;
  };
  if (instanciador_c4_lamp) {
    v_289 = sub_15;
  } else {
    v_289 = v_288;
  };
  if (instanciador_l4) {
    sub_50 = sub_14;
  } else {
    sub_50 = v_289;
  };
  if (instanciador_ck_14_1) {
    sub_52 = false;
  } else {
    sub_52 = sub_50;
  };
  if (instanciador_c3_lamp) {
    v_292 = sub_52;
  } else {
    v_292 = false;
  };
  if (instanciador_l3) {
    v_293 = v_292;
  } else {
    v_293 = false;
  };
  if (instanciador_c3_lamp) {
    v_290 = sub_50;
  } else {
    v_290 = sub_52;
  };
  if (instanciador_l3) {
    v_291 = sub_50;
  } else {
    v_291 = v_290;
  };
  if (instanciador_c3) {
    sub_49 = v_291;
  } else {
    sub_49 = v_293;
  };
  if (instanciador_ck_12_1) {
    sub_53 = false;
  } else {
    sub_53 = sub_49;
  };
  if (instanciador_c2_lamp) {
    v_296 = sub_53;
  } else {
    v_296 = false;
  };
  if (instanciador_l2) {
    v_297 = v_296;
  } else {
    v_297 = false;
  };
  if (instanciador_c2_lamp) {
    v_294 = sub_49;
  } else {
    v_294 = sub_53;
  };
  if (instanciador_l2) {
    v_295 = sub_49;
  } else {
    v_295 = v_294;
  };
  if (instanciador_c2) {
    sub_48 = v_295;
  } else {
    sub_48 = v_297;
  };
  if (instanciador_ck_10_1) {
    sub_54 = false;
  } else {
    sub_54 = sub_48;
  };
  if (instanciador_c1_lamp) {
    v_300 = sub_54;
  } else {
    v_300 = false;
  };
  if (instanciador_l1) {
    v_301 = v_300;
  } else {
    v_301 = false;
  };
  if (instanciador_c1_lamp) {
    v_298 = sub_48;
  } else {
    v_298 = sub_54;
  };
  if (instanciador_l1) {
    v_299 = sub_48;
  } else {
    v_299 = v_298;
  };
  if (instanciador_c1) {
    sub_47 = v_299;
  } else {
    sub_47 = v_301;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (instanciador_l4) {
    sub_59 = sub_28;
  } else {
    sub_59 = sub_31;
  };
  if (instanciador_ck_14_1) {
    sub_60 = false;
  } else {
    sub_60 = sub_59;
  };
  if (instanciador_c3_lamp) {
    v_272 = sub_60;
  } else {
    v_272 = false;
  };
  if (instanciador_l3) {
    v_273 = v_272;
  } else {
    v_273 = false;
  };
  if (instanciador_c3_lamp) {
    v = sub_59;
  } else {
    v = sub_60;
  };
  if (instanciador_l3) {
    v_271 = sub_59;
  } else {
    v_271 = v;
  };
  if (instanciador_c3) {
    sub_58 = v_271;
  } else {
    sub_58 = v_273;
  };
  if (instanciador_ck_12_1) {
    sub_61 = false;
  } else {
    sub_61 = sub_58;
  };
  if (instanciador_c2_lamp) {
    v_276 = sub_61;
  } else {
    v_276 = false;
  };
  if (instanciador_l2) {
    v_277 = v_276;
  } else {
    v_277 = false;
  };
  if (instanciador_c2_lamp) {
    v_274 = sub_58;
  } else {
    v_274 = sub_61;
  };
  if (instanciador_l2) {
    v_275 = sub_58;
  } else {
    v_275 = v_274;
  };
  if (instanciador_c2) {
    sub_57 = v_275;
  } else {
    sub_57 = v_277;
  };
  if (instanciador_ck_10_1) {
    sub_62 = false;
  } else {
    sub_62 = sub_57;
  };
  if (instanciador_c1_lamp) {
    v_280 = sub_62;
  } else {
    v_280 = false;
  };
  if (instanciador_l1) {
    v_281 = v_280;
  } else {
    v_281 = false;
  };
  if (instanciador_c1_lamp) {
    v_278 = sub_57;
  } else {
    v_278 = sub_62;
  };
  if (instanciador_l1) {
    v_279 = sub_57;
  } else {
    v_279 = v_278;
  };
  if (instanciador_c1) {
    sub_56 = v_279;
  } else {
    sub_56 = v_281;
  };
  if (instanciador_domingo_input) {
    v_282 = sub_47;
  } else {
    v_282 = sub_56;
  };
  if (instanciador_seguranca_input) {
    v_283 = sub_46;
  } else {
    v_283 = v_282;
  };
  if (instanciador_neutro_input) {
    v_284 = sub_45;
  } else {
    v_284 = v_283;
  };
  if (instanciador_domingol_input) {
    sub_55 = sub_44;
  } else {
    sub_55 = v_284;
  };
  if (instanciador_ebd_input) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_55;
  };
  sub_66 = sub_56;
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (instanciador_sexta_input) {
    sub_63 = sub_64;
  } else {
    sub_63 = sub_43;
  };
  if (instanciador_ebd_input) {
    v_343 = sub_42;
  } else {
    v_343 = sub_63;
  };
  if (instanciador_v_299) {
    sub_40 = sub_63;
  } else {
    sub_40 = sub_41;
  };
  if (instanciador_v_301) {
    sub_39 = sub_42;
  } else {
    sub_39 = sub_40;
  };
  if (instanciador_v_300) {
    v_344 = v_343;
  } else {
    v_344 = sub_39;
  };
  if (p_instanciador_c4) {
    sub_0 = v_344;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c4 = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c3_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_v_301, int instanciador_v_300, int instanciador_v_299,
  int instanciador_pnr_6, int instanciador_ck_10_1, int instanciador_pnr_5,
  int instanciador_ck_12_1, int instanciador_pnr_4, int instanciador_ck_14_1,
  int instanciador_pnr_3, int instanciador_ck_16_1, int instanciador_pnr_2,
  int instanciador_ck_18_1, int instanciador_pnr_1, int instanciador_ck_20_1,
  int instanciador_pnr, int p_instanciador_c_vent, int p_instanciador_cv,
  int p_instanciador_cx, int p_instanciador_c4, int p_instanciador_c3,
  int p_instanciador_c2, int p_instanciador_c1, int p_instanciador_c_lampExt,
  int p_instanciador_c4_lamp, int p_instanciador_c3_lamp,
  int p_instanciador_c2_lamp, int p_instanciador_c1_lamp,
  int instanciador_c2, int instanciador_c1, int instanciador_c_lampExt,
  int instanciador_c4_lamp, int instanciador_c3_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c3_out* _out) {
  
  int v_391;
  int v_390;
  int v_389;
  int v_388;
  int v_387;
  int v_386;
  int v_385;
  int v_384;
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int v_372;
  int v_371;
  int v_370;
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int v_364;
  int v_363;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_356;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int v_349;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  v_374 = !(instanciador_ck_18_1);
  v_375 = (v_374&&false);
  v_376 = (instanciador_lx&&v_375);
  sub_16 = false;
  if (instanciador_c_lampExt) {
    sub_15 = v_376;
  } else {
    sub_15 = sub_16;
  };
  sub_14 = sub_15;
  if (instanciador_ck_16_1) {
    v_377 = sub_14;
  } else {
    v_377 = false;
  };
  if (instanciador_c4_lamp) {
    v_378 = v_377;
  } else {
    v_378 = sub_14;
  };
  if (instanciador_l4) {
    sub_13 = v_378;
  } else {
    sub_13 = sub_14;
  };
  v_370 = (instanciador_ck_18_1||false);
  v_369 = !(instanciador_lx);
  v_371 = (v_369||v_370);
  sub_20 = true;
  if (instanciador_c_lampExt) {
    sub_19 = v_371;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  if (instanciador_ck_16_1) {
    v_372 = sub_18;
  } else {
    v_372 = false;
  };
  if (instanciador_c4_lamp) {
    v_373 = v_372;
  } else {
    v_373 = sub_18;
  };
  if (instanciador_l4) {
    sub_17 = v_373;
  } else {
    sub_17 = sub_18;
  };
  if (instanciador_ck_14_1) {
    v_381 = false;
  } else {
    v_381 = sub_17;
  };
  if (instanciador_c3_lamp) {
    v_382 = sub_17;
  } else {
    v_382 = v_381;
  };
  if (instanciador_ck_14_1) {
    sub_12 = sub_17;
  } else {
    sub_12 = sub_13;
  };
  if (p_instanciador_c3) {
    v_379 = sub_17;
  } else {
    v_379 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_380 = v_379;
  } else {
    v_380 = sub_17;
  };
  if (instanciador_l3) {
    sub_11 = v_380;
  } else {
    sub_11 = v_382;
  };
  if (instanciador_ck_12_1) {
    sub_21 = false;
  } else {
    sub_21 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_385 = sub_21;
  } else {
    v_385 = false;
  };
  if (instanciador_l2) {
    v_386 = v_385;
  } else {
    v_386 = false;
  };
  if (instanciador_c2_lamp) {
    v_383 = sub_11;
  } else {
    v_383 = sub_21;
  };
  if (instanciador_l2) {
    v_384 = sub_11;
  } else {
    v_384 = v_383;
  };
  if (instanciador_c2) {
    sub_10 = v_384;
  } else {
    sub_10 = v_386;
  };
  if (instanciador_ck_10_1) {
    sub_22 = false;
  } else {
    sub_22 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_389 = sub_22;
  } else {
    v_389 = false;
  };
  if (instanciador_l1) {
    v_390 = v_389;
  } else {
    v_390 = false;
  };
  if (instanciador_c1_lamp) {
    v_387 = sub_10;
  } else {
    v_387 = sub_22;
  };
  if (instanciador_l1) {
    v_388 = sub_10;
  } else {
    v_388 = v_387;
  };
  if (instanciador_c1) {
    sub_9 = v_388;
  } else {
    sub_9 = v_390;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  v_350 = (instanciador_ck_18_1&&false);
  v_349 = !(instanciador_lx);
  v_351 = (v_349&&v_350);
  if (instanciador_c_lampExt) {
    sub_30 = sub_16;
  } else {
    sub_30 = v_351;
  };
  sub_29 = sub_30;
  if (instanciador_ck_16_1) {
    v_352 = false;
  } else {
    v_352 = sub_29;
  };
  if (instanciador_c4_lamp) {
    v_353 = sub_29;
  } else {
    v_353 = v_352;
  };
  if (instanciador_l4) {
    sub_28 = sub_29;
  } else {
    sub_28 = v_353;
  };
  v = !(instanciador_ck_18_1);
  v_345 = (v||false);
  v_346 = (instanciador_lx||v_345);
  if (instanciador_c_lampExt) {
    sub_33 = sub_20;
  } else {
    sub_33 = v_346;
  };
  sub_32 = sub_33;
  if (instanciador_ck_16_1) {
    v_347 = false;
  } else {
    v_347 = sub_32;
  };
  if (instanciador_c4_lamp) {
    v_348 = sub_32;
  } else {
    v_348 = v_347;
  };
  if (instanciador_l4) {
    sub_31 = sub_32;
  } else {
    sub_31 = v_348;
  };
  if (instanciador_ck_14_1) {
    v_356 = false;
  } else {
    v_356 = sub_31;
  };
  if (instanciador_c3_lamp) {
    v_357 = sub_31;
  } else {
    v_357 = v_356;
  };
  if (instanciador_ck_14_1) {
    sub_27 = sub_31;
  } else {
    sub_27 = sub_28;
  };
  if (p_instanciador_c3) {
    v_354 = sub_31;
  } else {
    v_354 = sub_27;
  };
  if (instanciador_c3_lamp) {
    v_355 = v_354;
  } else {
    v_355 = sub_31;
  };
  if (instanciador_l3) {
    sub_26 = v_355;
  } else {
    sub_26 = v_357;
  };
  if (instanciador_ck_12_1) {
    sub_34 = false;
  } else {
    sub_34 = sub_26;
  };
  if (instanciador_c2_lamp) {
    v_360 = sub_34;
  } else {
    v_360 = false;
  };
  if (instanciador_l2) {
    v_361 = v_360;
  } else {
    v_361 = false;
  };
  if (instanciador_c2_lamp) {
    v_358 = sub_26;
  } else {
    v_358 = sub_34;
  };
  if (instanciador_l2) {
    v_359 = sub_26;
  } else {
    v_359 = v_358;
  };
  if (instanciador_c2) {
    sub_25 = v_359;
  } else {
    sub_25 = v_361;
  };
  if (instanciador_ck_10_1) {
    sub_35 = false;
  } else {
    sub_35 = sub_25;
  };
  if (instanciador_c1_lamp) {
    v_364 = sub_35;
  } else {
    v_364 = false;
  };
  if (instanciador_l1) {
    v_365 = v_364;
  } else {
    v_365 = false;
  };
  if (instanciador_c1_lamp) {
    v_362 = sub_25;
  } else {
    v_362 = sub_35;
  };
  if (instanciador_l1) {
    v_363 = sub_25;
  } else {
    v_363 = v_362;
  };
  if (instanciador_c1) {
    sub_24 = v_363;
  } else {
    sub_24 = v_365;
  };
  if (instanciador_domingo_input) {
    v_366 = sub_9;
  } else {
    v_366 = sub_24;
  };
  if (instanciador_seguranca_input) {
    v_367 = sub_8;
  } else {
    v_367 = v_366;
  };
  if (instanciador_neutro_input) {
    v_368 = sub_7;
  } else {
    v_368 = v_367;
  };
  if (instanciador_domingol_input) {
    sub_23 = sub_6;
  } else {
    sub_23 = v_368;
  };
  if (instanciador_ebd_input) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_23;
  };
  sub_39 = sub_24;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (instanciador_sexta_input) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_5;
  };
  if (instanciador_ebd_input) {
    v_391 = sub_4;
  } else {
    v_391 = sub_36;
  };
  if (instanciador_v_299) {
    sub_2 = sub_36;
  } else {
    sub_2 = sub_3;
  };
  if (instanciador_v_301) {
    sub_1 = sub_4;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_v_300) {
    sub_0 = v_391;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c3 = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c2_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_v_301, int instanciador_v_300, int instanciador_v_299,
  int instanciador_pnr_6, int instanciador_ck_10_1, int instanciador_pnr_5,
  int instanciador_ck_12_1, int instanciador_pnr_4, int instanciador_ck_14_1,
  int instanciador_pnr_3, int instanciador_ck_16_1, int instanciador_pnr_2,
  int instanciador_ck_18_1, int instanciador_pnr_1, int instanciador_ck_20_1,
  int instanciador_pnr, int p_instanciador_c_vent, int p_instanciador_cv,
  int p_instanciador_cx, int p_instanciador_c4, int p_instanciador_c3,
  int p_instanciador_c2, int p_instanciador_c1, int p_instanciador_c_lampExt,
  int p_instanciador_c4_lamp, int p_instanciador_c3_lamp,
  int p_instanciador_c2_lamp, int p_instanciador_c1_lamp,
  int instanciador_c1, int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c2_out* _out) {
  
  int v_436;
  int v_435;
  int v_434;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int v_427;
  int v_426;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
  int v_418;
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_413;
  int v_412;
  int v_411;
  int v_410;
  int v_409;
  int v_408;
  int v_407;
  int v_406;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
  int v_401;
  int v_400;
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  v_421 = !(instanciador_ck_18_1);
  v_422 = (v_421&&false);
  sub_15 = (instanciador_lx&&v_422);
  v_420 = (instanciador_ck_18_1||false);
  v_419 = !(instanciador_lx);
  sub_16 = (v_419||v_420);
  if (p_instanciador_c2) {
    v_423 = sub_16;
  } else {
    v_423 = sub_15;
  };
  sub_18 = false;
  sub_19 = true;
  if (p_instanciador_c2) {
    sub_17 = sub_19;
  } else {
    sub_17 = sub_18;
  };
  if (instanciador_c_lampExt) {
    sub_14 = v_423;
  } else {
    sub_14 = sub_17;
  };
  sub_13 = sub_14;
  if (instanciador_ck_16_1) {
    v_424 = sub_13;
  } else {
    v_424 = false;
  };
  if (instanciador_c4_lamp) {
    v_425 = v_424;
  } else {
    v_425 = sub_13;
  };
  if (instanciador_l4) {
    sub_12 = v_425;
  } else {
    sub_12 = sub_13;
  };
  if (instanciador_ck_14_1) {
    v_426 = false;
  } else {
    v_426 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_427 = sub_12;
  } else {
    v_427 = v_426;
  };
  if (instanciador_l3) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_427;
  };
  if (instanciador_c_lampExt) {
    sub_23 = sub_16;
  } else {
    sub_23 = sub_19;
  };
  sub_22 = sub_23;
  if (instanciador_ck_16_1) {
    v_415 = sub_22;
  } else {
    v_415 = false;
  };
  if (instanciador_c4_lamp) {
    v_416 = v_415;
  } else {
    v_416 = sub_22;
  };
  if (instanciador_l4) {
    sub_21 = v_416;
  } else {
    sub_21 = sub_22;
  };
  if (instanciador_ck_14_1) {
    v_417 = false;
  } else {
    v_417 = sub_21;
  };
  if (instanciador_c3_lamp) {
    v_418 = sub_21;
  } else {
    v_418 = v_417;
  };
  if (instanciador_l3) {
    sub_20 = sub_21;
  } else {
    sub_20 = v_418;
  };
  if (instanciador_ck_12_1) {
    v_430 = false;
  } else {
    v_430 = sub_20;
  };
  if (instanciador_c2_lamp) {
    v_431 = sub_20;
  } else {
    v_431 = v_430;
  };
  if (instanciador_ck_12_1) {
    v_428 = sub_20;
  } else {
    v_428 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_429 = v_428;
  } else {
    v_429 = sub_20;
  };
  if (instanciador_l2) {
    sub_10 = v_429;
  } else {
    sub_10 = v_431;
  };
  if (instanciador_ck_10_1) {
    sub_24 = false;
  } else {
    sub_24 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_434 = sub_24;
  } else {
    v_434 = false;
  };
  if (instanciador_l1) {
    v_435 = v_434;
  } else {
    v_435 = false;
  };
  if (instanciador_c1_lamp) {
    v_432 = sub_10;
  } else {
    v_432 = sub_24;
  };
  if (instanciador_l1) {
    v_433 = sub_10;
  } else {
    v_433 = v_432;
  };
  if (instanciador_c1) {
    sub_9 = v_433;
  } else {
    sub_9 = v_435;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  v_398 = (instanciador_ck_18_1&&false);
  v_397 = !(instanciador_lx);
  sub_32 = (v_397&&v_398);
  v_395 = !(instanciador_ck_18_1);
  v_396 = (v_395||false);
  sub_33 = (instanciador_lx||v_396);
  if (p_instanciador_c2) {
    v_399 = sub_33;
  } else {
    v_399 = sub_32;
  };
  if (instanciador_c_lampExt) {
    sub_31 = sub_17;
  } else {
    sub_31 = v_399;
  };
  sub_30 = sub_31;
  if (instanciador_ck_16_1) {
    v_400 = false;
  } else {
    v_400 = sub_30;
  };
  if (instanciador_c4_lamp) {
    v_401 = sub_30;
  } else {
    v_401 = v_400;
  };
  if (instanciador_l4) {
    sub_29 = sub_30;
  } else {
    sub_29 = v_401;
  };
  if (instanciador_ck_14_1) {
    v_402 = false;
  } else {
    v_402 = sub_29;
  };
  if (instanciador_c3_lamp) {
    v_403 = sub_29;
  } else {
    v_403 = v_402;
  };
  if (instanciador_l3) {
    sub_28 = sub_29;
  } else {
    sub_28 = v_403;
  };
  if (instanciador_c_lampExt) {
    sub_37 = sub_19;
  } else {
    sub_37 = sub_33;
  };
  sub_36 = sub_37;
  if (instanciador_ck_16_1) {
    v = false;
  } else {
    v = sub_36;
  };
  if (instanciador_c4_lamp) {
    v_392 = sub_36;
  } else {
    v_392 = v;
  };
  if (instanciador_l4) {
    sub_35 = sub_36;
  } else {
    sub_35 = v_392;
  };
  if (instanciador_ck_14_1) {
    v_393 = false;
  } else {
    v_393 = sub_35;
  };
  if (instanciador_c3_lamp) {
    v_394 = sub_35;
  } else {
    v_394 = v_393;
  };
  if (instanciador_l3) {
    sub_34 = sub_35;
  } else {
    sub_34 = v_394;
  };
  if (instanciador_ck_12_1) {
    v_406 = false;
  } else {
    v_406 = sub_34;
  };
  if (instanciador_c2_lamp) {
    v_407 = sub_34;
  } else {
    v_407 = v_406;
  };
  if (instanciador_ck_12_1) {
    v_404 = sub_34;
  } else {
    v_404 = sub_28;
  };
  if (instanciador_c2_lamp) {
    v_405 = v_404;
  } else {
    v_405 = sub_34;
  };
  if (instanciador_l2) {
    sub_27 = v_405;
  } else {
    sub_27 = v_407;
  };
  if (instanciador_ck_10_1) {
    sub_38 = false;
  } else {
    sub_38 = sub_27;
  };
  if (instanciador_c1_lamp) {
    v_410 = sub_38;
  } else {
    v_410 = false;
  };
  if (instanciador_l1) {
    v_411 = v_410;
  } else {
    v_411 = false;
  };
  if (instanciador_c1_lamp) {
    v_408 = sub_27;
  } else {
    v_408 = sub_38;
  };
  if (instanciador_l1) {
    v_409 = sub_27;
  } else {
    v_409 = v_408;
  };
  if (instanciador_c1) {
    sub_26 = v_409;
  } else {
    sub_26 = v_411;
  };
  if (instanciador_domingo_input) {
    v_412 = sub_9;
  } else {
    v_412 = sub_26;
  };
  if (instanciador_seguranca_input) {
    v_413 = sub_8;
  } else {
    v_413 = v_412;
  };
  if (instanciador_neutro_input) {
    v_414 = sub_7;
  } else {
    v_414 = v_413;
  };
  if (instanciador_domingol_input) {
    sub_25 = sub_6;
  } else {
    sub_25 = v_414;
  };
  if (instanciador_ebd_input) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_25;
  };
  sub_42 = sub_26;
  sub_41 = sub_42;
  sub_40 = sub_41;
  if (instanciador_sexta_input) {
    sub_39 = sub_40;
  } else {
    sub_39 = sub_5;
  };
  if (instanciador_ebd_input) {
    v_436 = sub_4;
  } else {
    v_436 = sub_39;
  };
  if (instanciador_v_299) {
    sub_2 = sub_39;
  } else {
    sub_2 = sub_3;
  };
  if (instanciador_v_301) {
    sub_1 = sub_4;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_v_300) {
    sub_0 = v_436;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c2 = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c1_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_v_301, int instanciador_v_300, int instanciador_v_299,
  int instanciador_pnr_6, int instanciador_ck_10_1, int instanciador_pnr_5,
  int instanciador_ck_12_1, int instanciador_pnr_4, int instanciador_ck_14_1,
  int instanciador_pnr_3, int instanciador_ck_16_1, int instanciador_pnr_2,
  int instanciador_ck_18_1, int instanciador_pnr_1, int instanciador_ck_20_1,
  int instanciador_pnr, int p_instanciador_c_vent, int p_instanciador_cv,
  int p_instanciador_cx, int p_instanciador_c4, int p_instanciador_c3,
  int p_instanciador_c2, int p_instanciador_c1, int p_instanciador_c_lampExt,
  int p_instanciador_c4_lamp, int p_instanciador_c3_lamp,
  int p_instanciador_c2_lamp, int p_instanciador_c1_lamp,
  int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c1_out* _out) {
  
  int v_486;
  int v_485;
  int v_484;
  int v_483;
  int v_482;
  int v_481;
  int v_480;
  int v_479;
  int v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int v_473;
  int v_472;
  int v_471;
  int v_470;
  int v_469;
  int v_468;
  int v_467;
  int v_466;
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int v_461;
  int v_460;
  int v_459;
  int v_458;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_451;
  int v_450;
  int v_449;
  int v_448;
  int v_447;
  int v_446;
  int v_445;
  int v_444;
  int v_443;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  v_473 = !(instanciador_ck_18_1);
  v_474 = (v_473&&false);
  v_475 = (instanciador_lx&&v_474);
  sub_16 = false;
  if (instanciador_c_lampExt) {
    sub_15 = v_475;
  } else {
    sub_15 = sub_16;
  };
  sub_14 = sub_15;
  if (instanciador_ck_16_1) {
    v_476 = sub_14;
  } else {
    v_476 = false;
  };
  if (instanciador_c4_lamp) {
    v_477 = v_476;
  } else {
    v_477 = sub_14;
  };
  if (instanciador_l4) {
    sub_13 = v_477;
  } else {
    sub_13 = sub_14;
  };
  if (instanciador_ck_14_1) {
    v_478 = false;
  } else {
    v_478 = sub_13;
  };
  if (instanciador_c3_lamp) {
    v_479 = sub_13;
  } else {
    v_479 = v_478;
  };
  if (instanciador_l3) {
    sub_12 = sub_13;
  } else {
    sub_12 = v_479;
  };
  if (instanciador_ck_12_1) {
    v_480 = false;
  } else {
    v_480 = sub_12;
  };
  if (instanciador_c2_lamp) {
    v_481 = sub_12;
  } else {
    v_481 = v_480;
  };
  if (instanciador_l2) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_481;
  };
  v_465 = (instanciador_ck_18_1||false);
  v_464 = !(instanciador_lx);
  v_466 = (v_464||v_465);
  sub_22 = true;
  if (instanciador_c_lampExt) {
    sub_21 = v_466;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  if (instanciador_ck_16_1) {
    v_467 = sub_20;
  } else {
    v_467 = false;
  };
  if (instanciador_c4_lamp) {
    v_468 = v_467;
  } else {
    v_468 = sub_20;
  };
  if (instanciador_l4) {
    sub_19 = v_468;
  } else {
    sub_19 = sub_20;
  };
  if (instanciador_ck_14_1) {
    v_469 = false;
  } else {
    v_469 = sub_19;
  };
  if (instanciador_c3_lamp) {
    v_470 = sub_19;
  } else {
    v_470 = v_469;
  };
  if (instanciador_l3) {
    sub_18 = sub_19;
  } else {
    sub_18 = v_470;
  };
  if (instanciador_ck_12_1) {
    v_471 = false;
  } else {
    v_471 = sub_18;
  };
  if (instanciador_c2_lamp) {
    v_472 = sub_18;
  } else {
    v_472 = v_471;
  };
  if (instanciador_l2) {
    sub_17 = sub_18;
  } else {
    sub_17 = v_472;
  };
  if (instanciador_ck_10_1) {
    v_482 = sub_17;
  } else {
    v_482 = sub_11;
  };
  if (instanciador_c1_lamp) {
    v_483 = v_482;
  } else {
    v_483 = sub_17;
  };
  if (instanciador_ck_10_1) {
    v_463 = false;
  } else {
    v_463 = sub_17;
  };
  if (instanciador_c1_lamp) {
    sub_23 = sub_17;
  } else {
    sub_23 = v_463;
  };
  if (instanciador_l1) {
    sub_10 = v_483;
  } else {
    sub_10 = sub_23;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  v_450 = (instanciador_ck_18_1&&false);
  v_449 = !(instanciador_lx);
  v_451 = (v_449&&v_450);
  if (instanciador_c_lampExt) {
    sub_30 = sub_16;
  } else {
    sub_30 = v_451;
  };
  sub_29 = sub_30;
  if (instanciador_ck_16_1) {
    v_452 = false;
  } else {
    v_452 = sub_29;
  };
  if (instanciador_c4_lamp) {
    v_453 = sub_29;
  } else {
    v_453 = v_452;
  };
  if (instanciador_l4) {
    sub_28 = sub_29;
  } else {
    sub_28 = v_453;
  };
  if (instanciador_ck_14_1) {
    v_454 = false;
  } else {
    v_454 = sub_28;
  };
  if (instanciador_c3_lamp) {
    v_455 = sub_28;
  } else {
    v_455 = v_454;
  };
  if (instanciador_l3) {
    sub_27 = sub_28;
  } else {
    sub_27 = v_455;
  };
  if (instanciador_ck_12_1) {
    v_456 = false;
  } else {
    v_456 = sub_27;
  };
  if (instanciador_c2_lamp) {
    v_457 = sub_27;
  } else {
    v_457 = v_456;
  };
  if (instanciador_l2) {
    sub_26 = sub_27;
  } else {
    sub_26 = v_457;
  };
  v_440 = !(instanciador_ck_18_1);
  v_441 = (v_440||false);
  v_442 = (instanciador_lx||v_441);
  if (instanciador_c_lampExt) {
    sub_35 = sub_22;
  } else {
    sub_35 = v_442;
  };
  sub_34 = sub_35;
  if (instanciador_ck_16_1) {
    v_443 = false;
  } else {
    v_443 = sub_34;
  };
  if (instanciador_c4_lamp) {
    v_444 = sub_34;
  } else {
    v_444 = v_443;
  };
  if (instanciador_l4) {
    sub_33 = sub_34;
  } else {
    sub_33 = v_444;
  };
  if (instanciador_ck_14_1) {
    v_445 = false;
  } else {
    v_445 = sub_33;
  };
  if (instanciador_c3_lamp) {
    v_446 = sub_33;
  } else {
    v_446 = v_445;
  };
  if (instanciador_l3) {
    sub_32 = sub_33;
  } else {
    sub_32 = v_446;
  };
  if (instanciador_ck_12_1) {
    v_447 = false;
  } else {
    v_447 = sub_32;
  };
  if (instanciador_c2_lamp) {
    v_448 = sub_32;
  } else {
    v_448 = v_447;
  };
  if (instanciador_l2) {
    sub_31 = sub_32;
  } else {
    sub_31 = v_448;
  };
  if (instanciador_ck_10_1) {
    v_458 = sub_31;
  } else {
    v_458 = sub_26;
  };
  if (instanciador_c1_lamp) {
    v_459 = v_458;
  } else {
    v_459 = sub_31;
  };
  if (instanciador_ck_10_1) {
    v_439 = false;
  } else {
    v_439 = sub_31;
  };
  if (instanciador_c1_lamp) {
    sub_36 = sub_31;
  } else {
    sub_36 = v_439;
  };
  if (instanciador_l1) {
    sub_25 = v_459;
  } else {
    sub_25 = sub_36;
  };
  if (instanciador_domingo_input) {
    v_460 = sub_10;
  } else {
    v_460 = sub_25;
  };
  if (instanciador_seguranca_input) {
    v_461 = sub_9;
  } else {
    v_461 = v_460;
  };
  if (instanciador_neutro_input) {
    v_462 = sub_8;
  } else {
    v_462 = v_461;
  };
  if (instanciador_domingol_input) {
    sub_24 = sub_7;
  } else {
    sub_24 = v_462;
  };
  if (instanciador_ebd_input) {
    sub_4 = sub_5;
  } else {
    sub_4 = sub_24;
  };
  sub_40 = sub_25;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (instanciador_sexta_input) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_6;
  };
  if (instanciador_ebd_input) {
    v_484 = sub_5;
  } else {
    v_484 = sub_37;
  };
  if (instanciador_v_299) {
    sub_3 = sub_37;
  } else {
    sub_3 = sub_4;
  };
  if (instanciador_v_301) {
    sub_2 = sub_5;
  } else {
    sub_2 = sub_3;
  };
  if (instanciador_v_300) {
    sub_1 = v_484;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_l1) {
    sub_49 = sub_17;
  } else {
    sub_49 = sub_23;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (instanciador_l1) {
    sub_51 = sub_31;
  } else {
    sub_51 = sub_36;
  };
  if (instanciador_domingo_input) {
    v = sub_49;
  } else {
    v = sub_51;
  };
  if (instanciador_seguranca_input) {
    v_437 = sub_48;
  } else {
    v_437 = v;
  };
  if (instanciador_neutro_input) {
    v_438 = sub_47;
  } else {
    v_438 = v_437;
  };
  if (instanciador_domingol_input) {
    sub_50 = sub_46;
  } else {
    sub_50 = v_438;
  };
  if (instanciador_ebd_input) {
    sub_43 = sub_44;
  } else {
    sub_43 = sub_50;
  };
  sub_55 = sub_51;
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (instanciador_sexta_input) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_45;
  };
  if (instanciador_ebd_input) {
    v_485 = sub_44;
  } else {
    v_485 = sub_52;
  };
  if (instanciador_v_299) {
    sub_42 = sub_52;
  } else {
    sub_42 = sub_43;
  };
  if (instanciador_v_301) {
    sub_41 = sub_44;
  } else {
    sub_41 = sub_42;
  };
  if (instanciador_v_300) {
    v_486 = v_485;
  } else {
    v_486 = sub_41;
  };
  if (p_instanciador_c1) {
    sub_0 = v_486;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c1 = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c_lampExt_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_v_301, int instanciador_v_300, int instanciador_v_299,
  int instanciador_pnr_6, int instanciador_ck_10_1, int instanciador_pnr_5,
  int instanciador_ck_12_1, int instanciador_pnr_4, int instanciador_ck_14_1,
  int instanciador_pnr_3, int instanciador_ck_16_1, int instanciador_pnr_2,
  int instanciador_ck_18_1, int instanciador_pnr_1, int instanciador_ck_20_1,
  int instanciador_pnr, int p_instanciador_c_vent, int p_instanciador_cv,
  int p_instanciador_cx, int p_instanciador_c4, int p_instanciador_c3,
  int p_instanciador_c2, int p_instanciador_c1, int p_instanciador_c_lampExt,
  int p_instanciador_c4_lamp, int p_instanciador_c3_lamp,
  int p_instanciador_c2_lamp, int p_instanciador_c1_lamp,
  int instanciador_c4_lamp, int instanciador_c3_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c_lampExt_out* _out) {
  
  int v_508;
  int v_507;
  int v_506;
  int v_505;
  int v_504;
  int v_503;
  int v_502;
  int v_501;
  int v_500;
  int v_499;
  int v_498;
  int v_497;
  int v_496;
  int v_495;
  int v_494;
  int v_493;
  int v_492;
  int v_491;
  int v_490;
  int v_489;
  int v_488;
  int v_487;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  v_498 = !(instanciador_lx);
  sub_15 = false;
  sub_16 = instanciador_ck_18_1;
  v_499 = (v_498||sub_16);
  if (p_instanciador_c_lampExt) {
    sub_14 = v_499;
  } else {
    sub_14 = sub_15;
  };
  sub_13 = sub_14;
  if (instanciador_ck_16_1) {
    v_500 = sub_13;
  } else {
    v_500 = false;
  };
  if (instanciador_c4_lamp) {
    v_501 = v_500;
  } else {
    v_501 = sub_13;
  };
  if (instanciador_l4) {
    sub_12 = v_501;
  } else {
    sub_12 = sub_13;
  };
  if (instanciador_ck_14_1) {
    v_502 = false;
  } else {
    v_502 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_503 = sub_12;
  } else {
    v_503 = v_502;
  };
  if (instanciador_l3) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_503;
  };
  if (instanciador_ck_12_1) {
    v_504 = false;
  } else {
    v_504 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_505 = sub_11;
  } else {
    v_505 = v_504;
  };
  if (instanciador_l2) {
    sub_10 = sub_11;
  } else {
    sub_10 = v_505;
  };
  if (instanciador_ck_10_1) {
    v_506 = false;
  } else {
    v_506 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_507 = sub_10;
  } else {
    v_507 = v_506;
  };
  if (instanciador_l1) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_507;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  v = !(instanciador_lx);
  sub_24 = (v&&sub_16);
  if (p_instanciador_c_lampExt) {
    sub_23 = true;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  if (instanciador_ck_16_1) {
    v_487 = false;
  } else {
    v_487 = sub_22;
  };
  if (instanciador_c4_lamp) {
    v_488 = sub_22;
  } else {
    v_488 = v_487;
  };
  if (instanciador_l4) {
    sub_21 = sub_22;
  } else {
    sub_21 = v_488;
  };
  if (instanciador_ck_14_1) {
    v_489 = false;
  } else {
    v_489 = sub_21;
  };
  if (instanciador_c3_lamp) {
    v_490 = sub_21;
  } else {
    v_490 = v_489;
  };
  if (instanciador_l3) {
    sub_20 = sub_21;
  } else {
    sub_20 = v_490;
  };
  if (instanciador_ck_12_1) {
    v_491 = false;
  } else {
    v_491 = sub_20;
  };
  if (instanciador_c2_lamp) {
    v_492 = sub_20;
  } else {
    v_492 = v_491;
  };
  if (instanciador_l2) {
    sub_19 = sub_20;
  } else {
    sub_19 = v_492;
  };
  if (instanciador_ck_10_1) {
    v_493 = false;
  } else {
    v_493 = sub_19;
  };
  if (instanciador_c1_lamp) {
    v_494 = sub_19;
  } else {
    v_494 = v_493;
  };
  if (instanciador_l1) {
    sub_18 = sub_19;
  } else {
    sub_18 = v_494;
  };
  if (instanciador_domingo_input) {
    v_495 = sub_9;
  } else {
    v_495 = sub_18;
  };
  if (instanciador_seguranca_input) {
    v_496 = sub_8;
  } else {
    v_496 = v_495;
  };
  if (instanciador_neutro_input) {
    v_497 = sub_7;
  } else {
    v_497 = v_496;
  };
  if (instanciador_domingol_input) {
    sub_17 = sub_6;
  } else {
    sub_17 = v_497;
  };
  if (instanciador_ebd_input) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_17;
  };
  sub_28 = sub_18;
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (instanciador_sexta_input) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_5;
  };
  if (instanciador_ebd_input) {
    v_508 = sub_4;
  } else {
    v_508 = sub_25;
  };
  if (instanciador_v_299) {
    sub_2 = sub_25;
  } else {
    sub_2 = sub_3;
  };
  if (instanciador_v_301) {
    sub_1 = sub_4;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_v_300) {
    sub_0 = v_508;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c_lampExt = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c4_lamp_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_v_301, int instanciador_v_300, int instanciador_v_299,
  int instanciador_pnr_6, int instanciador_ck_10_1, int instanciador_pnr_5,
  int instanciador_ck_12_1, int instanciador_pnr_4, int instanciador_ck_14_1,
  int instanciador_pnr_3, int instanciador_ck_16_1, int instanciador_pnr_2,
  int instanciador_ck_18_1, int instanciador_pnr_1, int instanciador_ck_20_1,
  int instanciador_pnr, int p_instanciador_c_vent, int p_instanciador_cv,
  int p_instanciador_cx, int p_instanciador_c4, int p_instanciador_c3,
  int p_instanciador_c2, int p_instanciador_c1, int p_instanciador_c_lampExt,
  int p_instanciador_c4_lamp, int p_instanciador_c3_lamp,
  int p_instanciador_c2_lamp, int p_instanciador_c1_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c4_lamp_out* _out) {
  
  int v_525;
  int v_524;
  int v_523;
  int v_522;
  int v_521;
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int v_515;
  int v_514;
  int v_513;
  int v_512;
  int v_511;
  int v_510;
  int v_509;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  sub_14 = false;
  sub_13 = sub_14;
  sub_17 = p_instanciador_c4_lamp;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (instanciador_ck_16_1) {
    v_518 = sub_15;
  } else {
    v_518 = sub_13;
  };
  if (instanciador_l4) {
    sub_12 = v_518;
  } else {
    sub_12 = sub_15;
  };
  if (instanciador_ck_14_1) {
    v_519 = false;
  } else {
    v_519 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_520 = sub_12;
  } else {
    v_520 = v_519;
  };
  if (instanciador_l3) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_520;
  };
  if (instanciador_ck_12_1) {
    v_521 = false;
  } else {
    v_521 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_522 = sub_11;
  } else {
    v_522 = v_521;
  };
  if (instanciador_l2) {
    sub_10 = sub_11;
  } else {
    sub_10 = v_522;
  };
  if (instanciador_ck_10_1) {
    v_523 = false;
  } else {
    v_523 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_524 = sub_10;
  } else {
    v_524 = v_523;
  };
  if (instanciador_l1) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_524;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_23 = true;
  if (instanciador_ck_16_1) {
    v = sub_23;
  } else {
    v = sub_15;
  };
  if (instanciador_l4) {
    sub_22 = sub_15;
  } else {
    sub_22 = v;
  };
  if (instanciador_ck_14_1) {
    v_509 = false;
  } else {
    v_509 = sub_22;
  };
  if (instanciador_c3_lamp) {
    v_510 = sub_22;
  } else {
    v_510 = v_509;
  };
  if (instanciador_l3) {
    sub_21 = sub_22;
  } else {
    sub_21 = v_510;
  };
  if (instanciador_ck_12_1) {
    v_511 = false;
  } else {
    v_511 = sub_21;
  };
  if (instanciador_c2_lamp) {
    v_512 = sub_21;
  } else {
    v_512 = v_511;
  };
  if (instanciador_l2) {
    sub_20 = sub_21;
  } else {
    sub_20 = v_512;
  };
  if (instanciador_ck_10_1) {
    v_513 = false;
  } else {
    v_513 = sub_20;
  };
  if (instanciador_c1_lamp) {
    v_514 = sub_20;
  } else {
    v_514 = v_513;
  };
  if (instanciador_l1) {
    sub_19 = sub_20;
  } else {
    sub_19 = v_514;
  };
  if (instanciador_domingo_input) {
    v_515 = sub_9;
  } else {
    v_515 = sub_19;
  };
  if (instanciador_seguranca_input) {
    v_516 = sub_8;
  } else {
    v_516 = v_515;
  };
  if (instanciador_neutro_input) {
    v_517 = sub_7;
  } else {
    v_517 = v_516;
  };
  if (instanciador_domingol_input) {
    sub_18 = sub_6;
  } else {
    sub_18 = v_517;
  };
  if (instanciador_ebd_input) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_18;
  };
  sub_27 = sub_19;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (instanciador_sexta_input) {
    sub_24 = sub_25;
  } else {
    sub_24 = sub_5;
  };
  if (instanciador_ebd_input) {
    v_525 = sub_4;
  } else {
    v_525 = sub_24;
  };
  if (instanciador_v_299) {
    sub_2 = sub_24;
  } else {
    sub_2 = sub_3;
  };
  if (instanciador_v_301) {
    sub_1 = sub_4;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_v_300) {
    sub_0 = v_525;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c4_lamp = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c3_lamp_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_v_301, int instanciador_v_300, int instanciador_v_299,
  int instanciador_pnr_6, int instanciador_ck_10_1, int instanciador_pnr_5,
  int instanciador_ck_12_1, int instanciador_pnr_4, int instanciador_ck_14_1,
  int instanciador_pnr_3, int instanciador_ck_16_1, int instanciador_pnr_2,
  int instanciador_ck_18_1, int instanciador_pnr_1, int instanciador_ck_20_1,
  int instanciador_pnr, int p_instanciador_c_vent, int p_instanciador_cv,
  int p_instanciador_cx, int p_instanciador_c4, int p_instanciador_c3,
  int p_instanciador_c2, int p_instanciador_c1, int p_instanciador_c_lampExt,
  int p_instanciador_c4_lamp, int p_instanciador_c3_lamp,
  int p_instanciador_c2_lamp, int p_instanciador_c1_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c3_lamp_out* _out) {
  
  int v_529;
  int v_528;
  int v_527;
  int v_526;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  sub_12 = p_instanciador_c3_lamp;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_14 = true;
  sub_13 = sub_14;
  if (instanciador_ck_14_1) {
    v = sub_13;
  } else {
    v = sub_9;
  };
  if (instanciador_l3) {
    sub_8 = sub_9;
  } else {
    sub_8 = v;
  };
  if (instanciador_ck_12_1) {
    v_526 = false;
  } else {
    v_526 = sub_8;
  };
  if (instanciador_c2_lamp) {
    v_527 = sub_8;
  } else {
    v_527 = v_526;
  };
  if (instanciador_l2) {
    sub_7 = sub_8;
  } else {
    sub_7 = v_527;
  };
  if (instanciador_ck_10_1) {
    v_528 = false;
  } else {
    v_528 = sub_7;
  };
  if (instanciador_c1_lamp) {
    v_529 = sub_7;
  } else {
    v_529 = v_528;
  };
  if (instanciador_l1) {
    sub_6 = sub_7;
  } else {
    sub_6 = v_529;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->instanciador_c3_lamp = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c2_lamp_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_v_301, int instanciador_v_300, int instanciador_v_299,
  int instanciador_pnr_6, int instanciador_ck_10_1, int instanciador_pnr_5,
  int instanciador_ck_12_1, int instanciador_pnr_4, int instanciador_ck_14_1,
  int instanciador_pnr_3, int instanciador_ck_16_1, int instanciador_pnr_2,
  int instanciador_ck_18_1, int instanciador_pnr_1, int instanciador_ck_20_1,
  int instanciador_pnr, int p_instanciador_c_vent, int p_instanciador_cv,
  int p_instanciador_cx, int p_instanciador_c4, int p_instanciador_c3,
  int p_instanciador_c2, int p_instanciador_c1, int p_instanciador_c_lampExt,
  int p_instanciador_c4_lamp, int p_instanciador_c3_lamp,
  int p_instanciador_c2_lamp, int p_instanciador_c1_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c2_lamp_out* _out) {
  
  int v_531;
  int v_530;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  sub_12 = p_instanciador_c2_lamp;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_15 = true;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (instanciador_ck_12_1) {
    v = sub_13;
  } else {
    v = sub_8;
  };
  if (instanciador_l2) {
    sub_7 = sub_8;
  } else {
    sub_7 = v;
  };
  if (instanciador_ck_10_1) {
    v_530 = false;
  } else {
    v_530 = sub_7;
  };
  if (instanciador_c1_lamp) {
    v_531 = sub_7;
  } else {
    v_531 = v_530;
  };
  if (instanciador_l1) {
    sub_6 = sub_7;
  } else {
    sub_6 = v_531;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->instanciador_c2_lamp = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c1_lamp_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_v_301, int instanciador_v_300, int instanciador_v_299,
  int instanciador_pnr_6, int instanciador_ck_10_1, int instanciador_pnr_5,
  int instanciador_ck_12_1, int instanciador_pnr_4, int instanciador_ck_14_1,
  int instanciador_pnr_3, int instanciador_ck_16_1, int instanciador_pnr_2,
  int instanciador_ck_18_1, int instanciador_pnr_1, int instanciador_ck_20_1,
  int instanciador_pnr, int p_instanciador_c_vent, int p_instanciador_cv,
  int p_instanciador_cx, int p_instanciador_c4, int p_instanciador_c3,
  int p_instanciador_c2, int p_instanciador_c1, int p_instanciador_c_lampExt,
  int p_instanciador_c4_lamp, int p_instanciador_c3_lamp,
  int p_instanciador_c2_lamp, int p_instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c1_lamp_out* _out) {
  
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  sub_12 = p_instanciador_c1_lamp;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_16 = true;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (instanciador_ck_10_1) {
    v = sub_13;
  } else {
    v = sub_7;
  };
  if (instanciador_l1) {
    sub_6 = sub_7;
  } else {
    sub_6 = v;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->instanciador_c1_lamp = sub_0;;
}

void Instanciador_controller__instanciador_controller_step(int instanciador_sexta_input,
                                                           int instanciador_ebd_input,
                                                           int instanciador_domingo_input,
                                                           int instanciador_domingol_input,
                                                           int instanciador_neutro_input,
                                                           int instanciador_seguranca_input,
                                                           int instanciador_l1,
                                                           int instanciador_l2,
                                                           int instanciador_l3,
                                                           int instanciador_l4,
                                                           int instanciador_lx,
                                                           int instanciador_lv,
                                                           int instanciador_v_301,
                                                           int instanciador_v_300,
                                                           int instanciador_v_299,
                                                           int instanciador_pnr_6,
                                                           int instanciador_ck_10_1,
                                                           int instanciador_pnr_5,
                                                           int instanciador_ck_12_1,
                                                           int instanciador_pnr_4,
                                                           int instanciador_ck_14_1,
                                                           int instanciador_pnr_3,
                                                           int instanciador_ck_16_1,
                                                           int instanciador_pnr_2,
                                                           int instanciador_ck_18_1,
                                                           int instanciador_pnr_1,
                                                           int instanciador_ck_20_1,
                                                           int instanciador_pnr,
                                                           int p_instanciador_c_vent,
                                                           int p_instanciador_cv,
                                                           int p_instanciador_cx,
                                                           int p_instanciador_c4,
                                                           int p_instanciador_c3,
                                                           int p_instanciador_c2,
                                                           int p_instanciador_c1,
                                                           int p_instanciador_c_lampExt,
                                                           int p_instanciador_c4_lamp,
                                                           int p_instanciador_c3_lamp,
                                                           int p_instanciador_c2_lamp,
                                                           int p_instanciador_c1_lamp,
                                                           Instanciador_controller__instanciador_controller_out* _out) {
  Instanciador_controller__instanciador_controller_instanciador_c3_out Instanciador_controller__instanciador_controller_instanciador_c3_out_st;
  Instanciador_controller__instanciador_controller_instanciador_cx_out Instanciador_controller__instanciador_controller_instanciador_cx_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c1_lamp_out Instanciador_controller__instanciador_controller_instanciador_c1_lamp_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c4_lamp_out Instanciador_controller__instanciador_controller_instanciador_c4_lamp_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c4_out Instanciador_controller__instanciador_controller_instanciador_c4_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c_lampExt_out Instanciador_controller__instanciador_controller_instanciador_c_lampExt_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c2_out Instanciador_controller__instanciador_controller_instanciador_c2_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c_vent_out Instanciador_controller__instanciador_controller_instanciador_c_vent_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c3_lamp_out Instanciador_controller__instanciador_controller_instanciador_c3_lamp_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c2_lamp_out Instanciador_controller__instanciador_controller_instanciador_c2_lamp_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c1_out Instanciador_controller__instanciador_controller_instanciador_c1_out_st;
  Instanciador_controller__instanciador_controller_instanciador_cv_out Instanciador_controller__instanciador_controller_instanciador_cv_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c1_lamp_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_v_301, instanciador_v_300,
  instanciador_v_299, instanciador_pnr_6, instanciador_ck_10_1,
  instanciador_pnr_5, instanciador_ck_12_1, instanciador_pnr_4,
  instanciador_ck_14_1, instanciador_pnr_3, instanciador_ck_16_1,
  instanciador_pnr_2, instanciador_ck_18_1, instanciador_pnr_1,
  instanciador_ck_20_1, instanciador_pnr, p_instanciador_c_vent,
  p_instanciador_cv, p_instanciador_cx, p_instanciador_c4, p_instanciador_c3,
  p_instanciador_c2, p_instanciador_c1, p_instanciador_c_lampExt,
  p_instanciador_c4_lamp, p_instanciador_c3_lamp, p_instanciador_c2_lamp,
  p_instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c1_lamp_out_st);
  _out->instanciador_c1_lamp = Instanciador_controller__instanciador_controller_instanciador_c1_lamp_out_st.instanciador_c1_lamp;
  Instanciador_controller__instanciador_controller_instanciador_c2_lamp_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_v_301, instanciador_v_300,
  instanciador_v_299, instanciador_pnr_6, instanciador_ck_10_1,
  instanciador_pnr_5, instanciador_ck_12_1, instanciador_pnr_4,
  instanciador_ck_14_1, instanciador_pnr_3, instanciador_ck_16_1,
  instanciador_pnr_2, instanciador_ck_18_1, instanciador_pnr_1,
  instanciador_ck_20_1, instanciador_pnr, p_instanciador_c_vent,
  p_instanciador_cv, p_instanciador_cx, p_instanciador_c4, p_instanciador_c3,
  p_instanciador_c2, p_instanciador_c1, p_instanciador_c_lampExt,
  p_instanciador_c4_lamp, p_instanciador_c3_lamp, p_instanciador_c2_lamp,
  p_instanciador_c1_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c2_lamp_out_st);
  _out->instanciador_c2_lamp = Instanciador_controller__instanciador_controller_instanciador_c2_lamp_out_st.instanciador_c2_lamp;
  Instanciador_controller__instanciador_controller_instanciador_c3_lamp_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_v_301, instanciador_v_300,
  instanciador_v_299, instanciador_pnr_6, instanciador_ck_10_1,
  instanciador_pnr_5, instanciador_ck_12_1, instanciador_pnr_4,
  instanciador_ck_14_1, instanciador_pnr_3, instanciador_ck_16_1,
  instanciador_pnr_2, instanciador_ck_18_1, instanciador_pnr_1,
  instanciador_ck_20_1, instanciador_pnr, p_instanciador_c_vent,
  p_instanciador_cv, p_instanciador_cx, p_instanciador_c4, p_instanciador_c3,
  p_instanciador_c2, p_instanciador_c1, p_instanciador_c_lampExt,
  p_instanciador_c4_lamp, p_instanciador_c3_lamp, p_instanciador_c2_lamp,
  p_instanciador_c1_lamp, _out->instanciador_c2_lamp,
  _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c3_lamp_out_st);
  _out->instanciador_c3_lamp = Instanciador_controller__instanciador_controller_instanciador_c3_lamp_out_st.instanciador_c3_lamp;
  Instanciador_controller__instanciador_controller_instanciador_c4_lamp_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_v_301, instanciador_v_300,
  instanciador_v_299, instanciador_pnr_6, instanciador_ck_10_1,
  instanciador_pnr_5, instanciador_ck_12_1, instanciador_pnr_4,
  instanciador_ck_14_1, instanciador_pnr_3, instanciador_ck_16_1,
  instanciador_pnr_2, instanciador_ck_18_1, instanciador_pnr_1,
  instanciador_ck_20_1, instanciador_pnr, p_instanciador_c_vent,
  p_instanciador_cv, p_instanciador_cx, p_instanciador_c4, p_instanciador_c3,
  p_instanciador_c2, p_instanciador_c1, p_instanciador_c_lampExt,
  p_instanciador_c4_lamp, p_instanciador_c3_lamp, p_instanciador_c2_lamp,
  p_instanciador_c1_lamp, _out->instanciador_c3_lamp,
  _out->instanciador_c2_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c4_lamp_out_st);
  _out->instanciador_c4_lamp = Instanciador_controller__instanciador_controller_instanciador_c4_lamp_out_st.instanciador_c4_lamp;
  Instanciador_controller__instanciador_controller_instanciador_c_lampExt_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_v_301, instanciador_v_300,
  instanciador_v_299, instanciador_pnr_6, instanciador_ck_10_1,
  instanciador_pnr_5, instanciador_ck_12_1, instanciador_pnr_4,
  instanciador_ck_14_1, instanciador_pnr_3, instanciador_ck_16_1,
  instanciador_pnr_2, instanciador_ck_18_1, instanciador_pnr_1,
  instanciador_ck_20_1, instanciador_pnr, p_instanciador_c_vent,
  p_instanciador_cv, p_instanciador_cx, p_instanciador_c4, p_instanciador_c3,
  p_instanciador_c2, p_instanciador_c1, p_instanciador_c_lampExt,
  p_instanciador_c4_lamp, p_instanciador_c3_lamp, p_instanciador_c2_lamp,
  p_instanciador_c1_lamp, _out->instanciador_c4_lamp,
  _out->instanciador_c3_lamp, _out->instanciador_c2_lamp,
  _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c_lampExt_out_st);
  _out->instanciador_c_lampExt = Instanciador_controller__instanciador_controller_instanciador_c_lampExt_out_st.instanciador_c_lampExt;
  Instanciador_controller__instanciador_controller_instanciador_c1_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_v_301, instanciador_v_300,
  instanciador_v_299, instanciador_pnr_6, instanciador_ck_10_1,
  instanciador_pnr_5, instanciador_ck_12_1, instanciador_pnr_4,
  instanciador_ck_14_1, instanciador_pnr_3, instanciador_ck_16_1,
  instanciador_pnr_2, instanciador_ck_18_1, instanciador_pnr_1,
  instanciador_ck_20_1, instanciador_pnr, p_instanciador_c_vent,
  p_instanciador_cv, p_instanciador_cx, p_instanciador_c4, p_instanciador_c3,
  p_instanciador_c2, p_instanciador_c1, p_instanciador_c_lampExt,
  p_instanciador_c4_lamp, p_instanciador_c3_lamp, p_instanciador_c2_lamp,
  p_instanciador_c1_lamp, _out->instanciador_c_lampExt,
  _out->instanciador_c4_lamp, _out->instanciador_c3_lamp,
  _out->instanciador_c2_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c1_out_st);
  _out->instanciador_c1 = Instanciador_controller__instanciador_controller_instanciador_c1_out_st.instanciador_c1;
  Instanciador_controller__instanciador_controller_instanciador_c2_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_v_301, instanciador_v_300,
  instanciador_v_299, instanciador_pnr_6, instanciador_ck_10_1,
  instanciador_pnr_5, instanciador_ck_12_1, instanciador_pnr_4,
  instanciador_ck_14_1, instanciador_pnr_3, instanciador_ck_16_1,
  instanciador_pnr_2, instanciador_ck_18_1, instanciador_pnr_1,
  instanciador_ck_20_1, instanciador_pnr, p_instanciador_c_vent,
  p_instanciador_cv, p_instanciador_cx, p_instanciador_c4, p_instanciador_c3,
  p_instanciador_c2, p_instanciador_c1, p_instanciador_c_lampExt,
  p_instanciador_c4_lamp, p_instanciador_c3_lamp, p_instanciador_c2_lamp,
  p_instanciador_c1_lamp, _out->instanciador_c1,
  _out->instanciador_c_lampExt, _out->instanciador_c4_lamp,
  _out->instanciador_c3_lamp, _out->instanciador_c2_lamp,
  _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c2_out_st);
  _out->instanciador_c2 = Instanciador_controller__instanciador_controller_instanciador_c2_out_st.instanciador_c2;
  Instanciador_controller__instanciador_controller_instanciador_c3_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_v_301, instanciador_v_300,
  instanciador_v_299, instanciador_pnr_6, instanciador_ck_10_1,
  instanciador_pnr_5, instanciador_ck_12_1, instanciador_pnr_4,
  instanciador_ck_14_1, instanciador_pnr_3, instanciador_ck_16_1,
  instanciador_pnr_2, instanciador_ck_18_1, instanciador_pnr_1,
  instanciador_ck_20_1, instanciador_pnr, p_instanciador_c_vent,
  p_instanciador_cv, p_instanciador_cx, p_instanciador_c4, p_instanciador_c3,
  p_instanciador_c2, p_instanciador_c1, p_instanciador_c_lampExt,
  p_instanciador_c4_lamp, p_instanciador_c3_lamp, p_instanciador_c2_lamp,
  p_instanciador_c1_lamp, _out->instanciador_c2, _out->instanciador_c1,
  _out->instanciador_c_lampExt, _out->instanciador_c4_lamp,
  _out->instanciador_c3_lamp, _out->instanciador_c2_lamp,
  _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c3_out_st);
  _out->instanciador_c3 = Instanciador_controller__instanciador_controller_instanciador_c3_out_st.instanciador_c3;
  Instanciador_controller__instanciador_controller_instanciador_c4_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_v_301, instanciador_v_300,
  instanciador_v_299, instanciador_pnr_6, instanciador_ck_10_1,
  instanciador_pnr_5, instanciador_ck_12_1, instanciador_pnr_4,
  instanciador_ck_14_1, instanciador_pnr_3, instanciador_ck_16_1,
  instanciador_pnr_2, instanciador_ck_18_1, instanciador_pnr_1,
  instanciador_ck_20_1, instanciador_pnr, p_instanciador_c_vent,
  p_instanciador_cv, p_instanciador_cx, p_instanciador_c4, p_instanciador_c3,
  p_instanciador_c2, p_instanciador_c1, p_instanciador_c_lampExt,
  p_instanciador_c4_lamp, p_instanciador_c3_lamp, p_instanciador_c2_lamp,
  p_instanciador_c1_lamp, _out->instanciador_c3, _out->instanciador_c2,
  _out->instanciador_c1, _out->instanciador_c_lampExt,
  _out->instanciador_c4_lamp, _out->instanciador_c3_lamp,
  _out->instanciador_c2_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c4_out_st);
  _out->instanciador_c4 = Instanciador_controller__instanciador_controller_instanciador_c4_out_st.instanciador_c4;
  Instanciador_controller__instanciador_controller_instanciador_cx_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_v_301, instanciador_v_300,
  instanciador_v_299, instanciador_pnr_6, instanciador_ck_10_1,
  instanciador_pnr_5, instanciador_ck_12_1, instanciador_pnr_4,
  instanciador_ck_14_1, instanciador_pnr_3, instanciador_ck_16_1,
  instanciador_pnr_2, instanciador_ck_18_1, instanciador_pnr_1,
  instanciador_ck_20_1, instanciador_pnr, p_instanciador_c_vent,
  p_instanciador_cv, p_instanciador_cx, p_instanciador_c4, p_instanciador_c3,
  p_instanciador_c2, p_instanciador_c1, p_instanciador_c_lampExt,
  p_instanciador_c4_lamp, p_instanciador_c3_lamp, p_instanciador_c2_lamp,
  p_instanciador_c1_lamp, _out->instanciador_c4, _out->instanciador_c3,
  _out->instanciador_c2, _out->instanciador_c1, _out->instanciador_c_lampExt,
  _out->instanciador_c4_lamp, _out->instanciador_c3_lamp,
  _out->instanciador_c2_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_cx_out_st);
  _out->instanciador_cx = Instanciador_controller__instanciador_controller_instanciador_cx_out_st.instanciador_cx;
  Instanciador_controller__instanciador_controller_instanciador_cv_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_v_301, instanciador_v_300,
  instanciador_v_299, instanciador_pnr_6, instanciador_ck_10_1,
  instanciador_pnr_5, instanciador_ck_12_1, instanciador_pnr_4,
  instanciador_ck_14_1, instanciador_pnr_3, instanciador_ck_16_1,
  instanciador_pnr_2, instanciador_ck_18_1, instanciador_pnr_1,
  instanciador_ck_20_1, instanciador_pnr, p_instanciador_c_vent,
  p_instanciador_cv, p_instanciador_cx, p_instanciador_c4, p_instanciador_c3,
  p_instanciador_c2, p_instanciador_c1, p_instanciador_c_lampExt,
  p_instanciador_c4_lamp, p_instanciador_c3_lamp, p_instanciador_c2_lamp,
  p_instanciador_c1_lamp, _out->instanciador_cx, _out->instanciador_c4,
  _out->instanciador_c3, _out->instanciador_c2, _out->instanciador_c1,
  _out->instanciador_c_lampExt, _out->instanciador_c4_lamp,
  _out->instanciador_c3_lamp, _out->instanciador_c2_lamp,
  _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_cv_out_st);
  _out->instanciador_cv = Instanciador_controller__instanciador_controller_instanciador_cv_out_st.instanciador_cv;
  Instanciador_controller__instanciador_controller_instanciador_c_vent_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_v_301, instanciador_v_300,
  instanciador_v_299, instanciador_pnr_6, instanciador_ck_10_1,
  instanciador_pnr_5, instanciador_ck_12_1, instanciador_pnr_4,
  instanciador_ck_14_1, instanciador_pnr_3, instanciador_ck_16_1,
  instanciador_pnr_2, instanciador_ck_18_1, instanciador_pnr_1,
  instanciador_ck_20_1, instanciador_pnr, p_instanciador_c_vent,
  p_instanciador_cv, p_instanciador_cx, p_instanciador_c4, p_instanciador_c3,
  p_instanciador_c2, p_instanciador_c1, p_instanciador_c_lampExt,
  p_instanciador_c4_lamp, p_instanciador_c3_lamp, p_instanciador_c2_lamp,
  p_instanciador_c1_lamp, _out->instanciador_cv, _out->instanciador_cx,
  _out->instanciador_c4, _out->instanciador_c3, _out->instanciador_c2,
  _out->instanciador_c1, _out->instanciador_c_lampExt,
  _out->instanciador_c4_lamp, _out->instanciador_c3_lamp,
  _out->instanciador_c2_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c_vent_out_st);
  _out->instanciador_c_vent = Instanciador_controller__instanciador_controller_instanciador_c_vent_out_st.instanciador_c_vent;
}

