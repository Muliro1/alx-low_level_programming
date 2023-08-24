#!/usr/bin/python3
"""
module for perimeter of island
"""


def island_perimeter(grid):
    """returns the perimeter of the island
    Args:
         grid (list) = list of integers
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for a in range(height):
        for j in range(width):
            if grid[a][j] == 1:
                size += 1
                ''' checking for boundery or a lake '''
                if (j > 0 and grid[a][j - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
