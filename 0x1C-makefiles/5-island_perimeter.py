#!/usr/bin/python3
"""Returns the perimeter of the island described in an array (grid)"""


def island_perimeter(grid):
    """Calculate the perimeter"""
    height = len(grid)
    width = len(grid[0])
    perimeter = 0

    if height == 0 or width == 0:
        return perimeter
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                if i - 1 < 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i + 1 == height or grid[i + 1][j] == 0:
                    perimeter += 1
                if j - 1 < 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j + 1 == width or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
