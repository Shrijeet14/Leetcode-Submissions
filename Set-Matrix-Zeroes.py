class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        zeroList = []
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == 0 :
                    zeroList.append([i,j])
                
        for l in zeroList:
            for k in range(len(matrix[0])):
                matrix[l[0]][k] = 0
            for k in range(len(matrix)):
                matrix[k][l[1]] = 0
        



                    
