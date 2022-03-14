/*
 * This is a simple program that processses an input file and determines the number of words, spaces, and letters in each line of the input file in C++.
 * Note the header structure and files.
 * The only thing included here is main.h
 * main.h contains all other directives 
 */
/* 
 * File:   main.cpp
 * Author: Ahmed Eid
 */

#include "main.h"

int main(int argc, char** argv) {
std::fstream myfile;

    if (argc == 2) {
         myfile.open(argv[1]);
         if (myfile.is_open()) {
            display_file(myfile);
        } else {
            std::cout << "invalid filename: " << argv[1] << std::endl;
        }


    } else {
        std::cout<< "usage: a.out filename" << std::endl;
    }
if (myfile.is_open()) {
    myfile.close();
}
            
    return 0;
}

