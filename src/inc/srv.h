#ifndef __SRV_H
#define __SRV_H

void srv_init();
int srv_connect(const char *host, int port, const char *passwd,
        const char *nickname, const char *username, const char *realname);
int srv_send(const char *srv, const char *target, const char *msg);
int srv_cmd(const char *srv, const char *source, const char *cmd);
int srv_join_req(const char *srv, const char *chan, const char *passwd);
int srv_part_req(const char *srv, const char *chan, const char *reason);
int srv_quit_req(const char *srv, const char *chan, const char *reason);

#endif /* __SRV_H */