#!/usr/bin/python3
"""task 5"""
def island_perimeter(grid):
    """grid island is a list"""
    per = 0
    for i in range(1, len(grid) - 1):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                per = per + 4
                if grid[i][j+1] == 1:
                    per = per - 1
                if grid[i][j-1] == 1:
                    per = per - 1
                if grid[i-1][j] == 1:
                    per = per - 1
                if grid[i+1][j] == 1:
                    per = per - 1
    return (per)
