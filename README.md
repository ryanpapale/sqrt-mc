# Monte Carlo Square Root Approximation

A C++ implementation of a Monte Carlo method for approximating square roots of non-negative integers.

## Description

The algorithm first identifies the integer portion of the square root using a coarse search. It then estimates the fractional portion through Monte Carlo simulation.

Perfect squares are returned exactly without simulation.

## Build

Clone the repository:

```bash
git clone https://github.com/ryanpapale/sqrt-mc.git
cd sqrt-mc
```

Configure and compile:

```bash
cmake -S . -B build
cmake --build build
```

## Usage

Run the executable:

```bash
./build/sqrt_mc
```

Enter a non-negative integer when prompted.

Example 1:
```text
Enter an int >= 0: 10
sqrt(10) approx 3.16269
```
Example 2:
```text
Enter an int >= 0: 9
sqrt(9) = 3
```

## Notes

The approximation is random, so results will vary.