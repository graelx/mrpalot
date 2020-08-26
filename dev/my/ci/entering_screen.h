// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

   // _gp_gen = 0;
    _gp_gen = 0;

    switch (n_pant) {
        case 0:
            _gp_gen = decos_0; break;
        case 1:
            _gp_gen = decos_1; break;
        case 2:
            _gp_gen = decos_2; break;
        case 3:
            _gp_gen = decos_3; break;
        case 5:
            _gp_gen = decos_5; break;
        case 6:
            _gp_gen = decos_6; break;
        case 7:
            _gp_gen = decos_7; break;
        case 9:
            _gp_gen = decos_9; break;
        case 10:
            _gp_gen = decos_10; break;
        case 11:
            _gp_gen = decos_11; break;
        case 12:
            _gp_gen = decos_12; break;
        case 13:
            _gp_gen = decos_13; break;
        case 14:
            _gp_gen = decos_14; break;
        case 15:
            _gp_gen = decos_15; break;
        case 16:
            _gp_gen = decos_16; break;
        case 17:
            _gp_gen = decos_17; break;
        case 18:
            _gp_gen = decos_18; break;
        case 19:
            _gp_gen = decos_19; break;
        case 20:
            _gp_gen = decos_20; break;
        case 21:
            _gp_gen = decos_21; break;
        case 22:
            _gp_gen = decos_22; break;
        case 23:
            _gp_gen = decos_23; break;
        case 24:
            _gp_gen = decos_24; break;
        case 25:
            _gp_gen = decos_25; break;
        case 26:
            _gp_gen = decos_26; break;
        case 27:
            _gp_gen = decos_27; break;
        case 28:
            _gp_gen = decos_28; break;
        case 29:
            _gp_gen = decos_29; break;
    }

    if (_gp_gen) draw_decorations ();

	// Quitamos la puerta para pode salir.
	if (n_pant == 0) {
		if (flags[1]) {
			_x = 1; _y = 7; _t = _n = 0; update_tile();
			_x = 1; _y = 8; _t = _n = 0; update_tile();
		}
	}

	/*if (n_pant == 1) {
		if (flags[1] == 0) {
			flags[1] = 1;
		}
	}*/


