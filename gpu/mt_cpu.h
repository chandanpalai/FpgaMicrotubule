#ifndef MT_CPU_H
#define MT_CPU_H


#include <cmath>
#include <stdio.h>
#include <string.h>

#include "mt_defines.h"





void mt_cpu(	int		n_step,				// ������ ���������� ����� �� �������
				int 	load_coords,		//

				float 	x_in[][N_d],
				float 	y_in[][N_d],
				float 	t_in[][N_d],

				float 	x_out[][N_d],
				float 	y_out[][N_d],
				float 	t_out[][N_d]
			);

void mt_cpu1(	int		n_step,				// ������ ���������� ����� �� �������
				int 	load_coords,		//

				float 	x_in[][N_d],
				float 	y_in[][N_d],
				float 	t_in[][N_d],

				float 	x_out[][N_d],
				float 	y_out[][N_d],
				float 	t_out[][N_d]
			);

void mt_cpu2(	int		n_step,				// ������ ���������� ����� �� �������
				int 	load_coords,		//

				float 	x_in[][N_d],
				float 	y_in[][N_d],
				float 	t_in[][N_d],

				float 	x_out[][N_d],
				float 	y_out[][N_d],
				float 	t_out[][N_d]
			);




#endif //MT_CPU_H
