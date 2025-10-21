# Simple C Word Counter

![Language](https://img.shields.io/badge/language-C-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

A simple command-line utility written in C that mimics the basic functionality of the Unix `wc` command. It reads a file and reports the total number of lines, words, and characters.

This project is an excellent example of file I/O and character-level processing in C.

## Features

- Counts characters, words, and lines from a given text file.
- Handles file-not-found errors gracefully.
- Formats output similarly to the standard `wc` utility.

## Prerequisites

To compile and run this project, you will need:
- A C compiler (like `gcc`)
- `make` build automation tool

## How to Get Started

### 1. Clone the Repository

```bash
git clone https://github.com/YOUR_USERNAME/YOUR_REPOSITORY_NAME.git
cd YOUR_REPOSITORY_NAME
```

### 2. Compile the Program

Use the provided `Makefile` to easily compile the source code.

```bash
make
```
This will create an executable file named `wordcount` in the project directory.

### 3. How to Use

Run the program with a single argument: the path to the file you want to analyze.

First, create a sample file to test with:
```bash
echo -e "Hello world,\nthis is a test." > sample.txt
```

Now, run the `wordcount` tool on it:
```bash
./wordcount sample.txt
```

**Expected Output:**

The output format is `lines words characters filename`.

```
       2        6       25 sample.txt
```

## Contributing

Feel free to fork the project, create a feature branch, and send a pull request. For major changes, please open an issue first to discuss what you would like to change.

## License

This project is licensed under the MIT License.
