class Solution:
    # Method-1 : using the Factorial method

    # def generate(self, numRows: int) -> List[List[int]]:
    #     ans = []
    #     for row in range(numRows):
    #         temp = []
    #         for col in range(row+1):
    #             if col == 0 or col == row :
    #                 temp.append(1)
    #             else :
    #                 val = temp[col - 1] * (row - col + 1) // col
    #                 temp.append(val)
    #         ans.append(temp)
    #     return ans

    # Method-2 : 

    def generate(self, numRows: int) -> List[List[int]]:
        ans = [[1]]
        for row  in range(1,numRows):
            temp = [1] + [-1]*(row-1) + [1]

            for col in range(1,row):
                temp[col] = ans[row-1][col-1] + ans[row-1][col]
            
            ans.append(temp)
        return ans



                    

        



        