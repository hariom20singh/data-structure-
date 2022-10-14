class Solution:

    # make a set of possible characters
    possible = set(str(nr) for nr in range(1,10))

    def solveSudoku(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        
        # save the board
        self.board = board
        self.dfs()
    
    def dfs(self):

        # find the next empty cell
        rx, cx, complete = self.findEmpty()

        # check whether there are empty cells
        if complete:
            return True
        
        # get the available numbers
        available = self.getPossible(rx, cx)

        # check whether we have available numbers
        if not available:
            return False
        
        # go through available numbers and try them
        for number in available:

            # set the number
            self.board[rx][cx] = number

            # check whether it works
            if self.dfs():
                return True
            
            # reset the number
            self.board[rx][cx] = "."
    
        return False

    def findEmpty(self):
        # find the next free position and if all are filled we can return True
        for rx in range(len(self.board)):
            for cx in range(len(self.board[0])):
                if self.board[rx][cx] == '.':
                    return rx, cx, False
        return -1, -1, True

    def getPossible(self, rx, cx):
        return self.possible - self.getBox(rx, cx) - self.getRow(rx, cx) - self.getCol(rx, cx)

    def getRow(self, rx, cx):
        return set(self.board[rx])

    def getCol(self, rx, cx):
        return set([row[cx] for row in self.board])

    def getBox(self, rx, cx):
        result = set()
        for rx in range(rx // 3 * 3, rx // 3 * 3 + 3):
            result.update(self.board[rx][cx // 3 * 3:cx // 3 * 3 + 3])
        return result
      
