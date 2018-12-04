/*
 * Copyright 2018 Akshat Raika
 * Name: Akshat Raika
 * CS ID: raika
 * Assignment: p4 part1
 * file name: cache2Dcols.c
 * program to iterate through a 2D array col wise to set value as sum of 
 * col and row indices
 */
int arr2D[3000][500];
int main(int argc, char *argv[]) {
    for (int j = 0; j < 500; j++) {
        for (int i = 0; i < 3000; i++)
            arr2D[i][j] = i + j;
    }
    return 0;
}

