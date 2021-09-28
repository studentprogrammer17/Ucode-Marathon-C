#include "../inc/minilibmx.h"

void mx_exterminate_agents(t_agent ***agents) 
{
     t_agent **buff = *agents;

    for (int i = 0; buff[i]; i++) {
        mx_printchar('!');
        mx_printchar('\n');
        free(buff[i]->name);
        free(buff[i]);
    }
    mx_printchar('\n');
    free(*agents);
    *agents = NULL;
}

