#!/usr/bin/python3
"""
    Task 5 in low level
"""


def island_perimeter(grid):
    """ returns perimeter of island """
    perimeter = 0
    if grid is None or len(grid) == 0 or len(grid[0]) == 0:
        return perimeter
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1 and grid[i + 1][j] == 0:
                perimeter += 1
            if grid[i][j] == 1 and grid[i - 1][j] == 0:
                perimeter += 1
            if grid[i][j] == 1 and grid[i][j + 1] == 0:
                perimeter += 1
            if grid[i][j] == 1 and grid[i][j - 1] == 0:
                perimeter += 1
            if j == 100:
                break
        if i == 100:
            break
    return perimeter
