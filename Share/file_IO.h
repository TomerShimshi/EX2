#ifndef FILE_IO_H
#define FILE_IO_H

#include <stdio.h>

int WinReadFromFile(char* pathToFile, char* buffer_for_bytes_read, int num_of_bytes_to_read, int read_from_offset);

int WinWriteToFile(char* pathToFile, char* stringToWrite, int StringLen, int write_from_offset);

int return_numbers_of_chars_in_file(char* pathToFile);

#endif



