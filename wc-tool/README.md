# Build Your Own `wc` Tool

This is a custom implementation of the Unix `wc` (word count) command-line utility, developed as part of the [challenge-wc](https://codingchallenges.fyi/challenges/challenge-wc) from codingchallenges.fyi.

## Description

The goal of this project is to recreate the functionality of the Unix `wc` tool. It reads a text file and provides counts for:

- Lines
- Words
- Characters
- Bytes

## Usage

Run the tool with the following syntax:

```bash
./ccwc [options] <file>
```

### Options

- `-c` Show the character count
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
