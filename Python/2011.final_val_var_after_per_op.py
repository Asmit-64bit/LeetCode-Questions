class Solution(object):
    def finalValueAfterOperations(self, operations):
        """
        :type operations: List[str]
        :rtype: int
        """
        X=0
        for i in range(len(operations)):
            X+=1 if (operations[i]=="X++" or operations[i]=="++X") else -1
        return X