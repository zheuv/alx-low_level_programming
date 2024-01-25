#!/usr/bin/python3
""" technical interview task """


def island_perimeter(grid):
    """ calculates the perimeter of the island """
    p = 0
    flag = 0
    for j in range(len(grid)):
        for i in range(len(grid[j])):
            if grid[j][i] == 1:
                flag = 1
                if (j == 0) or (i == 0):
                    p += 2
                elif not(
                    grid[j-1][i] == 1 and
                    grid[j][i-1] == 1 and
                    grid[j-1][i-1] == 1
                ):
                    p += 2
    if flag == 1:
        p += 2
    return (p)
