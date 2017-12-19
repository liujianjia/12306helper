#ifndef CONFIG_H
#define CONFIG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user_config {
    char _username[64];
    char _password[64];
    char _start_tour_date[32];
    char _from_station_name[16];
    char _to_station_name[16];
    int _query_ticket_interval;
    int _aways_queue;
    char _prefer_train_type[32];
    char _prefer_seat_type[16];
    char _prefer_ticket_time[32];
    char _use_cdn_server_file[32];
    char _passenger_name[16];
    char _mail_username[64];
    char _mail_password[64];
    char _mail_server[64];
};

int load_config(struct user_config *);
int parse_config(struct user_config *, const char *);
#endif
