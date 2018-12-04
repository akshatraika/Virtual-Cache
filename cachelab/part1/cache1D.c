/*
 * Copyright 2018 Akshat Raika
 * Name: Akshat Raika
 * CS ID: raika
 * Assignment: p4 part1
 * file name: cache1D.c
 * Program to declare a 100000 sized array ad assign each value to the idex value
 */
#include<stdlib.h>
int arr[100000];
int main(int argc, char* argv[]) {
    for (int i = 0; i < 100000; i++) {
        arr[i] = i;
    }
    return 0;
}
