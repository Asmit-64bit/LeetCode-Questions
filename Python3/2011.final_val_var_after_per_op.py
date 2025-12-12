class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        X=0
        for i in range(len(operations)):
            X+=1 if (operations[i]=="X++" or operations[i]=="++X") else -1
        return X