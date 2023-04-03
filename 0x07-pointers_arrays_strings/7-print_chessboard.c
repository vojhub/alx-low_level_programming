#include "main.h"
/**
 * print_chessboard - print a chessboard.
 * @a: source matrix
 *
 *
 * Return: chessboard.
 */
void print_chessboard(char (*a)[8])
void print_chessboard() {
    int row, col;

    for (row = 0; row < 8; row++) {
        for (col = 0; col < 8; col++) {
            if ((row + col) % 2 == 0) {
                _putchar("[W]");  // white square
            } else {
               _putchar("[B]");  // black square
            }
        }
        _putchar("\n");  // move to next row
    }
}
