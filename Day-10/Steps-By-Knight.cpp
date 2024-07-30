public:

    // Helper function to validate if the position is within the bounds of the chessboard.
    bool validation(int x, int y, int N) {
        return !(x >= N || y >= N || x < 0 || y < 0);
    }
    
    // Function to find out minimum steps Knight needs to reach target position.
    int minStepToReachTarget(vector<int>& KnightPos, vector<int>& TargetPos, int N) 
    {
        // Possible moves for a knight.
        int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
        int dy[] = {-1, 1, 2, -2, 2, -2, -1, 1};
    
        // Visited matrix to keep track of visited positions.
        vector<vector<bool>> visited(N, vector<bool>(N, false));
    
        // Queue for BFS. The pair consists of the knight's coordinates and the distance from the starting position.
        queue<pair<pair<int, int>, int>> q;
    
        // Starting position of the knight.
        int startX = KnightPos[0] - 1;
        int startY = KnightPos[1] - 1;
        int targetX = TargetPos[0] - 1;
        int targetY = TargetPos[1] - 1;
    
        // Push the initial position of the knight with a distance of 0.
        q.push({{startX, startY}, 0});
        visited[startX][startY] = true;
    
        while (!q.empty()) {
            // Get the current position and distance.
            auto curr = q.front();
            q.pop();
            int currX = curr.first.first;
            int currY = curr.first.second;
            int currDist = curr.second;
    
            // If the target position is reached, return the distance.
            if (currX == targetX && currY == targetY) {
                return currDist;
            }
    
            // Explore all possible moves of the knight.
            for (int i = 0; i < 8; i++) {
                int x = currX + dx[i];
                int y = currY + dy[i];
    
                // If the new position is valid and not visited, push it to the queue.
                if (validation(x, y, N) && !visited[x][y]) {
                    visited[x][y] = true;
                    q.push({{x, y}, currDist + 1});
                }
            }
        }
    
        // If the target is unreachable, return -1 (or any indicator that the problem specifies).
        return -1;
    }