// File: wordcount.c

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * @brief Prints the usage instructions for the program.
 */
void show_usage() {
    printf("Usage: wordcount <filename>\n");
    printf("Counts the number of lines, words, and characters in a file.\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        show_usage();
        return 1;
    }

    const char *filename = argv[1];
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        perror(filename); // Prints a system error message, e.g., "file.txt: No such file or directory"
        return 1;
    }

    long char_count = 0;
    long word_count = 0;
    long line_count = 0;

    int c;
    int in_word = 0; // State flag: 0 if outside a word, 1 if inside

    while ((c = fgetc(file)) != EOF) {
        char_count++;

        if (c == '\n') {
            line_count++;
        }

        // Check if the character is whitespace
        if (isspace(c)) {
            in_word = 0;
        } else if (in_word == 0) {
            // We found the start of a new word
            in_word = 1;
            word_count++;
        }
    }

    // If the file does not end with a newline, the last line is not counted by the loop.
    // A non-empty file will always have at least one line.
    if (char_count > 0 && line_count == 0) {
        line_count = 1;
    }

    fclose(file);

    printf("%8ld %8ld %8ld %s\n", line_count, word_count, char_count, filename);

    return 0;
}
