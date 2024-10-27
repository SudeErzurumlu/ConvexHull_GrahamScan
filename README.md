# ConvexHull_GrahamScan

An efficient implementation of the **Graham Scan algorithm** to determine the convex hull of a set of points in a 2D plane. This project includes both Python and C++ implementations, organized into modular, extensible components for ease of use and integration.

## Overview

The **Graham Scan** algorithm is a fundamental approach for finding the convex hull, which is the smallest convex polygon that encloses a given set of points in a plane. This implementation takes a set of 2D points as input and outputs the points that form the convex hull, ordered counterclockwise. The algorithm sorts points by their y-coordinates, then uses orientation checks to build the convex hull efficiently, achieving a time complexity of \(O(n \log n)\).

## Features

- **Modular Design**: Python and C++ implementations are organized into separate packages for easy integration and extensibility.
- **Cross-Language Support**: Both Python and C++ versions are available, allowing choice depending on performance or environment requirements.
- **Well-Documented Code**: Each module is fully documented, and the overall structure is designed for readability and maintainability.

## Requirements

- **Python**: Python 3.x, with no additional dependencies required (check `requirements.txt` for Python dependencies if necessary).
- **C++**: CMake (minimum version 3.10) and a compatible C++11 compiler.

## Usage

### Python

1. Navigate to the `python` directory:
```bash
cd python
```
2. Run the main script:
```bash
python main.py
```
3. Enter a series of points as prompted to find their convex hull.

### C++
1. Ensure you have CMake installed.
2. Create a build directory, compile, and run:
3. 
```bash
mkdir build && cd build
cmake ..
make
./convex_hull
```
## Example Input/Output

Given the following points as input:
- \((0, 0), (1, 1), (2, 2), (0, 2), (2, 0)\)

The algorithm will output:
- \((0, 0), (2, 0), (2, 2), (0, 2)\)

These points represent the vertices of the convex hull, ordered counterclockwise.

## License

This project is licensed under the MIT License - see the LICENSE file for details.

