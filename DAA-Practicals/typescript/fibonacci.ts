function fibonacciIterative(n: number): number {

    if(n < 0){
        throw new Error('N cannot be Negative');
    }

    if(n <= 2){
        return n - 1;
    }

    let prevNumber0:number, prevNumber1:number = 0, currentNumber:number = 1;
    for (let i:number = 3; i <= n ; i++) {  

        prevNumber0 = prevNumber1;  
        prevNumber1 = currentNumber;  
        currentNumber = prevNumber0 + prevNumber1; 
    }

    return currentNumber;
}

function fibonacciRecursive(n: number): number {
    
    if(n < 0){
        throw new Error('N cannot be Negative');
    }

    if(n <= 2){
        return n - 1;
    }

    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

console.log(fibonacciIterative(20));
console.log(fibonacciRecursive(20));