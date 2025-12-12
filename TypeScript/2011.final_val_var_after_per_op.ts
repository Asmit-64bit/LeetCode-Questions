function finalValueAfterOperations(operations: string[]): number {
    let X=0;
    for(let i=0;i<operations.length;i++){
    X+=(operations[i]=="X++"||operations[i]=="++X")?1:-1;
    }
    return X;
};