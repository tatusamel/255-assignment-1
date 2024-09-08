#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <sstream>
#include <fstream>
#include <cmath>
#include <cstdlib>
using namespace std;

/*

200. Number of Islands

Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.
An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

Example 1:

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
Example 2:

Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3

*/

vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};


bool isEligible(vector<vector<char>>& grid, int i, int j) {
    int m = grid.size();
    int n = grid[0].size();

    return i >= 0 && i < m && j >= 0 && j < n;
    
}

void dfs(vector<vector<char>>& grid, int i, int j) {
    // used or not?
    // make sure every node that comes here should be eligible. 

    grid[i][j] = '#';
    // traverse all the 4 directions.

    for (int k = 0; k < 4; k++) {
        int x = i + dx[k];
        int y = j + dy[k];

        if ( isEligible(grid, x, y) && grid[x][y] == '1') {
            dfs(grid, x, y);
        }

    }

}

int numIslands(vector<vector<char>>& grid) {

    int m = grid.size();
    int n = grid[0].size();

    int num_islands = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1') {
                num_islands++;
                dfs(grid, i, j);
            }
        }
    }

    return num_islands;
    
}


int main() {
    
    return 0;
}