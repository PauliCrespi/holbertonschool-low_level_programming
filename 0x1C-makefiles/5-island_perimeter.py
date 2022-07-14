#!/usr/bin/python3
def island_perimeter(grid):
    per = 0
    for i in range(len(grid)):
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
                    per = per - 10
    return (per)
