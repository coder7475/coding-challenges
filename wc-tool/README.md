# Build Your Own `wc` Tool

This is a custom implementation of the Unix `wc` (word count) command-line utility, developed as part of the [challenge-wc](https://codingchallenges.fyi/challenges/challenge-wc) from codingchallenges.fyi.

## Description

The goal of this project is to recreate the functionality of the Unix `wc` tool. This implementation provides a faithful recreation of the original `wc` command's core functionality, allowing users to count:

- Lines (`-l`): Counts newline characters in the input
- Words (`-w`): Counts whitespace-separated sequences of characters
- Characters (`-m`): Counts the number of characters in the input
- Bytes (`-c`): Counts the number of bytes in the input

## Requirements

- C++17 compatible compiler (g++ or clang++)
- GNU Make
- Unix-like environment (Linux, macOS, WSL)

## Project Structure

```
wc-tool/
├── src/                    # Source files
│   └── main.cpp            # Main implementation
│   └── wc.cpp
│   └── wc.hpp
├── Makefile               # Build configuration
├── README.md              # This file
```

## Usage

Run the tool with the following syntax:

```bash
./ccwc [options] <file>
```

### Options

- `-m` Show the character count
- `-c` Show number of bytes
- `-l` Show the line count
- `-w` Show the word count

If no options are provided, all counts will be displayed.

## Examples

```bash
./ccwc test.txt         # Show all counts
./ccwc -l test.txt      # Show line count only
./ccwc -w test.txt      # Show word count only
./ccwc -c test.txt      # Show bytes count only
./ccwc -m test.txt      # Show characters count only
cat test.txt | ./ccwc
cat test.txt | ./ccwc -l
cat test.txt | ./ccwc -w
cat test.txt | ./ccwc -c
cat test.txt | ./ccwc -m
```

## Build Instructions

Ensure you're in the project directory:

```bash
cd wc-tool
```

To build the executable:

```bash
make
```

Note: C++17 needed

To clean up build artifacts:

```bash
make clean
```

## License

This project was created for educational purposes as part of the coding challenges from [codingchallenges.fyi](https://codingchallenges.fyi).

## Acknowledgments

- Original Unix wc tool developers
- [codingchallenges.fyi](https://codingchallenges.fyi) for the project inspiration
