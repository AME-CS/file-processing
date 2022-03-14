/*
 * This is a simple program that processses an input file and determines the number of words, spaces, and letters in each line of the input file in C++.
 * Note the header structure and files.
 * The only thing included here is functions.h
 * functions.h contains all other directives 
 */
/* 
 * File:   functions.cpp
 * Author: Ahmed Eid
 */
#include "functions.h"
/*int lettersInLine(char line[], int length){
    int totalLetters=0;
    for (int i=0; i< length; i++){
        if(is_alphabetic(line[i])){
            totalLetters++;
        }
    } 
    return totalLetters;
} 
*/
void display_file(std::fstream &somefile){
    std::string line;
    int linenumber=0;
    while (getline(somefile, line)) {
        int totalLetters=0;
        int length=strlen(line.c_str());
        for (int i=0; i< length; i++){
            if(is_alphabetic(line[i])){
                totalLetters++;
            }
        
        } 
        int totalSpaces=0;
        for (int i=0; i< length; i++){
            if(is_space(line[i])){
                totalSpaces++;
            }
        }
        if(length>0){
            std::cout << linenumber << ": "<< line << "[" << totalLetters << " letters, "<< totalSpaces<< " spaces, "<< totalSpaces+1 << " words]" <<std::endl;
        } else {
            std::cout << linenumber <<": [Blank Line] " << std::endl;
        }
        linenumber++;
    
    }
}
bool is_alphabetic(char ch){
    bool alphabetic = false;
    if((ch >='a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        alphabetic = true;
    }
    return alphabetic;
}
bool is_space(char ch){
    bool space = false;
    if(ch ==' '){
        space = true;
    }
    return space;
}