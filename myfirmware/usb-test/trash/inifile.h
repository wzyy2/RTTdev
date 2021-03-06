/**
* @file
* @brief initialization file read and write API
* -size of the ini file must less than 16K
* -after '=' in key value pair, can not support empty char. this would not like WIN32 API
* -support comment using ';' prefix
* -can not support multi line
* @author Deng Yangjun
* @date 2007-1-9
* @version 0.2
*/

#ifndef INI_FILE_H_
#define INI_FILE_H_


#include "ff.h"
#include "rtthread.h"

int read_profile_string( const char *section, const char *key,char *value, int size,const char *default_value,const char *file_name);
int read_profile_int( const char *section, const char *key,int default_value,const char *file_name);
int write_profile_string( const char *section, const char *key,const char *value,const char *file_name);



#endif //end of INI_FILE_H_
