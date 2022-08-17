#!/usr/bin/env python
"""
    Island Perimeter

"""

def island_perimeter(grid):
    """return the perimeter of the island"""
    perimeter = 0
    first = 0
    island = 0
    if grid is None:
        return 0
    elif grid == [[]]:
        return 0
    else:
        for zone in grid:
            for land in zone:
                if land == 1:
                    island = 1
                    if first == 0:
                        first = 1
                        perimeter += 3
                    else:
                        perimeter += 2
        if island == 1:
            perimeter += 1
    return perimeter
