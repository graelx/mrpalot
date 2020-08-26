// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins


	// Los escudos que terminan el juego.
	// Game Over
	//success = playing = 0;
    switch (n_pant) {
        case 0: //panta: 0	x: 13	y: 5
			if (p_tx == 13 && p_ty == 5) {
				success = playing = 0; // Game Over
			}
			break;
        case 3: //panta: 3	x: 10	y: 3
			if (p_tx == 10 && p_ty == 3) {
				success = playing = 0; // Game Over
			}
			break;
        case 6: //panta: 6	x: 9	y: 1
			if (p_tx == 9 && p_ty == 1) {
				success = playing = 0; // Game Over
			}
			break;
        case 9: //panta: 9	x: 12	y: 2
			if (p_tx == 12 && p_ty == 2) {
				success = playing = 0; // Game Over
			}
			break;
        case 12: //panta: 12	x: 5	y: 1
			if (p_tx == 5 && p_ty == 1) {
				success = playing = 0; // Game Over
			}
			break;
        case 14: //panta: 14	x: 11	y: 4
			if (p_tx == 11 && p_ty == 4) {
				success = playing = 0; // Game Over
			}
			break;
        case 16: //panta: 16	x: 12	y: 1
			if (p_tx == 12 && p_ty == 1) {
				success = playing = 0; // Game Over
			}
			break;
        case 19: //panta: 19	x: 7	y: 5
			if (p_tx == 7 && p_ty == 5) {
				success = playing = 0; // Game Over
			}
			break;
        case 23: //panta: 23	x: 1	y: 6
			if (p_tx == 1 && p_ty == 6) {
				success = playing = 0; // Game Over
			} else //panta: 23	x: 8	y: 6
			if (p_tx == 8 && p_ty == 6) {
				success = playing = 0; // Game Over
			}
			break;
	}


	// N_HOTSPOTS_TYPE_1 -> Son el num. de objetos que hay. En este caso los palos.
	if ((p_objs == N_HOTSPOTS_TYPE_1) && (flags[1] == 0)) {
        flags[1] = 1;

        // Imprime mensaje
        _t = 79;
        _x = 8; _y = 10; _gp_gen = my_spacer;  print_str ();
        _x = 8; _y = 12;                       print_str ();
        _x = 8; _y = 11; _gp_gen = my_message; print_str ();

        sp_UpdateNowEx (0);

        // Wait
        espera_activa (150);

        // Force reenter
        o_pant = 99;
    }


	// Zona de salida.
    if ((n_pant == 0) && (o_pant == 0)) {
        if (flags[1] == 1) {
            //p_objs = 0;     // Liberamos el objeto
            //++ flags [1];   // Contamos uno más.

           if ((p_tx == 0) && (p_ty == 7 || p_ty == 8)) {
                // Terminar el juego "bien"
                success = 1;
                playing = 0;
            }
        }
    }
