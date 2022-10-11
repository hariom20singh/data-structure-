class Solution:
    def isSafe(self, board, n, row, col):

        if "Q" in board[row]:
            return False

        for r in range(row + 1):
            if board[r][col] == "Q":
                return False

        r, c = row, col
        while r >= 0 and c >= 0:
            if board[r][c] == "Q":
                return False
            r -= 1
            c -= 1

        r, c = row, col
        while r >= 0 and c < n:
            if board[r][c] == "Q":
                return False
            r -= 1
            c += 1
        return True

    def assignQueen(self, board, n, row, ans):
        if row == n:
            ans.append(["".join([board[i][j] for j in range(n)]) for i in range(n)])
            return

        for col in range(n):
            if self.isSafe(board, n, row, col):
                board[row][col] = "Q"
                self.assignQueen(board, n, row + 1, ans)
                board[row][col] = "."

    def solveNQueens(self, n):
        board = [["." for _ in range(n)] for _ in range(n)]
        ans = []
        self.assignQueen(board, n, 0, ans)
        return ans


n = int(input())
print(Solution().solveNQueens(n))