int finalValueAfterOperations(char** operations, int operationsSize) {
        int X=0;
        for(int i=0;i<operationsSize;i++){
        X+=(operations[i][1]=='+')?1:-1;
        }
        return X;
}