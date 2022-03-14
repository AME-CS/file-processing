/*
 * This is a simple program that processses an input file and determines the number of words, spaces, and letters in each line of the input file in C++.
 * Note the header structure and files.
 * The only thing included in functions.cpp is this functions.h file
 * functions.h contains all directives for functions.cpp
 */
/* 
 * File:   functions.h
 * Author: Ahmed Eid
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include <string.h>
#include <fstream>

#define SIZE 64

void display_file(std::fstream&); 
bool is_alphabetic(char);
bool is_space(char);

#endif /*FUNCTIONS_H*/