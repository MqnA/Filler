#include "visualizer.h"

int			main(void)
{
	t_env	env;

	usleep(20000);
	init_errors(&env, 0);
	env.fd = open("/tmp/board.dat", O_RDWR | O_SYNC);
	lseek(env.fd, 0L, 0);
	get_infos(&env, NULL, 0);
	return (create_window(&env));
}
