/*
 * Copyright 2018 Akshat Raika
 * Name: Akshat Raika
 * CS ID: raika
 * Assignment: p4 part1
 * file name: cache2Drows.c
 * program to iterate through a 2D array row wise to set the value as
 * sum of row and col indices
 */
int arr2D[3000][500];
int main(int argc, char *argv[]) {
    for (int i = 0; i < 3000; i++) {
        for (int j = 0; j < 500; j++)
            arr2D[i][j] = i + j;
    }
    return 0;
}
