#!/usr/bin/python3
"""Defines a function as an island perimeter measuring function."""


def island_perimeter(grid):
    """Returns the perimeter of an island.
    The grid represents a water zone by 0 and land zone by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined within grid.
    """
    width = len(grid[0])
    height = len(grid)
    joins = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    joins += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    joins += 1
    return size * 4 - joins * 2
