#ifndef CONFIG_CATK_H
#define CONFIG_CATK_H
#include "types.h"

struct User rootUser;

int total_files = 0;

char* current_directory = "/";  // Set it initially to the root directory

int rows = 0;

extern uint32 prebootversion;
extern char* bootargs;

char defaulthostname[30] = "catk";

char host_name[30] = ""; // hostname with a maximum length of 63 characters
char username[30] = ""; // username

uint32 versionnumber = "0.055";
char* vername = "CatK Version Bittin'";
uint32 prebootversion = "0.055";
char* bootargs = "n/a"; // Boot args

#endif
