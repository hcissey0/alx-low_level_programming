#!/usr/bin/python3
"""This is the perimeter island problem"""


def island_perimeter(grid):
    """This function is used to find the perimeter of an island"""

    if grid is None:
        return
    peri = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                peri += 4

                if j > 0 and grid[i][j - 1] == 1:
                    peri -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:
                    peri -= 1

                if i > 0 and grid[i - 1][j] == 1:
                    peri -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:
                    peri -= 1
    return peri
