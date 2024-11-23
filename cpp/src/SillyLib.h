//
// Created by user on 23/11/24.
//

#ifndef STATICNCURSES_SILLYLIB_H
#define STATICNCURSES_SILLYLIB_H

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_SIZE 1024
#define TRUE 1
#define FALSE 0

void SillyLib_create();
void SillyLib_destroy();
int SillyLib_find(const char* user, char* configuration, char* description);

#ifdef __cplusplus
}
#endif
#endif //STATICNCURSES_SILLYLIB_H
