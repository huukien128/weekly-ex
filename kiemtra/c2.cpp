#include <iostream>
using namespace std;

const int MAX_M = 1005, MAX_N = 1005;
int grid[MAX_M][MAX_N];
int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

int main() {
    int M, N, K, Q, x, y, v;
    cin >> M >> N >> K >> Q;

    for (int i = 0; i < K; i++)
        {
        cin >> x >> y >> v;
        grid[x][y] = v;
       }

    while (Q--) {
        cin >> x >> y;
        int sum = 0;
        for (int d = 0; d < 8; d++)
        {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx >= 0 && nx < M && ny >= 0 && ny < N) sum += grid[nx][ny];
        }
        cout << sum << endl;
    }

    return 0;
}

